﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using LibSVMsharp.Helpers;
using LibSVMsharp.Extensions;
using LibSVMsharp;

namespace LIBSVM
{
    class Program
    {
        static void Main(string[] args)
        {
            // Load the datasets: In this example I use the same datasets for training and testing which is not suggested
            SVMProblem trainingSet = SVMProblemHelper.Load(@"C:\Users\lozzr\Documents\Visual Studio 2015\Projects\MM\MM\Dataset\rt-1.txt");
            SVMProblem testSet = SVMProblemHelper.Load(@"C:\Users\lozzr\Documents\Visual Studio 2015\Projects\MM\MM\Dataset\rt-1.txt");

            // Normalize the datasets if you want: L2 Norm => x / ||x||
            trainingSet = trainingSet.Normalize(SVMNormType.L2);
            testSet = testSet.Normalize(SVMNormType.L2);

            // Select the parameter set
            SVMParameter parameter = new SVMParameter();
            parameter.Type = SVMType.ONE_CLASS;
            parameter.Kernel = SVMKernelType.RBF;
            parameter.C = 8.0;
            parameter.Gamma = 0.0078125;

            // Do cross validation to check this parameter set is correct for the dataset or not
            double[] crossValidationResults; // output labels
            int nFold = 5;
            trainingSet.CrossValidation(parameter, nFold, out crossValidationResults);

            // Evaluate the cross validation result
            // If it is not good enough, select the parameter set again
            double crossValidationAccuracy = trainingSet.EvaluateClassificationProblem(crossValidationResults);

            // Train the model, If your parameter set gives good result on cross validation
            SVMModel model = trainingSet.Train(parameter);

            // Save the model
            SVM.SaveModel(model, @"C:\Users\lozzr\Documents\Visual Studio 2015\Projects\MM\MM\Model\rt-1_model.txt");

            // Predict the instances in the test set
            double[] testResults = testSet.Predict(model);

            // Evaluate the test results
            // int[,] confusionMatrix;
            //double testAccuracy = testSet.EvaluateClassificationProblem(testResults, model.Labels, out confusionMatrix);

            // Print the resutls
            Console.WriteLine("\n\nCross validation accuracy: " + crossValidationAccuracy);
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

            Console.WriteLine("\n\nPress any key to quit...");
            Console.ReadLine();
        }
    }
}
