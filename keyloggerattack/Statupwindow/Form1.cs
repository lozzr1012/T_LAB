using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows.Forms;
using keyloggerattack;
using System.Runtime.InteropServices;
using System.IO;
namespace Statupwindow
{
    
    public partial class Form1 : Form
    {
      

        public static int Confidencelevel = 10;

        int counter = 0;
        public Form1()
        {
            InitializeComponent();
            AllocConsole();//出現命令提示字元
            //指定使用的容器
           label2.BackColor = Color.Transparent;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DialogResult myResult = MessageBox.Show("您初次使用嗎？", "使用者登入確認", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (myResult == DialogResult.Yes)
            {
                Form2 frm = new Form2(this);
                frm.ShowDialog();
            }
            else if (myResult == DialogResult.No)
            {
                //按了否
            }
            /*Thread collectThread = new Thread(new ThreadStart(ThreadMethod_collect));
            collectThread.Name = "蒐集工作執行緒";
            collectThread.Start();
            while (collectThread.ThreadState != ThreadState.Stopped)
            {
            }*/
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Thread.CurrentThread.Name = "主執行緒";
        }

        private void ThreadMethod_collect()
        {
            Thread.Sleep(1000);
            if (this.InvokeRequired)
            {
                MethodInvoker mi = new MethodInvoker(this.Collect);
                this.BeginInvoke(mi, null);
            }
            else
            {
                Collect();
            }

        }

        private void ThreadMethod_Run()
        {
            Thread.Sleep(1000);
            if (this.InvokeRequired)
            {
                MethodInvoker mi = new MethodInvoker(this.Runresult);
                this.BeginInvoke(mi, null);
            }
            else
            {
                Runresult();
            }

        }

        private void ThreadMethod_svm()
        {
            Thread.Sleep(1000);
            if (this.InvokeRequired)
            {
                MethodInvoker mi = new MethodInvoker(this.svmresult);
                this.BeginInvoke(mi, null);
            }
            else
            {
                svmresult();
            }

        }

        private void Collect()
        {
            Thread t1 = new Thread(keyloggerattack.Program.Main);
            t1.Start();
        }

        public void Runresult()
        {
            ThreadPool.QueueUserWorkItem(o => run_result.Read(textBox1.Text));
        }

        public void svmresult()
        {
            //Thread t3 = new Thread(LIB.Libsvm);
            ThreadPool.QueueUserWorkItem(o => LIB.Libsvm(textBox1.Text, Confidencelevel));
            //t3.Start();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Thread workerThread_run = new Thread(new ThreadStart(ThreadMethod_Run));
            workerThread_run.Name = "工作執行緒";
            workerThread_run.Start();
            while (workerThread_run.ThreadState != ThreadState.Stopped)
            {
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            Thread workerThread_svm = new Thread(new ThreadStart(ThreadMethod_svm));
            workerThread_svm.Name = "SVM執行緒";
            workerThread_svm.Start();
            while (workerThread_svm.ThreadState != ThreadState.Stopped)
            {
            }

        }
        
        [DllImport("kernel32.dll", SetLastError = true)]
        [return: MarshalAs(UnmanagedType.Bool)]
        static extern bool AllocConsole();

        [DllImport("Kernel32")]
        public static extern void FreeConsole();

        private void Form1_SizeChanged(object sender, EventArgs e)
        {
            if (this.WindowState == FormWindowState.Minimized)
            {
                this.Hide();
                this.notifyIcon1.Visible = true;
                notifyIcon1.Icon = new Icon("Keyboard.ico"); ;
                notifyIcon1.BalloonTipText = "鍵擊搜集中...";
                notifyIcon1.ShowBalloonTip(1000);
            }

            else if (this.WindowState == FormWindowState.Normal)
            {
                notifyIcon1.BalloonTipText = "視窗化";
                notifyIcon1.ShowBalloonTip(1000);
            }
        }

        private void notifyIcon1_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            this.Show();
            this.WindowState = FormWindowState.Normal;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (File.Exists(@"..\..\..\keyloggerattack\Dataset\" + textBox1.Text + ".txt"))
            {
                MessageBox.Show("使用者存在。開始進行鍵盤蒐集。");
                timer1.Interval = 1000; // 設定每秒觸發一次
                timer1.Enabled = true; // 啟動 Timer
                this.WindowState = FormWindowState.Minimized;
                Thread collectThread = new Thread(new ThreadStart(ThreadMethod_collect));
                collectThread.Name = "蒐集工作執行緒";
                //string logPath = @"..\..\..\keyloggerattack\Dataset\" + textBox1.Text + ".txt";
                collectThread.Start();
                //while (collectThread.ThreadState != ThreadState.Stopped)
                //{
                //}
                textBox1.Visible = false;
                label2.Visible = false;
                button4.Visible = false;
            }
            else
            {
                MessageBox.Show("錯誤，使用者名稱不符。");
                textBox1.Text = "";
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            counter++;
            //if (counter == 10)
            //{
                //if (File.Exists(@"..\..\..\keyloggerattack\Dataset\log.txt"))
                //{
                   // FileStream fsSource = new FileStream(@"..\..\..\keyloggerattack\Dataset\log.txt", FileMode.Open);
                    //FileStream fsTarget = new FileStream(@"..\..\..\keyloggerattack\Dataset\" + textBox1.Text + ".txt", FileMode.Append);
                    //FileStream fsTarget = new FileStream(@"..\..\..\keyloggerattack\Dataset\temp.txt", FileMode.Create);
                   // byte[] sourceArr = new byte[fsSource.Length];
                   // fsSource.Read(sourceArr, 0, sourceArr.Length);//讀取文件

                    //fsTarget.Write(sourceArr, 0, sourceArr.Length);//寫入文件

                  //  fsSource.Close();//釋放資源
                    //fsTarget.Close();//釋放資源

                  //  File.Delete(@"..\..\..\keyloggerattack\Dataset\log.txt");
                //}
          //  }
                if (counter == 20)//每運作十秒，系統會將使用者的鍵擊資料轉成SVM_After_ID，再透過SVM_After_ID建模成SVM_After_ID_model.txt，透過該模型和最初的模型進行SVM預測，看精準率多少。
            {
                Thread workerThread_run = new Thread(new ThreadStart(ThreadMethod_Run));
                workerThread_run.Name = "工作執行緒";
                Thread workerThread_svm = new Thread(new ThreadStart(ThreadMethod_svm));
                workerThread_svm.Name = "SVM執行緒";
                if (File.Exists(@"..\..\..\keyloggerattack\Dataset\log.txt"))
                    {
                        
                        workerThread_run.Start();
                        /*while (workerThread_run.ThreadState != ThreadState.Stopped)
                        {
                        }*/
                         
                         workerThread_svm.Start();
                         /*while (workerThread_svm.ThreadState != ThreadState.Stopped)
                        {
                        }*/
                    }
                /*if (counter == 25)
                {
                    //workerThread_run.Interrupt();
                   // workerThread_svm.Interrupt();
                    counter = 0;
                }*/

                /*if(counter == 40)
                {
                    workerThread_run.();
                    workerThread_svm.Resume();
                }*/

                }
            }

        private void label2_Click_1(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
