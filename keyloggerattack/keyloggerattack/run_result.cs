//加入以下 Namespace
using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;
using System.Windows;
using System.Linq;
using System.Diagnostics;
using Microsoft.Win32;
using System.Net;
using System.Threading;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;
namespace keyloggerattack
{
    public class run_result
    {
        static int cycleword = 0;
        static int Fivestart = 0;
        static List<int> readnow = new List<int>();
        public static void Read(string i)//timetick建SVM時使用。
        {
            //int g = 1;
            
            
           
                
               
                //Thread.Sleep(30000);
                string logPath_1 = @"..\..\..\keyloggerattack\Dataset\SVM_temp_east.txt";//東
            string logPath_2 = @"..\..\..\keyloggerattack\Dataset\SVM_temp_ground.txt";//地
            string logPath_3 = @"..\..\..\keyloggerattack\Dataset\SVM_temp_sea.txt";//海
            string logPath_4 = @"..\..\..\keyloggerattack\Dataset\SVM_temp_station.txt";//臺
            StreamWriter sw_1 = new StreamWriter(logPath_1,true);//東
            StreamWriter sw_2 = new StreamWriter(logPath_2, true);//地
            StreamWriter sw_3 = new StreamWriter(logPath_3, true);//海
            StreamWriter sw_4 = new StreamWriter(logPath_4, true);//臺

            string logPath_5 = @"..\..\..\keyloggerattack\Dataset\SVM_Inertia_temp_east.txt";//東(慣性因子)
            string logPath_6 = @"..\..\..\keyloggerattack\Dataset\SVM_Inertia_temp_Ground.txt";//地(慣性因子)
            string logPath_7 = @"..\..\..\keyloggerattack\Dataset\SVM_Inertia_temp_sea.txt";//海(慣性因子)
            string logPath_8 = @"..\..\..\keyloggerattack\Dataset\SVM_Inertia_temp_station.txt";//臺(慣性因子)
            StreamWriter sw_5 = new StreamWriter(logPath_5, true);//東
            StreamWriter sw_6 = new StreamWriter(logPath_6, true);//地
            StreamWriter sw_7 = new StreamWriter(logPath_7, true);//海
            StreamWriter sw_8 = new StreamWriter(logPath_8, true);//臺
            //string s1;
            int txtLength = 0, s2int = 0, keyint= 0, Dwelltimeint = 0, Intervalint = 0,stringlength = 0;
            int j = 0,outputint = 0;
            string[] s2 = new string[10000];
            string[] key = new string[10000];
            int[] Dwelltime = new int[10000];
            int[] Interval = new int[10000];
                //var handle = GetConsoleWindow();
                //ShowWindow(handle,1);
                if (File.Exists(@"..\..\..\keyloggerattack\Dataset\log.txt"))
                {
                    //讀取txt code
                    StreamReader sr = new StreamReader(@"..\..\..\keyloggerattack\Dataset\log.txt");
                    string line = string.Empty;

                    while (!sr.EndOfStream)
                    {
                        txtLength++;
                        s2[s2int] = sr.ReadLine();
                        s2int++;
                    }

                    while (j < txtLength)
                    {
                        if (s2[j].Substring(0, 1) == null)
                        {
                            break;
                        }
                        if (s2[j].Substring(0, 1) == "K")
                        {
                            stringlength = s2[j].Length - 1;
                            key[keyint] = s2[j].Substring(1, stringlength);
                            keyint++;
                            stringlength = 0;
                            j++;
                        }
                        else if (s2[j].Substring(0, 1) == "D")
                        {
                            stringlength = s2[j].Length - 1;
                            Dwelltime[Dwelltimeint] = Int32.Parse(s2[j].Substring(1, stringlength));
                            Dwelltimeint++;
                            stringlength = 0;
                            j++;
                        }
                        else if (s2[j].Substring(0, 1) == "I")
                        {
                            stringlength = s2[j].Length - 1;
                            Interval[Intervalint] = Int32.Parse(s2[j].Substring(1, stringlength));
                            Intervalint++;
                            stringlength = 0;
                            j++;
                        }
                    }

                    j = Fivestart;

                   

                    while (j < txtLength)
                    {
                    if (key[j] == "D2" && key[j + 1] == "J" && key[j + 2] == "OemQuestion" && key[j + 3] == "Space")//東(ㄉㄨㄥ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_5.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D2" && key[j + 1] == "OemQuestion" && key[j + 2] == "J" && key[j + 3] == "Space")//東(ㄉㄥㄨ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_5.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D2" && key[j + 1] == "J" && key[j + 2] == "OemQuestion" && key[j + 3] == "Space" && key[j + 4] == "D1" && key[j + 5] == "O" && key[j + 6] == "D3")//東北
                        {
                           
                        Fivestart = j;

                            while (outputint < 1)
                            {
                                sw_1.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "D2" && key[j + 1] == "OemQuestion" && key[j + 2] == "J" && key[j + 3] == "Space" && key[j + 4] == "D1" && key[j + 5] == "O" && key[j + 6] == "D3")//東北(ㄉㄥㄨ)
                    {

                        Fivestart = j;

                        while (outputint < 1)
                        {
                            sw_1.WriteLine("1 1:1 2:" + (Interval[j + outputint]+50) + " 3:" + (Dwelltime[j + outputint]+50) + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]+50) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]+50) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]+50));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D2" && key[j + 1] == "J" && key[j + 2] == "OemQuestion" && key[j + 3] == "Space" && key[j + 4] == "D1" && key[j + 5] == "J" && key[j + 6] == "D4")//東部
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_1.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "D2" && key[j + 1] == "OemQuestion" && key[j + 2] == "J" && key[j + 3] == "Space" && key[j + 4] == "D1" && key[j + 5] == "J" && key[j + 6] == "D4")//東部(ㄉㄥㄨ)
                    {

                        Fivestart = j;

                        while (outputint < 1)
                        {
                            sw_1.WriteLine("1 1:2 2:" + (Interval[j + outputint] + 50) + " 3:" + (Dwelltime[j + outputint] + 50) + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 50) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 50) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1] + 50));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D2" && key[j + 1] == "U" && key[j + 2] == "D4")//地(ㄉ一ˋ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_6.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "U" && key[j + 1] == "D2" && key[j + 2] == "D4")//地(一ㄉˋ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_6.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D2" && key[j + 1] == "U" && key[j + 2] == "D4" && key[j + 3] == "V" && key[j + 4] == "U" && key[j + 5] == "OemQuestion" && key[j + 6] == "D6")//地形
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_2.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "U" && key[j + 1] == "D2" && key[j + 2] == "D4" && key[j + 3] == "V" && key[j + 4] == "U" && key[j + 5] == "OemQuestion" && key[j + 6] == "D6")//地形(一ㄉˋ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_2.WriteLine("1 1:1 2:" + Interval[j + outputint] + 50 + " 3:" + Dwelltime[j + outputint] + 50 + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 50) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 50) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]) + 50);
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D2" && key[j + 1] == "U" && key[j + 2] == "D4" && key[j + 3] == "F" && key[j + 4] == "M" && key[j + 5] == "Space")//地區
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_2.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "U" && key[j + 1] == "D2" && key[j + 2] == "D4" && key[j + 3] == "F" && key[j + 4] == "M" && key[j + 5] == "Space")//地區(一ㄉˋ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_2.WriteLine("1 1:2 2:" + Interval[j + outputint] + 100 + " 3:" + Dwelltime[j + outputint] + 100 + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 100) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]) + 100);
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D2" && key[j + 1] == "U" && key[j + 2] == "D4" && key[j + 3] == "G" && key[j + 4] == "D4")//地勢
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_2.WriteLine("1 1:3 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "U" && key[j + 1] == "D2" && key[j + 2] == "D4" && key[j + 3] == "G" && key[j + 4] == "D4")//地勢(一ㄉˋ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_2.WriteLine("1 1:3 2:" + Interval[j + outputint] + 100 + " 3:" + Dwelltime[j + outputint] + 100 + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 100) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]) + 100);
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "C" && key[j + 1] == "D9" && key[j + 2] == "D3")//海(ㄏㄞˇ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_7.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D9" && key[j + 1] == "C" && key[j + 2] == "D3")//海(ㄞㄏˇ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_7.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "C" && key[j + 1] == "D9" && key[j + 2] == "D3" && key[j + 3] == "D0" && key[j + 4] == "D4")//海岸
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_3.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "D9" && key[j + 1] == "C" && key[j + 2] == "D3" && key[j + 3] == "D0" && key[j + 4] == "D4")//海岸(ㄞㄏˇ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_3.WriteLine("1 1:1 2:" + Interval[j + outputint] + 100 + " 3:" + Dwelltime[j + outputint] + 100 + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 100) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100));
                            outputint++;
                        }
                        outputint = 0;
                    }

                    if (key[j] == "C" && key[j + 1] == "D9" && key[j + 2] == "D3" && key[j + 3] == "E" && key[j + 4] == "OemPeriod" && key[j + 5] == "Space")//海溝
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_3.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "D9" && key[j + 1] == "C" && key[j + 2] == "D3" && key[j + 3] == "E" && key[j + 4] == "OemPeriod" && key[j + 5] == "Space")//海溝(ㄞㄏˇ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_3.WriteLine("1 1:2 2:" + Interval[j + outputint] + 100 + " 3:" + Dwelltime[j + outputint] + 100 + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 100) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "W" && key[j + 1] == "D9" && key[j + 2] == "D6")//臺(ㄊㄞˊ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_8.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "D9" && key[j + 1] == "W" && key[j + 2] == "D6")//臺(ㄞㄊˊ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_8.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "W" && key[j + 1] == "D9" && key[j + 2] == "D6" && key[j + 3] == "D1" && key[j + 4] == "O" && key[j + 5] == "D3")//台北
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_4.WriteLine("1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "D9" && key[j + 1] == "W" && key[j + 2] == "D6" && key[j + 3] == "D1" && key[j + 4] == "O" && key[j + 5] == "D3")//台北(ㄞㄊˊ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_4.WriteLine("1 1:1 2:" + Interval[j + outputint] +100 + " 3:" + Dwelltime[j + outputint] + 100 + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 100) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    if (key[j] == "W" && key[j + 1] == "D9" && key[j + 2] == "D6" && key[j + 3] == "D2" && key[j + 4] == "U" && key[j + 5] == "D4")//台地
                        {
                        Fivestart = j;
                        while (outputint < 1)
                            {
                                sw_4.WriteLine("1 1:2 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                                outputint++;
                            }
                            outputint = 0;
                        }
                    if (key[j] == "D9" && key[j + 1] == "W" && key[j + 2] == "D6" && key[j + 3] == "D2" && key[j + 4] == "U" && key[j + 5] == "D4")//台地(ㄞㄊˊ)
                    {
                        Fivestart = j;
                        while (outputint < 1)
                        {
                            sw_4.WriteLine("1 1:2 2:" + Interval[j + outputint] + 100 + " 3:" + Dwelltime[j + outputint] + 100 + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint] + 100) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1] + 100));
                            outputint++;
                        }
                        outputint = 0;
                    }
                    j++;

                    }


                Fivestart++;
                    sw_1.Close();
                    sw_2.Close();
                    sw_3.Close();
                    sw_4.Close();
                sw_5.Close();
                sw_6.Close();
                sw_7.Close();
                sw_8.Close();
                sr.Close();
                    sw_1.Dispose();
                    sw_2.Dispose();
                    sw_3.Dispose();
                    sw_4.Dispose();
                sw_5.Dispose();
                sw_6.Dispose();
                sw_7.Dispose();
                sw_8.Dispose();
                sr.Dispose();
                

            }

        }
      //  [DllImport("kernel32.dll")]
       // static extern IntPtr GetConsoleWindow();
       // [DllImport("user32.dll")]
       // static extern bool ShowWindow(IntPtr hWnd, int nCmdShow);
    }
}
