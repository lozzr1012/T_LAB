#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<time.h>
#define MAX 100000
#define MIN 100000
int main()
{


	struct Word
	{
		char str31[5];
		int math31;
		int math32;
	};

	struct Word arr33[10000];

	int number, cross = 1;
	char filename[20], filename1[40], filename2[40], filename3[40], filename4[40];
	char exist[40], exist1[40], exist2[40], exist3[40], exist4[40], exist5[40];
	FILE *file, *file1, *file2, *file3, *file4,
		*Presence, *Presence1, *Presence2, *Presence3, *Presence4, *Presence5,
		*run;
	int ii, jj,
		i = 0, j = 0,
		a = 0, arri = 0, arrj = 0, checkarr = 0, b = 0, c,
		math1 = 0, math2 = 0, math3 = 0, math4 = 0,
		pree = 0, Interval = 0,
		Dwell_time = 0, Latency = 0, Flight_time = 0, Up_to_up = 0, num_std = 0,
		Punctuation = 0, word = 0, r = -2, preInterval = 0, totalword1 = 0, totalword2 = 0, wordi = 0, wordj = 0;
	int round, trainer;
	char arr[MIN][10], key[MAX], arr3[MAX], arr3222[MAX], str1[5], str2[5], arr3rr[1], pre[MAX], last[5], arr2[MAX];
	int tai, ground, east, sea, first, second, third;




	for (number = 2964; number <= 4930; number++)
	{

		srand(time(0));
	again:
		trainer = rand() % 1967 + 2964;
		sprintf(exist, "101%d-1.txt", trainer);
		Presence = fopen(exist, "r");
		sprintf(exist1, "101%d-1.txt", number);
		Presence1 = fopen(exist1, "r");

		if (trainer == number) {
			printf("1");
			fclose(Presence);
			fclose(Presence1);
			goto again;

		}
		else if (!Presence) {
			//printf("3");
			printf("%d", trainer + 1010000);
			fclose(Presence);
			fclose(Presence1);
			goto again;

		}
		else if (!Presence1)
		{
			fclose(Presence);
			fclose(Presence1);
			number++;
			goto again;
		}
		else {


			printf("2");
			fclose(Presence);
			fclose(Presence1);
			sprintf(exist1, "101%d-1.txt", trainer);
			sprintf(exist2, "101%d-2.txt", trainer);
			sprintf(exist3, "101%d-3.txt", trainer);
			sprintf(exist4, "101%d-4.txt", trainer);
			sprintf(exist5, "101%d-5.txt", trainer);
			Presence1 = fopen(exist1, "r");
			Presence2 = fopen(exist2, "r");
			Presence3 = fopen(exist3, "r");
			Presence4 = fopen(exist4, "r");
			Presence5 = fopen(exist5, "r");
		}




		for (round = 1; round <= 5; round++)
		{
			//非法使用者







			if (cross == round) {
			}
			else {




				sprintf(filename, "101%d-%d.txt", trainer, round);
				file = fopen(filename, "r");		//創造test3.txt檔


				i = 0;
				j = 0;
				a = 0;
				arri = 0;
				arrj = 0;
				checkarr = 0;
				b = 0;
				math1 = 0;
				math2 = 0;
				math3 = 0;
				math4 = 0;
				pree = 0;
				Interval = 0;
				Dwell_time = 0;
				Latency = 0;
				Flight_time = 0;
				Up_to_up = 0;
				num_std = 0;
				if (file)
				{

					sprintf(filename1, "Result-1/101%d-Tai-test.txt", number);
					file1 = fopen(filename1, "a");		//創造test3.txt檔
					sprintf(filename2, "Result-1/101%d-Ground-test.txt", number);
					file2 = fopen(filename2, "a");		//創造test3.txt檔
					sprintf(filename3, "Result-1/101%d-East-test.txt", number);
					file3 = fopen(filename3, "a");		//創造test3.txt檔
					sprintf(filename4, "Result-1/101%d-Sea-test.txt", number);
					file4 = fopen(filename4, "a");		//創造test3.txt檔





					for (j = 0; j<MAX; j++)					//洗白
						key[j] = ' ';
					for (i = 0; i<10; i++)
					{
						for (j = 0; j<MIN; j++)					//洗白
							arr[j][i] = ' ';

					}
					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;
					i = 0;
					while (!feof(file))					//將 test2.txt檔的文字個別輸進key[i]中
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//關閉test2.txt檔
					file = fopen("test2.txt", "w");		//創造test3.txt檔
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//當遇見KeyDown文字時
							{
								i = i + 9;
								if (key[i] == 'B'&&key[i + 1] == 'a'&&key[i + 2] == 'c'&&key[i + 3] == 'k'&&key[i + 4] == 'S'&&key[i + 5] == 'p'&&key[i + 6] == 'a'&&key[i + 7] == 'c'&&key[i + 8] == 'e') 					//判斷是否為迴車鍵
								{
									i = i + 13;
								}
								else if (key[i] == 'E'&&key[i + 1] == 'n'&&key[i + 2] == 't'&&key[i + 3] == 'e'&&key[i + 4] == 'r')
								{
									i = i + 9;
								}
								else if (key[i] == 'L'&&key[i + 1] == 'e'&&key[i + 2] == 'f'&&key[i + 3] == 't')
								{
									i = i + 8;
								}
								else if (key[i] == 'D'&&key[i + 1] == 'o'&&key[i + 2] == 'w'&&key[i + 3] == 'n')
								{
									i = i + 8;
								}
								else if (key[i] == 'R'&&key[i + 1] == 'i'&&key[i + 2] == 'g'&&key[i + 3] == 'h'&&key[i + 4] == 't')
								{
									i = i + 9;
								}
								else if (key[i] == 'U'&&key[i + 1] == 'p')
								{
									i = i + 6;
								}
								else
								{
									for (j = 0; j<20; j++)
									{
										if (key[i] == '\"') 																		//如果遇到「"」就將「:」輸進test3.txt檔，跳出for迴圈
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//如果沒有遇到「"」就將文字輸進test3.txt檔
										{
											//printf("%c",key[i]);
											//fprintf(file,"%c",key[i]);
											arr[arri][arrj] = key[i];
											arrj++;
											i = i + 1;
										}
									}
								}																						//將陣列跳到後頭" "中的字
							}


							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//當遇見Delay文字時
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//如果遇到「\n」就將「,」或者「\n」(依照a作判斷)輸進test3.txt檔，跳出for迴圈
									{

										//printf(",");
										//fprintf(file,",");


										for (checkarr = arri - 1; checkarr >= 0; checkarr--)
										{
											if (arr[arri][0] != ' ')
											{
												//        		printf("%d\n",arri);
												//        		printf("%d\n",arri-checkarr-1);
												//        		printf("%c %c\n",arr[arri][0],arr[arri][1]);
												//        		printf("%c %c\n\n",arr[arri-checkarr-1][0],arr[arri-checkarr-1][1]);
												if (arr[arri][0] == arr[arri - checkarr - 1][0] && arr[arri][1] == arr[arri - checkarr - 1][1])
												{

													if (arr[arri - checkarr - 1][1] == 'p')
													{
														printf("KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c\n", arr[arri][5], arr[arri][6], arr[arri][7], arr[arri][8], arr[arri][9], arr[arri - checkarr - 1][5], arr[arri - checkarr - 1][6], arr[arri - checkarr - 1][7], arr[arri - checkarr - 1][8], arr[arri - checkarr - 1][9]);

														fprintf(file, "KeyDown \"Space\", 1\nDelay ");
														if (arr[arri - checkarr - 1][5] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][5]);
														if (arr[arri - checkarr - 1][6] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][6]);
														if (arr[arri - checkarr - 1][7] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][7]);
														if (arr[arri - checkarr - 1][8] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][8]);
														if (arr[arri - checkarr - 1][9] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][9]);
														fprintf(file, "\n");
														fprintf(file, "KeyUp \"Space\", 1\nDelay ");
														if (arr[arri][5] != ' ')
															fprintf(file, "%c", arr[arri][5]);
														if (arr[arri][6] != ' ')
															fprintf(file, "%c", arr[arri][6]);
														if (arr[arri][7] != ' ')
															fprintf(file, "%c", arr[arri][7]);
														if (arr[arri][8] != ' ')
															fprintf(file, "%c", arr[arri][8]);
														if (arr[arri][9] != ' ')
															fprintf(file, "%c", arr[arri][9]);
														fprintf(file, "\n");
													}

													else
													{
														printf("KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c\n", arr[arri][0], arr[arri][5], arr[arri][6], arr[arri][7], arr[arri][8], arr[arri][9], arr[arri - checkarr - 1][5], arr[arri - checkarr - 1][6], arr[arri - checkarr - 1][7], arr[arri - checkarr - 1][8], arr[arri - checkarr - 1][9]);
														fprintf(file, "KeyDown \"%c\", 1\nDelay ", arr[arri][0]);
														if (arr[arri - checkarr - 1][5] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][5]);
														if (arr[arri - checkarr - 1][6] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][6]);
														if (arr[arri - checkarr - 1][7] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][7]);
														if (arr[arri - checkarr - 1][8] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][8]);
														if (arr[arri - checkarr - 1][9] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][9]);
														fprintf(file, "\n");
														fprintf(file, "KeyUp \"%c\", 1\nDelay ", arr[arri][0]);
														if (arr[arri][5] != ' ')
															fprintf(file, "%c", arr[arri][5]);
														if (arr[arri][6] != ' ')
															fprintf(file, "%c", arr[arri][6]);
														if (arr[arri][7] != ' ')
															fprintf(file, "%c", arr[arri][7]);
														if (arr[arri][8] != ' ')
															fprintf(file, "%c", arr[arri][8]);
														if (arr[arri][9] != ' ')
															fprintf(file, "%c", arr[arri][9]);
														fprintf(file, "\n");
													}




													for (j = 0; j<10; j++)
													{
														arr[arri][j] = ' ';
														arr[arri - checkarr - 1][j] = ' ';
													}
													arri = arri - 1;
													checkarr = -1;
												}
											}


										}



										arri++;
										arrj = 0;
										j = j + 20;
									}
									else 																					//如果沒有遇到「\n」就將文字輸進test3.txt檔
									{
										//printf("%c",key[i]);
										//fprintf(file,"%c",key[i]);
										arr[arri][arrj] = key[i];
										arrj++;
										i = i + 1;
									}
								}
							}

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'U'&&key[i + 4] == 'p') 	//當遇見KeyDown文字時
							{
								i = i + 7;																								//將陣列跳到後頭" "中的字
								if (key[i] == 'B'&&key[i + 1] == 'a'&&key[i + 2] == 'c'&&key[i + 3] == 'k'&&key[i + 4] == 'S'&&key[i + 5] == 'p'&&key[i + 6] == 'a'&&key[i + 7] == 'c'&&key[i + 8] == 'e')
								{
									i = i + 13;
								}
								else if (key[i] == 'E'&&key[i + 1] == 'n'&&key[i + 2] == 't'&&key[i + 3] == 'e'&&key[i + 4] == 'r')
								{
									i = i + 9;
								}
								else if (key[i] == 'L'&&key[i + 1] == 'e'&&key[i + 2] == 'f'&&key[i + 3] == 't')
								{
									i = i + 8;
								}
								else if (key[i] == 'D'&&key[i + 1] == 'o'&&key[i + 2] == 'w'&&key[i + 3] == 'n')
								{
									i = i + 8;
								}
								else if (key[i] == 'R'&&key[i + 1] == 'i'&&key[i + 2] == 'g'&&key[i + 3] == 'h'&&key[i + 4] == 't')
								{
									i = i + 9;
								}
								else if (key[i] == 'U'&&key[i + 1] == 'p')
								{
									i = i + 6;
								}
								else
								{
									for (j = 0; j<20; j++)
									{
										if (key[i] == '\"') 																		//如果遇到「"」就將「:」輸進test3.txt檔，跳出for迴圈
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//如果沒有遇到「"」就將文字輸進test3.txt檔
										{
											//printf("%c",key[i]);
											//fprintf(file,"%c",key[i]);
											arr[arri][arrj] = key[i];
											arrj++;
											i = i + 1;
										}
									}
								}
							}


							/*        	if (key[i]=='D'&&key[i+1]=='e'&&key[i+2]=='l'&&key[i+3]=='a'&&key[i+4]=='y'){								//當遇見Delay文字時
							i=i+6;
							for(j=0;j<20;j++)
							{
							if(key[i]=='\n'){																		//如果遇到「\n」就將「,」或者「\n」(依照a作判斷)輸進test3.txt檔，跳出for迴圈

							//printf(",");
							//fprintf(file,",");
							j=j+20;


							}
							else{																					//如果沒有遇到「\n」就將文字輸進test3.txt檔
							//printf("%c",key[i]);
							//fprintf(file,"%c",key[i]);
							arr[arri][arrj]=key[i];
							arrj++;
							i=i+1;}
							}


							for(checkarr=arri-1;checkarr>=0;checkarr--){
							if(arr[arri][0]==arr[arri-checkarr][0]&&arr[arri][1]==arr[arri-checkarr][1]&&arr[arri][2]==arr[arri-checkarr][2]&&arr[arri][3]==arr[arri-checkarr][3]&&arr[arri][4]==arr[arri-checkarr][4])
							{
							if(arr[arri][1]=='p'){
							printf("KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							fprintf(file,"KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							}

							else {
							printf("KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							fprintf(file,"KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							}


							for(j=0;j<10;j++)
							{
							arr[arri][j]=' ';
							arr[arri-checkarr][j]=' ';
							}
							arri--;
							}

							}



							/*	for(checkarr=arri-1;checkarr>=0;checkarr--){
							if(arr[arri][0]==arr[arri-checkarr-1][0]&&arr[arri][1]==arr[arri-checkarr-1][1]&&arr[arri][2]==arr[arri-checkarr-1][2]&&arr[arri][3]==arr[arri-checkarr-1][3]&&arr[arri][4]==arr[arri-checkarr-1][4])
							{
							if(arr[arri][1]=='p'){
							printf("KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							fprintf(file,"KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							}

							else {
							printf("KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							fprintf(file,"KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							}


							for(j=0;j<10;j++)
							{
							arr[arri][j]=' ';
							arr[arri-checkarr][j]=' ';
							}
							arri--;
							}

							}*/



							//	arri++;
							//	arrj=0;

							//	}




						}

					}
					/*	for(i=0;i<MIN;i++){
					for(j=0;j<10;j++)					//洗白
					{
					fprintf(file,"%c",arr[i][j]);
					printf("%c",arr[i][j]);
					}

					fprintf(file,"\n");
					printf("\n");

					}*/
					fclose(file);
					printf("%c", arr[3][0]);


























					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;

					i = 0;






					file = fopen("test2.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						key[j] = ' ';

					while (!feof(file))					//將 test2.txt檔的文字個別輸進key[i]中
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//關閉test2.txt檔
					file = fopen("test3.txt", "w");		//創造test3.txt檔
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{
							b = 0;
							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//當遇見KeyDown文字時
							{
								i = i + 9;																								//將陣列跳到後頭" "中的字
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\"') 																		//如果遇到「"」就將「:」輸進test3.txt檔，跳出for迴圈
									{
										printf(":");
										fprintf(file, ":");
										j = j + 20;
									}
									else 																					//如果沒有遇到「"」就將文字輸進test3.txt檔
									{
										printf("%c", key[i]);
										fprintf(file, "%c", key[i]);
										i = i + 1;
									}
								}
							}
							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//當遇見Delay文字時
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//如果遇到「\n」就將「,」或者「\n」(依照a作判斷)輸進test3.txt檔，跳出for迴圈
									{
										if (a % 2 == 0)
										{
											if (b == 0)
											{
												printf("0,0");
												fprintf(file, "0,0");
											}
											else
											{
												printf(",");
												fprintf(file, ",");
											}

											j = j + 20;
										}
										else
										{
											printf("\n");
											fprintf(file, "\n");
											j = j + 20;
										}
										a++;
									}
									else
									{
										//如果沒有遇到「\n」就將文字輸進test3.txt檔
										printf("%c", key[i]);
										fprintf(file, "%c", key[i]);
										i = i + 1;
										b++;
									}
								}
							}
						}
					}

					fclose(file);









					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;
					i = 0;









					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++) 														//將arr3[MAX]與pre[MAX]洗白
					{
						arr3[j] = ' ';
						pre[j] = ' ';
					}
					arr3rr[0] = ' ';
					while (!feof(file))														//將test3.txt檔文字插進arr3[MAX]中
					{
						fscanf(file, "%c", &arr3[i]);
						i++;
					}
					fclose(file);															//關閉test3.txt檔
					file = fopen("test4.txt", "w");		//創造test4.txt檔
					for (i = 0; i<MAX; i++) 														//將str1[5]與str2[5]洗白
					{
						for (j = 0; j<5; j++)
						{
							str1[j] = '0';
							str2[j] = '0';

						}


						if (arr3[i] != ' ') 													//如果arr3[i]不等於空白時，進入if中
						{
							printf("「");
							fprintf(file, "「");
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ':') 								//如果遇到「:」就顯示「:」，跳出for迴圈
								{
									//printf(":");
									j = j + 20;
									i = i + 1;
									b++;
								}
								else
								{
									printf("%c", arr3[i]);					//如果沒有遇到「"」就將pre[i]=arr3[i]
									fprintf(file, "%c", arr3[i]);
									pre[i] = arr3[i];
									i = i + 1;
									b++;

								}
							}
							printf("」與上個鍵的");
							fprintf(file, "」與上個鍵的");
							a = 1;
							str1[0] = arr3[i];												//不知道為什麼要先把str1[0]=arr3[i]，str1[1]=arr3[i]才會正常
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ',') 								//如果遇到「,」就顯示「,」，跳出for迴圈
								{
									j = j + 20;
									//printf(",");
									i = i + 1;
									b++;
								}
								else 										//如果沒有遇到「,」就將str1[a]=arr3[i]，str1代表按住與放開該鍵的時間差
								{
									//printf("%c",arr3[i]);

									i = i + 1;
									str1[a] = arr3[i];
									a++;
									b++;
								}
							}
							a = 1;
							str2[0] = arr3[i];	         									//不知道為什麼要先把str2[0]=arr3[i]，str2[1]=arr3[i]才會正常
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == '\n') 							//如果遇到「,」就顯示「,」，跳出for迴圈
								{
									//printf("\n");
									j = j + 20;
									b++;
								}
								else 										//如果沒有遇到「,」就將str2[a]=arr3[i]，str2代表放開第一鍵與按下第二鍵的時間差
								{
									//	printf("%c",arr3[i]);

									i = i + 1;
									str2[a] = arr3[i];
									a++;
									b++;
								}
							}
							math3 = math1;												//math3換為上個鍵math1
							math4 = math2;												//math4換為上個鍵math2
							math1 = atoi(str1);											//將str1轉換成整數並放入math1
							math2 = atoi(str2);											//將str2轉換成整數並放入math2
							Interval = math4;												//間隔代表第一鍵放開與第二鍵按下的時間差
							Dwell_time = math3;											//停留時間代表按住與放開該鍵的時間差
							Latency = math1 + math2 + math3;									//延時代表第一鍵按下與第二鍵放開的時間差
							Flight_time = math1 + math2;									//飛行時間代表第一鍵按下與第二鍵按下的時間差
							Up_to_up = math2 + math3;										//高對高代表第一鍵放開與第二鍵放開的時間差
																							//    printf("%d,",math1);
																							//    printf("%d\n",math2);
																							//    printf("%s - %s\n",last,pre);

							printf("間隔：%d,停留時間：%d,延時：%d,飛行時間：%d,高對高：%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							fprintf(file, "間隔：%d,停留時間：%d,延時：%d,飛行時間：%d,高對高：%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							//  printf("%d\n",math1+math2);
						}
					}
					num_std++;
					fprintf(file, "%d", num_std);

					fclose(file);															//關閉test4.txt檔










					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;

















					file = fopen("test3.txt", "r");


					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					first = 0;
					second = 0;
					third = 0;
					fprintf(file, "101%d:\n", number);
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '1'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '1'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'O'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'O'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'J'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"-1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'J'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"-1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"-1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"-1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '2'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '2'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '2'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '2'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "-1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//2

					}

					fprintf(file, "臺北：%d個，臺地：%d個\n", first, third);
					fclose(file1);
					fclose(file);

























					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0, first = 0, second = 0;
					third = 0;
					wordi = 0;
					wordj = 0;


					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2



						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'F'&&arr33[i + 4].str31[0] == 'M'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'F'&&arr33[i + 4].str31[0] == 'M'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'M'&&arr33[i + 4].str31[0] == 'F'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'M'&&arr33[i + 4].str31[0] == 'F'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'G'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:3 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							third++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'G'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "-1 1:3 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							third++;
							i = i + 2;
						}	//2

					}
					fprintf(file, "地形：%d個，地區：%d個，地勢：%d個\n", first, second, third);
					fclose(file2);
					fclose(file);






















					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0, first = 0, second = 0;
					third = 0;
					wordi = 0;
					wordj = 0;
					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);

							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//3
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//4
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//5
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//6
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//7
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//8
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//9
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//10
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//11
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//12


						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);

							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//3
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//4
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//5
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//6
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//7
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//8
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//9
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//10
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//11
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//12







						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//3
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//4
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//5
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//6
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//7
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//8
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//9
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//10
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//11
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//12

					}
					fprintf(file, "東北：%d個，東部：%d個\n", first, second);
					fclose(file3);
					fclose(file);

















					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0, first = 0, second = 0;
					third = 0;
					wordi = 0;
					wordj = 0;
					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == 'C'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'C'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "-1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == 'C'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == 'E'&&arr33[i + 4].str31[0] == '.'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'C'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == 'E'&&arr33[i + 4].str31[0] == '.'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}	//2
						if (arr33[i].str31[0] == 'C'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '.'&&arr33[i + 4].str31[0] == 'E'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'C'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '.'&&arr33[i + 4].str31[0] == 'E'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "-1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}	//2
					}
					fprintf(file, "海岸：%d個，海溝：%d個\n", first, second);
					fclose(file4);
					fclose(file);







				}
				else
				{

				}















			}//cross==round
			fclose(Presence1);
			fclose(Presence2);
			fclose(Presence3);
			fclose(Presence4);
			fclose(Presence5);









































			//合法使用者

			if (round == cross) {}
			else {


				sprintf(filename, "101%d-%d.txt", number, round);
				file = fopen(filename, "r");		//創造test3.txt檔


				i = 0;
				j = 0;
				a = 0;
				arri = 0;
				arrj = 0;
				checkarr = 0;
				b = 0;
				math1 = 0;
				math2 = 0;
				math3 = 0;
				math4 = 0;
				pree = 0;
				Interval = 0;
				Dwell_time = 0;
				Latency = 0;
				Flight_time = 0;
				Up_to_up = 0;
				num_std = 0;
				if (file)
				{

					sprintf(filename1, "Result-1/101%d-Tai-train.txt", number);
					file1 = fopen(filename1, "a");		//創造test3.txt檔
					sprintf(filename2, "Result-1/101%d-Ground-train.txt", number);
					file2 = fopen(filename2, "a");		//創造test3.txt檔
					sprintf(filename3, "Result-1/101%d-East-train.txt", number);
					file3 = fopen(filename3, "a");		//創造test3.txt檔
					sprintf(filename4, "Result-1/101%d-Sea-train.txt", number);
					file4 = fopen(filename4, "a");		//創造test3.txt檔



					for (j = 0; j<MAX; j++)					//洗白
						key[j] = ' ';
					for (i = 0; i<10; i++)
					{
						for (j = 0; j<MIN; j++)					//洗白
							arr[j][i] = ' ';

					}
					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;
					i = 0;
					while (!feof(file))					//將 test2.txt檔的文字個別輸進key[i]中
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//關閉test2.txt檔
					file = fopen("test2.txt", "w");		//創造test3.txt檔
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//當遇見KeyDown文字時
							{
								i = i + 9;
								if (key[i] == 'B'&&key[i + 1] == 'a'&&key[i + 2] == 'c'&&key[i + 3] == 'k'&&key[i + 4] == 'S'&&key[i + 5] == 'p'&&key[i + 6] == 'a'&&key[i + 7] == 'c'&&key[i + 8] == 'e') 					//判斷是否為迴車鍵
								{
									i = i + 13;
								}
								else if (key[i] == 'E'&&key[i + 1] == 'n'&&key[i + 2] == 't'&&key[i + 3] == 'e'&&key[i + 4] == 'r')
								{
									i = i + 9;
								}
								else if (key[i] == 'L'&&key[i + 1] == 'e'&&key[i + 2] == 'f'&&key[i + 3] == 't')
								{
									i = i + 8;
								}
								else if (key[i] == 'D'&&key[i + 1] == 'o'&&key[i + 2] == 'w'&&key[i + 3] == 'n')
								{
									i = i + 8;
								}
								else if (key[i] == 'R'&&key[i + 1] == 'i'&&key[i + 2] == 'g'&&key[i + 3] == 'h'&&key[i + 4] == 't')
								{
									i = i + 9;
								}
								else if (key[i] == 'U'&&key[i + 1] == 'p')
								{
									i = i + 6;
								}
								else
								{
									for (j = 0; j<20; j++)
									{
										if (key[i] == '\"') 																		//如果遇到「"」就將「:」輸進test3.txt檔，跳出for迴圈
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//如果沒有遇到「"」就將文字輸進test3.txt檔
										{
											//printf("%c",key[i]);
											//fprintf(file,"%c",key[i]);
											arr[arri][arrj] = key[i];
											arrj++;
											i = i + 1;
										}
									}
								}																						//將陣列跳到後頭" "中的字
							}


							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//當遇見Delay文字時
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//如果遇到「\n」就將「,」或者「\n」(依照a作判斷)輸進test3.txt檔，跳出for迴圈
									{

										//printf(",");
										//fprintf(file,",");


										for (checkarr = arri - 1; checkarr >= 0; checkarr--)
										{
											if (arr[arri][0] != ' ')
											{
												//        		printf("%d\n",arri);
												//        		printf("%d\n",arri-checkarr-1);
												//        		printf("%c %c\n",arr[arri][0],arr[arri][1]);
												//        		printf("%c %c\n\n",arr[arri-checkarr-1][0],arr[arri-checkarr-1][1]);
												if (arr[arri][0] == arr[arri - checkarr - 1][0] && arr[arri][1] == arr[arri - checkarr - 1][1])
												{

													if (arr[arri - checkarr - 1][1] == 'p')
													{
														printf("KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c\n", arr[arri][5], arr[arri][6], arr[arri][7], arr[arri][8], arr[arri][9], arr[arri - checkarr - 1][5], arr[arri - checkarr - 1][6], arr[arri - checkarr - 1][7], arr[arri - checkarr - 1][8], arr[arri - checkarr - 1][9]);

														fprintf(file, "KeyDown \"Space\", 1\nDelay ");
														if (arr[arri - checkarr - 1][5] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][5]);
														if (arr[arri - checkarr - 1][6] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][6]);
														if (arr[arri - checkarr - 1][7] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][7]);
														if (arr[arri - checkarr - 1][8] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][8]);
														if (arr[arri - checkarr - 1][9] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][9]);
														fprintf(file, "\n");
														fprintf(file, "KeyUp \"Space\", 1\nDelay ");
														if (arr[arri][5] != ' ')
															fprintf(file, "%c", arr[arri][5]);
														if (arr[arri][6] != ' ')
															fprintf(file, "%c", arr[arri][6]);
														if (arr[arri][7] != ' ')
															fprintf(file, "%c", arr[arri][7]);
														if (arr[arri][8] != ' ')
															fprintf(file, "%c", arr[arri][8]);
														if (arr[arri][9] != ' ')
															fprintf(file, "%c", arr[arri][9]);
														fprintf(file, "\n");
													}

													else
													{
														printf("KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c\n", arr[arri][0], arr[arri][5], arr[arri][6], arr[arri][7], arr[arri][8], arr[arri][9], arr[arri - checkarr - 1][5], arr[arri - checkarr - 1][6], arr[arri - checkarr - 1][7], arr[arri - checkarr - 1][8], arr[arri - checkarr - 1][9]);
														fprintf(file, "KeyDown \"%c\", 1\nDelay ", arr[arri][0]);
														if (arr[arri - checkarr - 1][5] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][5]);
														if (arr[arri - checkarr - 1][6] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][6]);
														if (arr[arri - checkarr - 1][7] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][7]);
														if (arr[arri - checkarr - 1][8] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][8]);
														if (arr[arri - checkarr - 1][9] != ' ')
															fprintf(file, "%c", arr[arri - checkarr - 1][9]);
														fprintf(file, "\n");
														fprintf(file, "KeyUp \"%c\", 1\nDelay ", arr[arri][0]);
														if (arr[arri][5] != ' ')
															fprintf(file, "%c", arr[arri][5]);
														if (arr[arri][6] != ' ')
															fprintf(file, "%c", arr[arri][6]);
														if (arr[arri][7] != ' ')
															fprintf(file, "%c", arr[arri][7]);
														if (arr[arri][8] != ' ')
															fprintf(file, "%c", arr[arri][8]);
														if (arr[arri][9] != ' ')
															fprintf(file, "%c", arr[arri][9]);
														fprintf(file, "\n");
													}




													for (j = 0; j<10; j++)
													{
														arr[arri][j] = ' ';
														arr[arri - checkarr - 1][j] = ' ';
													}
													arri = arri - 1;
													checkarr = -1;
												}
											}


										}



										arri++;
										arrj = 0;
										j = j + 20;
									}
									else 																					//如果沒有遇到「\n」就將文字輸進test3.txt檔
									{
										//printf("%c",key[i]);
										//fprintf(file,"%c",key[i]);
										arr[arri][arrj] = key[i];
										arrj++;
										i = i + 1;
									}
								}
							}

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'U'&&key[i + 4] == 'p') 	//當遇見KeyDown文字時
							{
								i = i + 7;																								//將陣列跳到後頭" "中的字
								if (key[i] == 'B'&&key[i + 1] == 'a'&&key[i + 2] == 'c'&&key[i + 3] == 'k'&&key[i + 4] == 'S'&&key[i + 5] == 'p'&&key[i + 6] == 'a'&&key[i + 7] == 'c'&&key[i + 8] == 'e')
								{
									i = i + 13;
								}
								else if (key[i] == 'E'&&key[i + 1] == 'n'&&key[i + 2] == 't'&&key[i + 3] == 'e'&&key[i + 4] == 'r')
								{
									i = i + 9;
								}
								else if (key[i] == 'L'&&key[i + 1] == 'e'&&key[i + 2] == 'f'&&key[i + 3] == 't')
								{
									i = i + 8;
								}
								else if (key[i] == 'D'&&key[i + 1] == 'o'&&key[i + 2] == 'w'&&key[i + 3] == 'n')
								{
									i = i + 8;
								}
								else if (key[i] == 'R'&&key[i + 1] == 'i'&&key[i + 2] == 'g'&&key[i + 3] == 'h'&&key[i + 4] == 't')
								{
									i = i + 9;
								}
								else if (key[i] == 'U'&&key[i + 1] == 'p')
								{
									i = i + 6;
								}
								else
								{
									for (j = 0; j<20; j++)
									{
										if (key[i] == '\"') 																		//如果遇到「"」就將「:」輸進test3.txt檔，跳出for迴圈
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//如果沒有遇到「"」就將文字輸進test3.txt檔
										{
											//printf("%c",key[i]);
											//fprintf(file,"%c",key[i]);
											arr[arri][arrj] = key[i];
											arrj++;
											i = i + 1;
										}
									}
								}
							}


							/*        	if (key[i]=='D'&&key[i+1]=='e'&&key[i+2]=='l'&&key[i+3]=='a'&&key[i+4]=='y'){								//當遇見Delay文字時
							i=i+6;
							for(j=0;j<20;j++)
							{
							if(key[i]=='\n'){																		//如果遇到「\n」就將「,」或者「\n」(依照a作判斷)輸進test3.txt檔，跳出for迴圈

							//printf(",");
							//fprintf(file,",");
							j=j+20;


							}
							else{																					//如果沒有遇到「\n」就將文字輸進test3.txt檔
							//printf("%c",key[i]);
							//fprintf(file,"%c",key[i]);
							arr[arri][arrj]=key[i];
							arrj++;
							i=i+1;}
							}


							for(checkarr=arri-1;checkarr>=0;checkarr--){
							if(arr[arri][0]==arr[arri-checkarr][0]&&arr[arri][1]==arr[arri-checkarr][1]&&arr[arri][2]==arr[arri-checkarr][2]&&arr[arri][3]==arr[arri-checkarr][3]&&arr[arri][4]==arr[arri-checkarr][4])
							{
							if(arr[arri][1]=='p'){
							printf("KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							fprintf(file,"KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							}

							else {
							printf("KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							fprintf(file,"KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr][5],arr[arri-checkarr][6],arr[arri-checkarr][7],arr[arri-checkarr][8],arr[arri-checkarr][9]);
							}


							for(j=0;j<10;j++)
							{
							arr[arri][j]=' ';
							arr[arri-checkarr][j]=' ';
							}
							arri--;
							}

							}



							/*	for(checkarr=arri-1;checkarr>=0;checkarr--){
							if(arr[arri][0]==arr[arri-checkarr-1][0]&&arr[arri][1]==arr[arri-checkarr-1][1]&&arr[arri][2]==arr[arri-checkarr-1][2]&&arr[arri][3]==arr[arri-checkarr-1][3]&&arr[arri][4]==arr[arri-checkarr-1][4])
							{
							if(arr[arri][1]=='p'){
							printf("KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							fprintf(file,"KeyDown \"Space\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							}

							else {
							printf("KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							fprintf(file,"KeyDown \"%c\", 1\nDelay %c%c%c%c%c,%c%c%c%c%c",arr[arri][0],arr[arri][5],arr[arri][6],arr[arri][7],arr[arri][8],arr[arri][9],arr[arri-checkarr-1][5],arr[arri-checkarr-1][6],arr[arri-checkarr-1][7],arr[arri-checkarr-1][8],arr[arri-checkarr-1][9]);
							}


							for(j=0;j<10;j++)
							{
							arr[arri][j]=' ';
							arr[arri-checkarr][j]=' ';
							}
							arri--;
							}

							}*/



							//	arri++;
							//	arrj=0;

							//	}




						}

					}
					/*	for(i=0;i<MIN;i++){
					for(j=0;j<10;j++)					//洗白
					{
					fprintf(file,"%c",arr[i][j]);
					printf("%c",arr[i][j]);
					}

					fprintf(file,"\n");
					printf("\n");

					}*/
					fclose(file);
					printf("%c", arr[3][0]);


























					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;

					i = 0;






					file = fopen("test2.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						key[j] = ' ';

					while (!feof(file))					//將 test2.txt檔的文字個別輸進key[i]中
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//關閉test2.txt檔
					file = fopen("test3.txt", "w");		//創造test3.txt檔
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{
							b = 0;
							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//當遇見KeyDown文字時
							{
								i = i + 9;																								//將陣列跳到後頭" "中的字
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\"') 																		//如果遇到「"」就將「:」輸進test3.txt檔，跳出for迴圈
									{
										printf(":");
										fprintf(file, ":");
										j = j + 20;
									}
									else 																					//如果沒有遇到「"」就將文字輸進test3.txt檔
									{
										printf("%c", key[i]);
										fprintf(file, "%c", key[i]);
										i = i + 1;
									}
								}
							}
							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//當遇見Delay文字時
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//如果遇到「\n」就將「,」或者「\n」(依照a作判斷)輸進test3.txt檔，跳出for迴圈
									{
										if (a % 2 == 0)
										{
											if (b == 0)
											{
												printf("0,0");
												fprintf(file, "0,0");
											}
											else
											{
												printf(",");
												fprintf(file, ",");
											}

											j = j + 20;
										}
										else
										{
											printf("\n");
											fprintf(file, "\n");
											j = j + 20;
										}
										a++;
									}
									else
									{
										//如果沒有遇到「\n」就將文字輸進test3.txt檔
										printf("%c", key[i]);
										fprintf(file, "%c", key[i]);
										i = i + 1;
										b++;
									}
								}
							}
						}
					}

					fclose(file);









					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;
					i = 0;









					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++) 														//將arr3[MAX]與pre[MAX]洗白
					{
						arr3[j] = ' ';
						pre[j] = ' ';
					}
					arr3rr[0] = ' ';
					while (!feof(file))														//將test3.txt檔文字插進arr3[MAX]中
					{
						fscanf(file, "%c", &arr3[i]);
						i++;
					}
					fclose(file);															//關閉test3.txt檔
					file = fopen("test4.txt", "w");		//創造test4.txt檔
					for (i = 0; i<MAX; i++) 														//將str1[5]與str2[5]洗白
					{
						for (j = 0; j<5; j++)
						{
							str1[j] = '0';
							str2[j] = '0';

						}


						if (arr3[i] != ' ') 													//如果arr3[i]不等於空白時，進入if中
						{
							printf("「");
							fprintf(file, "「");
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ':') 								//如果遇到「:」就顯示「:」，跳出for迴圈
								{
									//printf(":");
									j = j + 20;
									i = i + 1;
									b++;
								}
								else
								{
									printf("%c", arr3[i]);					//如果沒有遇到「"」就將pre[i]=arr3[i]
									fprintf(file, "%c", arr3[i]);
									pre[i] = arr3[i];
									i = i + 1;
									b++;

								}
							}
							printf("」與上個鍵的");
							fprintf(file, "」與上個鍵的");
							a = 1;
							str1[0] = arr3[i];												//不知道為什麼要先把str1[0]=arr3[i]，str1[1]=arr3[i]才會正常
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ',') 								//如果遇到「,」就顯示「,」，跳出for迴圈
								{
									j = j + 20;
									//printf(",");
									i = i + 1;
									b++;
								}
								else 										//如果沒有遇到「,」就將str1[a]=arr3[i]，str1代表按住與放開該鍵的時間差
								{
									//printf("%c",arr3[i]);

									i = i + 1;
									str1[a] = arr3[i];
									a++;
									b++;
								}
							}
							a = 1;
							str2[0] = arr3[i];	         									//不知道為什麼要先把str2[0]=arr3[i]，str2[1]=arr3[i]才會正常
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == '\n') 							//如果遇到「,」就顯示「,」，跳出for迴圈
								{
									//printf("\n");
									j = j + 20;
									b++;
								}
								else 										//如果沒有遇到「,」就將str2[a]=arr3[i]，str2代表放開第一鍵與按下第二鍵的時間差
								{
									//	printf("%c",arr3[i]);

									i = i + 1;
									str2[a] = arr3[i];
									a++;
									b++;
								}
							}
							math3 = math1;												//math3換為上個鍵math1
							math4 = math2;												//math4換為上個鍵math2
							math1 = atoi(str1);											//將str1轉換成整數並放入math1
							math2 = atoi(str2);											//將str2轉換成整數並放入math2
							Interval = math4;												//間隔代表第一鍵放開與第二鍵按下的時間差
							Dwell_time = math3;											//停留時間代表按住與放開該鍵的時間差
							Latency = math1 + math2 + math3;									//延時代表第一鍵按下與第二鍵放開的時間差
							Flight_time = math1 + math2;									//飛行時間代表第一鍵按下與第二鍵按下的時間差
							Up_to_up = math2 + math3;										//高對高代表第一鍵放開與第二鍵放開的時間差
																							//    printf("%d,",math1);
																							//    printf("%d\n",math2);
																							//    printf("%s - %s\n",last,pre);

							printf("間隔：%d,停留時間：%d,延時：%d,飛行時間：%d,高對高：%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							fprintf(file, "間隔：%d,停留時間：%d,延時：%d,飛行時間：%d,高對高：%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							//  printf("%d\n",math1+math2);
						}
					}
					num_std++;
					fprintf(file, "%d", num_std);

					fclose(file);															//關閉test4.txt檔










					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0;

















					file = fopen("test3.txt", "r");


					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					first = 0;
					second = 0;
					third = 0;
					fprintf(file, "101%d:\n", number);
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '1'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '1'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'O'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'O'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:1 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							first++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'J'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'J'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							//fprintf(file1,"1 1:2 3:%d 4:%d\n",Dwell_time,Latency);
							second++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '2'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == '2'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'W'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '2'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'W'&&arr33[i + 2].str31[0] == '6'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '2'&&arr33[i + 5].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file1, "1 1:3 2:%d 3:%d 4:%d 5:%d\n", Interval, Dwell_time, Latency, Flight_time);

							third++;
							i = i + 2;
						}//2

					}

					fprintf(file, "臺北：%d個，臺地：%d個\n", first, third);
					fclose(file1);
					fclose(file);

























					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0, first = 0, second = 0;
					third = 0;
					wordi = 0;
					wordj = 0;


					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'V'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == '/'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'U'&&arr33[i + 4].str31[0] == '/'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'V'&&arr33[i + 5].str31[0] == 'U'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == '/'&&arr33[i + 4].str31[0] == 'U'&&arr33[i + 5].str31[0] == 'V'&&arr33[i + 6].str31[0] == '6')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("%c%c%c%c%c%c%c\n", arr33[i].str31[0], arr33[i + 1].str31[0], arr33[i + 2].str31[0], arr33[i + 3].str31[0], arr33[i + 4].str31[0], arr33[i + 5].str31[0], arr33[i + 6].str31[0]);
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:1 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2



						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'F'&&arr33[i + 4].str31[0] == 'M'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'F'&&arr33[i + 4].str31[0] == 'M'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'M'&&arr33[i + 4].str31[0] == 'F'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'M'&&arr33[i + 4].str31[0] == 'F'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:2 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'U'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'G'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:3 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							third++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == 'U'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '4'&&arr33[i + 3].str31[0] == 'G'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("3:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file2, "1 1:3 2:%d 3:%d 4:%d 5:%d 6:%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							third++;
							i = i + 2;
						}	//2

					}
					fprintf(file, "地形：%d個，地區：%d個，地勢：%d個\n", first, second, third);
					fclose(file2);
					fclose(file);






















					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0, first = 0, second = 0;
					third = 0;
					wordi = 0;
					wordj = 0;
					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);

							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//3
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//4
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//5
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'O'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//6
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//7
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//8
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//9
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//10
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//11
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'O'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//12






						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);

							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//3
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//4
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//5
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == '0'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//6
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//7
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//8
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//9
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//10
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//11
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '0'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '3')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//12







						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//2
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//3
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//4
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//5
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == '1'&&arr33[i + 5].str31[0] == 'J'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//6
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//7
						if (arr33[i].str31[0] == '2'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//8
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '/'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//9
						if (arr33[i].str31[0] == 'J'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == '/'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//10
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == '2'&&arr33[i + 2].str31[0] == 'J'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//11
						if (arr33[i].str31[0] == '/'&&arr33[i + 1].str31[0] == 'J'&&arr33[i + 2].str31[0] == '2'&&arr33[i + 3].str31[0] == 'S'&&arr33[i + 3].str31[1] == 'p'&&arr33[i + 3].str31[2] == 'a'&&arr33[i + 3].str31[3] == 'c'&&arr33[i + 3].str31[4] == 'e'&&arr33[i + 4].str31[0] == 'J'&&arr33[i + 5].str31[0] == '1'&&arr33[i + 6].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file3, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//12

					}
					fprintf(file, "東北：%d個，東部：%d個\n", first, second);
					fclose(file3);
					fclose(file);

















					i = 0;
					j = 0;
					a = 0;
					arri = 0;
					arrj = 0;
					checkarr = 0;
					b = 0;
					math1 = 0;
					math2 = 0;
					math3 = 0;
					math4 = 0;
					pree = 0;
					Interval = 0;
					Dwell_time = 0;
					Latency = 0;
					Flight_time = 0;
					Up_to_up = 0;
					num_std = 0, first = 0, second = 0;
					third = 0;
					wordi = 0;
					wordj = 0;
					file = fopen("test3.txt", "r");
					for (j = 0; j<MAX; j++)					//洗白
						arr2[j] = ' ';
					while (!feof(file))					//將 word.txt檔的文字個別輸進txt[i]中
					{
						fscanf(file, "%c", &arr2[wordi]);
						wordi++;
					}
					fclose(file);

					for (jj = 0; j<5; j++)
						pre[jj] = ' ';
					for (i = 0; i<MAX; i++)
					{
						if (arr2[i] != ' ')
						{

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ':')
								{
									arr33[b].str31[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
								}

							}
							for (jj = 0; jj<5; jj++)
							{
								pre[jj] = 'null';

							}

							for (j = 0; j<20; j++)
							{
								if (arr2[i] != ',')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;
									i++;
									arr33[b].math31 = atoi(pre);

								}
							}
							for (jj = 0; jj<5; jj++)
								pre[jj] = 'null';
							for (j = 0; j<20; j++)
							{
								if (arr2[i] != '\n')
								{
									pre[a] = arr2[i];
									i++;
									a++;
								}
								else
								{
									j = j + 20;
									a = 0;

									arr33[b].math32 = atoi(pre);

								}
							}
							//printf("%c%c%c%c%c\n%d\n%d\n",arr33[b].str31[0],arr33[b].str31[1],arr33[b].str31[2],arr33[b].str31[3],arr33[b].str31[4],arr33[b].math31,arr33[b].math32);
							b++;

						}


					}


					file = fopen("End.txt", "a");
					for (i = 0; i<10000; i++)
					{
						if (arr33[i].str31[0] == 'C'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'C'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '0'&&arr33[i + 4].str31[0] == '4')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("1:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "1 1:1 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							first++;
							i = i + 2;
						}//2


						if (arr33[i].str31[0] == 'C'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == 'E'&&arr33[i + 4].str31[0] == '.'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'C'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == 'E'&&arr33[i + 4].str31[0] == '.'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}	//2
						if (arr33[i].str31[0] == 'C'&&arr33[i + 1].str31[0] == '9'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '.'&&arr33[i + 4].str31[0] == 'E'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}//1
						if (arr33[i].str31[0] == '9'&&arr33[i + 1].str31[0] == 'C'&&arr33[i + 2].str31[0] == '3'&&arr33[i + 3].str31[0] == '.'&&arr33[i + 4].str31[0] == 'E'&&arr33[i + 5].str31[0] == 'S'&&arr33[i + 5].str31[1] == 'p'&&arr33[i + 5].str31[2] == 'a'&&arr33[i + 5].str31[3] == 'c'&&arr33[i + 5].str31[4] == 'e')
						{
							Interval = arr33[i + 1].math32;
							Dwell_time = arr33[i].math31;
							Latency = arr33[i].math31 + arr33[i].math32 + arr33[i + 1].math31;
							Flight_time = arr33[i].math31 + arr33[i].math32;
							Up_to_up = arr33[i].math32 + arr33[i + 1].math31;
							printf("2:%d,%d,%d,%d,%d\n", Interval, Dwell_time, Latency, Flight_time, Up_to_up);
							fprintf(file4, "1 1:2 2:%d 3:%d 5:%d 6:%d\n", Interval, Dwell_time, Flight_time, Up_to_up);
							second++;
							i = i + 2;
						}	//2
					}
					fprintf(file, "海岸：%d個，海溝：%d個\n", first, second);
					fclose(file4);
					fclose(file);





					fclose(Presence);
					fclose(Presence1);
					fclose(Presence2);
					fclose(Presence3);
					fclose(Presence4);
					fclose(Presence5);

				}
				else
				{
					system("pause");
				}

















			}//else if (round==cross)









		}


		fclose(Presence);
		fclose(Presence1);
		fclose(Presence2);
		fclose(Presence3);
		fclose(Presence4);
		fclose(Presence5);

	}
































	return 0;
	system("PAUSE");
}


