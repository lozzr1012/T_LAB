using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;
using System.Runtime.InteropServices;
using keyloggerattack;
using System.Windows.Forms;
using System.IO;
namespace Statupwindow
{
    
    public partial class Form2 : Form
    {
        public int Numofarticles = 0;

        private Form3 F3;
        //public int VersionNum = 1;
        public Form2(Form3 f3,string Name)
        {
            InitializeComponent();
            F3 = f3;
        }
        int counter;

        private void labelbox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
        private void Restart()
        {
            Thread thtmp = new Thread(new System.Threading.ParameterizedThreadStart(run));
            object appName = Application.ExecutablePath;
            Thread.Sleep(6000);
            thtmp.Start(appName);
        }

        private void run(Object obj)
        {
            System.Diagnostics.Process ps = new System.Diagnostics.Process();
            ps.StartInfo.FileName = obj.ToString();
            ps.Start();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            Thread collectThread = new Thread(new ThreadStart(ThreadMethod_collect));
            collectThread.Name = "蒐集工作執行緒";
            // ManualResetEvent MTestTdEvent = new ManualResetEvent(false);
            //string logPath = @"..\..\..\keyloggerattack\Dataset\" + Name + "-"+ VersionNum +".txt";
            string logPath = @"..\..\..\keyloggerattack\Dataset\" + Name + ".txt";
            //VersionNum++;
            /*StreamWriter sw = new StreamWriter(logPath);
            sw.WriteLine(Name);*/
            if (button1.Text == "START")
            {
                button1.Text = "SAVE";
                textBox1.Enabled = true;
                //collectThread.IsBackground = true;
                collectThread.Start();
                while (collectThread.ThreadState != ThreadState.Stopped)
                {
                }

            }
            else if (button1.Text == "SAVE")
            {
                //MTestTdEvent.WaitOne();

                //Thread.Sleep(1000);
                // MTestTdEvent.Set();
                // File.Copy(@"..\..\..\keyloggerattack\Dataset\log.txt", @"..\..\..\keyloggerattack\Dataset\" + Name + "-" + (VersionNum-2) + ".txt");
                // File.Delete(@"..\..\..\keyloggerattack\Dataset\log.txt");
                Numofarticles++;
                textBox1.Text = "";
                /*if(Numofarticles == 1)
                {
                    label2.Text = "整個桃園臺地。桃園臺地位於桃園市，在臺北盆地和林口臺地之西，以及湖口臺地和關西臺地之東。桃園市除了復興區屬雪山山脈以及龜山區東部屬林口臺地以外，其他地區皆屬桃園臺地。桃園臺地有大漢溪水系、南崁溪兩個主要的水系，及埔心溪、新街溪等獨流入海的水系，這些河川除了大漢溪自臺地東側向北流入臺北盆地外，其他多數溪流多平行切割臺地面而獨流入海。臺北開墾的歷史相當悠久，但城市規模的成型，則起始於清治時期建立的艋舺、大稻埕兩處聚落，以及1884年完工的臺北府城。"+'\n'+ "黃金海岸是臺南市著名的危險水域，長年禁止民眾游泳，原因是黃金海岸表面看似平靜，海底卻有足以讓成人滅頂的海溝，海溝在夏季也普遍離海岸較近，民眾可能一個不注意就踩入海溝內，因而發生溺水意外。黃金海岸也因為海砂不斷移動，導致海灘地形跟著不斷變化，甚至形成要命的海溝。"+'\n'+ "蒲與曾研究臺灣東部東北季風演變，臺灣東部蘭嶼每年十一月起至二月地面盛行東北季風，研究中正國際機場航空氣候，每年九月至翌年五月受東北季風的影響，盛行東北風和東北東風。臺灣北部與東部高空平均夏季風都很微弱，惟東部近地層夏季風較早。"+'\n'+ "中國的地形特徵，中國具備五大地形，地形種類複雜，地勢西高東低，東邊地勢低平；西邊地勢較高，其中盆地為四周高而中間低的地形，高原為高而表面平坦的地形。中國四大平原分布為東北地區、華北地區、華中地區與華南地區。";
                }*/
                if(Numofarticles == 1)
                {
                    DialogResult result;
                    DialogResult result2;
                    if (File.Exists(@"..\..\..\keyloggerattack\Dataset\log.txt"))
                    {
                        result = MessageBox.Show("資料蒐集完成!將重新啟動程式並登入您的帳戶。");

                        File.Copy(@"..\..\..\keyloggerattack\Dataset\log.txt", @"..\..\..\keyloggerattack\Dataset\" + Name + ".txt");
                        //Thread workerThread_run = new Thread(new ThreadStart(ThreadMethod_Run));
                        //workerThread_run.Name = "工作執行緒";
                        runresult.Read(Name);
                        //workerThread_run.Start();
                        if (result == DialogResult.OK)
                        {


                            //Thread workerThread_svm = new Thread(new ThreadStart(ThreadMethod_svm));
                            //runresult.Read(Name);
                            File.Delete(@"..\..\..\keyloggerattack\Dataset\log.txt");
                            //workerThread_run.Join();
                            //workerThread_svm.Join();

                            timer1.Interval = 1000; // 設定每秒觸發一次
                            timer1.Enabled = true; // 啟動 Timer
                                                   //this.Close();
                                                   //F1.WindowState = FormWindowState.Minimized;
                                                   /*File.Copy(@"..\..\..\keyloggerattack\Dataset\log.txt", @"..\..\..\keyloggerattack\Dataset\" + Name + ".txt");
                                                   Thread workerThread_run = new Thread(new ThreadStart(ThreadMethod_Run));
                                                   workerThread_run.Name = "工作執行緒";
                                                   workerThread_run.Start();
                                                   Thread workerThread_svm = new Thread(new ThreadStart(ThreadMethod_svm));
                                                   workerThread_svm.Name = "SVM執行緒";
                                                   workerThread_svm.Start();*/
                                                   //workerThread_run.IsBackground = true;
                                                   //workerThread_run.Abort();
                                                   //collectThread.Abort();

                            /*if (collectThread != null && collectThread.IsAlive)
                            {
                                result = MessageBox.Show("還在。");
                                collectThread.Abort();
                            }
                            else
                                result = MessageBox.Show("不在");*/

                            /*Thread workerThread_svm = new Thread(new ThreadStart(ThreadMethod_svm));
                            workerThread_svm.Name = "SVM執行緒";
                            workerThread_svm.Start();
                           // workerThread_svm.IsBackground = true;
                            //workerThread_svm.Abort();*/

                            LIB2.Libsvm(Name);
                            result2 = MessageBox.Show("請重新啟動您的程式。");
                            if (result2 == DialogResult.OK)
                            {
                                //workerThread_run.Abort();
                                //workerThread_svm.Abort();
                                keystroke.Keystop();
                                Application.ExitThread();
                                Restart();
                               // workerThread_run.Abort();
                                //workerThread_svm.Abort();
                            }
                        }
                    }
                    else
                    {
                        result = MessageBox.Show("您並沒有進行鍵擊的動作，請試著鍵入文章內容");
                        Numofarticles = 0;
                    }

                    

                }
            }


        }
            public void ThreadMethod_collect()
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
        public void ThreadMethod_svm()
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
        public void ThreadMethod_Run()
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

        private void Collect()
        {
            Thread t1 = new Thread(keystroke.Key);
            t1.Start();
        }

        private void Collectstop()
        {
            Thread t1 = new Thread(keystroke.Keystop);
            t1.Start();
        }

        public void Runresult()
        {
            ThreadPool.QueueUserWorkItem(o => runresult.Read(Name));
        }

        public void svmresult()
        {
            //Thread t3 = new Thread(LIB.Libsvm);
            ThreadPool.QueueUserWorkItem(o => LIB2.Libsvm(Name));
            //t3.Start();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //string logPath = @"..\..\..\keyloggerattack\Dataset\"+Name+".txt";
            //StreamWriter sw = new StreamWriter(logPath);
            label2.Visible = true;
            button1.Visible = true;
            textBox1.Visible = true;

            label3.Visible = false;
            button2.Visible = false;
            textBox2.Visible = false;
            //sw.Close();
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            int i = textBox3.SelectionStart;
            textBox3.Text = System.Text.RegularExpressions.Regex.Replace(textBox3.Text, @"[^\u4E00-\u9FA5]", string.Empty);
            string logPath = @"..\..\..\keyloggerattack\Dataset\chinesetest.txt";
            StreamWriter sw = new StreamWriter(logPath);
            sw.WriteLine(textBox3.Text);
            sw.Close();
            
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if ((File.Exists(@"..\..\..\keyloggerattack\Dataset\log.txt")))
            {
                File.Delete(@"..\..\..\keyloggerattack\Dataset\log.txt");
            }
            Application.Exit();
        }
    }
}
