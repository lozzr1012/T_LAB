using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using LibSVMsharp.Helpers;
using LibSVMsharp.Extensions;
using LibSVMsharp;
using System.Runtime.InteropServices;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Threading;
using System.Windows.Forms;
using keyloggerattack;
using System.IO;

namespace keyloggerattack
{
    public class LIB
    {
        public static void Libsvm(string user,int Confidencelevel)
        {

            
                int Y = 4;
                string word = "east";
                //Thread.Sleep(31000);
                while (Y > 0)
                {
                    if (Y == 3)
                    {
                        word = "Ground";
                    }
                    if (Y == 2)
                    {
                        word = "sea";
                    }
                    if (Y == 1)
                    {
                        word = "station";
                    }
                    if (File.Exists(@"..\..\..\keyloggerattack\Dataset\SVM_temp_" + word + ".txt"))
                    {
                        // Load the datasets: In this example I use the same datasets for training and testing which is not suggested
                        SVMProblem trainingSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_" + user + "_" + word + ".txt");
                        //SVMProblem testSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_" + user + "_east.txt");
                        //SVMProblem trainingSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_temp_east.txt");
                        SVMProblem testSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_temp_" + word + ".txt");
                        //SVMProblem trainingSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\1012964-Ground-train.txt");
                        //SVMProblem testSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\1012964-Ground-train.txt");

                        //Normalize the datasets if you want: L2 Norm => x / ||x||
                        trainingSet = trainingSet.Normalize(SVMNormType.L2);
                        testSet = testSet.Normalize(SVMNormType.L2);

                        // Select the parameter set
                        SVMParameter parameter = new SVMParameter();
                        parameter.Type = SVMType.ONE_CLASS;
                        parameter.Kernel = SVMKernelType.RBF;
                        parameter.C = 8;
                        parameter.Gamma = 0.0078125;
                        parameter.Nu = 0.3;

                        // Do cross validation to check this parameter set is correct for the dataset or not
                        double[] crossValidationResults; // output labels
                        int nFold = 5;
                        trainingSet.CrossValidation(parameter, nFold, out crossValidationResults);

                        // Evaluate the cross validation result
                        // If it is not good enough, select the parameter set again
                        double crossValidationAccuracy = trainingSet.EvaluateClassificationProblem(crossValidationResults);

                        // Train the model, If your parameter set gives good result on cross validation
                        //SVMModel model = SVM.Train(trainingSet, parameter);
                        SVMModel model = SVM.LoadModel(@"..\..\..\keyloggerattack\Dataset\SVM_" + user + "_" + word + "_model.txt");
                        // Save the model
                        //SVM.SaveModel(model, @"..\..\..\keyloggerattack\Dataset\SVM_" + user + word + "_model.txt");
                        //SVM.SaveModel(model, @"..\..\..\keyloggerattack\Dataset\1012964-Ground-train_model.txt");

                        // Predict the instances in the test set
                        double[] testResults = testSet.Predict(model);
                        double[] target = new double[testSet.Length];
                        // Evaluate the test results
                        int[,] confusionMatrix;
                        //double testAccuracy = testSet.EvaluateClassificationProblem(testResults, model.Labels, out confusionMatrix);
                        for (int i = 0; i < testSet.Length; i++)
                            target[i] = SVM.Predict(model, testSet.X[i]);


                        double accuracy = SVMHelper.EvaluateClassificationProblem(testSet, testResults);
                        // Print the resutls
                        Console.WriteLine("\n\nThe accuracy: " + accuracy);
                        //Console.WriteLine("\n\nThe testAccuracy: " + testAccuracy);
                        MessageBox.Show(word+"(認知因子)精確率為：" + accuracy);
                        if (accuracy >= 50)
                        {
                            Confidencelevel++;
                        }
                        else if(accuracy < 50)
                        {
                            Confidencelevel--;
                        }

                        if (Confidencelevel < 0)
                        {
                            MessageBox.Show("警告!!你可能不是合法使用者。");
                        }
                        if (Y == 1)
                        { 
                        MessageBox.Show("目前的信心水準為：" + Confidencelevel);
                    }
                        File.Delete(@"..\..\..\keyloggerattack\Dataset\SVM_temp_" + word + ".txt");
                    }

                if (File.Exists(@"..\..\..\keyloggerattack\Dataset\SVM_Inertia_temp_" + word + ".txt"))
                {
                    // Load the datasets: In this example I use the same datasets for training and testing which is not suggested
                    SVMProblem trainingSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_" + user + "_" + word + ".txt");
                    //SVMProblem testSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_" + user + "_east.txt");
                    //SVMProblem trainingSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_temp_east.txt");
                    SVMProblem testSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\SVM_Inertia_temp_" + word + ".txt");
                    //SVMProblem trainingSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\1012964-Ground-train.txt");
                    //SVMProblem testSet = SVMProblemHelper.Load(@"..\..\..\keyloggerattack\Dataset\1012964-Ground-train.txt");

                    //Normalize the datasets if you want: L2 Norm => x / ||x||
                    trainingSet = trainingSet.Normalize(SVMNormType.L2);
                    testSet = testSet.Normalize(SVMNormType.L2);

                    // Select the parameter set
                    SVMParameter parameter = new SVMParameter();
                    parameter.Type = SVMType.ONE_CLASS;
                    parameter.Kernel = SVMKernelType.RBF;
                    parameter.C = 8;
                    parameter.Gamma = 0.0078125;
                    parameter.Nu = 0.5;

                    // Do cross validation to check this parameter set is correct for the dataset or not
                    double[] crossValidationResults; // output labels
                    int nFold = 5;
                    trainingSet.CrossValidation(parameter, nFold, out crossValidationResults);

                    // Evaluate the cross validation result
                    // If it is not good enough, select the parameter set again
                    double crossValidationAccuracy = trainingSet.EvaluateClassificationProblem(crossValidationResults);

                    // Train the model, If your parameter set gives good result on cross validation
                    //SVMModel model = SVM.Train(trainingSet, parameter);
                    SVMModel model = SVM.LoadModel(@"..\..\..\keyloggerattack\Dataset\SVM_Inertia_" + user + "_" + word + "_model.txt");
                    // Save the model
                    //SVM.SaveModel(model, @"..\..\..\keyloggerattack\Dataset\SVM_" + user + word + "_model.txt");
                    //SVM.SaveModel(model, @"..\..\..\keyloggerattack\Dataset\1012964-Ground-train_model.txt");

                    // Predict the instances in the test set
                    double[] testResults = testSet.Predict(model);
                    double[] target = new double[testSet.Length];
                    // Evaluate the test results
                    int[,] confusionMatrix;
                    //double testAccuracy = testSet.EvaluateClassificationProblem(testResults, model.Labels, out confusionMatrix);
                    for (int i = 0; i < testSet.Length; i++)
                        target[i] = SVM.Predict(model, testSet.X[i]);


                    double accuracy = SVMHelper.EvaluateClassificationProblem(testSet, testResults);
                    // Print the resutls
                    Console.WriteLine("\n\nThe accuracy: " + accuracy);
                    //Console.WriteLine("\n\nThe testAccuracy: " + testAccuracy);
                   // MessageBox.Show(word+"(慣性因子)精確率為：" + accuracy);
                    File.Delete(@"..\..\..\keyloggerattack\Dataset\SVM_Inertia_temp_" + word + ".txt");
                }
                Y--;
                }
                // Console.WriteLine("\n\nCross validation accuracy: " + crossValidationAccuracy);
                // Console.WriteLine("\nTest accuracy: " + testAccuracy);
                //Console.WriteLine("\nConfusion matrix:\n");

                // Print formatted confusion matrix
                //Console.Write(String.Format("{0,6}", ""));
                /*for (int i = 0; i < model.Labels.Length; i++)
                    Console.Write(String.Format("{0,5}", "(" + model.Labels[i] + ")"));
                Console.WriteLine();
               /* for (int i = 0; i < confusionMatrix.GetLength(0); i++)
                {
                    Console.Write(String.Format("{0,5}", "(" + model.Labels[i] + ")"));
                    for (int j = 0; j < confusionMatrix.GetLength(1); j++)
                        Console.Write(String.Format("{0,5}", confusionMatrix[i, j]));
                    Console.WriteLine();
                }*/

                
            
        }


    }
}
