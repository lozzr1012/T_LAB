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
namespace Statupwindow
{
    public partial class Form1 : Form
    {

    public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Thread collectThread = new Thread(new ThreadStart(ThreadMethod_collect));
            collectThread.Name = "蒐集工作執行緒";
            collectThread.Start();
            while (collectThread.ThreadState != ThreadState.Stopped)
            {
            }
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

        private void Collect()
        {
            Thread t1 = new Thread(keyloggerattack.Program.Main);
            t1.Start();
        }

        public void Runresult()
        {
            Thread t2 = new Thread(run_result.Read);
            t2.Start();
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
    }
}
