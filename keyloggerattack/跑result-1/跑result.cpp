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
			//�D�k�ϥΪ�







			if (cross == round) {
			}
			else {




				sprintf(filename, "101%d-%d.txt", trainer, round);
				file = fopen(filename, "r");		//�гytest3.txt��


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
					file1 = fopen(filename1, "a");		//�гytest3.txt��
					sprintf(filename2, "Result-1/101%d-Ground-test.txt", number);
					file2 = fopen(filename2, "a");		//�гytest3.txt��
					sprintf(filename3, "Result-1/101%d-East-test.txt", number);
					file3 = fopen(filename3, "a");		//�гytest3.txt��
					sprintf(filename4, "Result-1/101%d-Sea-test.txt", number);
					file4 = fopen(filename4, "a");		//�гytest3.txt��





					for (j = 0; j<MAX; j++)					//�~��
						key[j] = ' ';
					for (i = 0; i<10; i++)
					{
						for (j = 0; j<MIN; j++)					//�~��
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
					while (!feof(file))					//�N test2.txt�ɪ���r�ӧO��ikey[i]��
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//����test2.txt��
					file = fopen("test2.txt", "w");		//�гytest3.txt��
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//��J��KeyDown��r��
							{
								i = i + 9;
								if (key[i] == 'B'&&key[i + 1] == 'a'&&key[i + 2] == 'c'&&key[i + 3] == 'k'&&key[i + 4] == 'S'&&key[i + 5] == 'p'&&key[i + 6] == 'a'&&key[i + 7] == 'c'&&key[i + 8] == 'e') 					//�P�_�O�_���j����
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
										if (key[i] == '\"') 																		//�p�G�J��u"�v�N�N�u:�v��itest3.txt�ɡA���Xfor�j��
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//�p�G�S���J��u"�v�N�N��r��itest3.txt��
										{
											//printf("%c",key[i]);
											//fprintf(file,"%c",key[i]);
											arr[arri][arrj] = key[i];
											arrj++;
											i = i + 1;
										}
									}
								}																						//�N�}�C������Y" "�����r
							}


							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//��J��Delay��r��
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//�p�G�J��u\n�v�N�N�u,�v�Ϊ̡u\n�v(�̷�a�@�P�_)��itest3.txt�ɡA���Xfor�j��
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
									else 																					//�p�G�S���J��u\n�v�N�N��r��itest3.txt��
									{
										//printf("%c",key[i]);
										//fprintf(file,"%c",key[i]);
										arr[arri][arrj] = key[i];
										arrj++;
										i = i + 1;
									}
								}
							}

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'U'&&key[i + 4] == 'p') 	//��J��KeyDown��r��
							{
								i = i + 7;																								//�N�}�C������Y" "�����r
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
										if (key[i] == '\"') 																		//�p�G�J��u"�v�N�N�u:�v��itest3.txt�ɡA���Xfor�j��
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//�p�G�S���J��u"�v�N�N��r��itest3.txt��
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


							/*        	if (key[i]=='D'&&key[i+1]=='e'&&key[i+2]=='l'&&key[i+3]=='a'&&key[i+4]=='y'){								//��J��Delay��r��
							i=i+6;
							for(j=0;j<20;j++)
							{
							if(key[i]=='\n'){																		//�p�G�J��u\n�v�N�N�u,�v�Ϊ̡u\n�v(�̷�a�@�P�_)��itest3.txt�ɡA���Xfor�j��

							//printf(",");
							//fprintf(file,",");
							j=j+20;


							}
							else{																					//�p�G�S���J��u\n�v�N�N��r��itest3.txt��
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
					for(j=0;j<10;j++)					//�~��
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
					for (j = 0; j<MAX; j++)					//�~��
						key[j] = ' ';

					while (!feof(file))					//�N test2.txt�ɪ���r�ӧO��ikey[i]��
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//����test2.txt��
					file = fopen("test3.txt", "w");		//�гytest3.txt��
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{
							b = 0;
							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//��J��KeyDown��r��
							{
								i = i + 9;																								//�N�}�C������Y" "�����r
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\"') 																		//�p�G�J��u"�v�N�N�u:�v��itest3.txt�ɡA���Xfor�j��
									{
										printf(":");
										fprintf(file, ":");
										j = j + 20;
									}
									else 																					//�p�G�S���J��u"�v�N�N��r��itest3.txt��
									{
										printf("%c", key[i]);
										fprintf(file, "%c", key[i]);
										i = i + 1;
									}
								}
							}
							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//��J��Delay��r��
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//�p�G�J��u\n�v�N�N�u,�v�Ϊ̡u\n�v(�̷�a�@�P�_)��itest3.txt�ɡA���Xfor�j��
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
										//�p�G�S���J��u\n�v�N�N��r��itest3.txt��
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
					for (j = 0; j<MAX; j++) 														//�Narr3[MAX]�Ppre[MAX]�~��
					{
						arr3[j] = ' ';
						pre[j] = ' ';
					}
					arr3rr[0] = ' ';
					while (!feof(file))														//�Ntest3.txt�ɤ�r���iarr3[MAX]��
					{
						fscanf(file, "%c", &arr3[i]);
						i++;
					}
					fclose(file);															//����test3.txt��
					file = fopen("test4.txt", "w");		//�гytest4.txt��
					for (i = 0; i<MAX; i++) 														//�Nstr1[5]�Pstr2[5]�~��
					{
						for (j = 0; j<5; j++)
						{
							str1[j] = '0';
							str2[j] = '0';

						}


						if (arr3[i] != ' ') 													//�p�Garr3[i]������ťծɡA�i�Jif��
						{
							printf("�u");
							fprintf(file, "�u");
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ':') 								//�p�G�J��u:�v�N��ܡu:�v�A���Xfor�j��
								{
									//printf(":");
									j = j + 20;
									i = i + 1;
									b++;
								}
								else
								{
									printf("%c", arr3[i]);					//�p�G�S���J��u"�v�N�Npre[i]=arr3[i]
									fprintf(file, "%c", arr3[i]);
									pre[i] = arr3[i];
									i = i + 1;
									b++;

								}
							}
							printf("�v�P�W���䪺");
							fprintf(file, "�v�P�W���䪺");
							a = 1;
							str1[0] = arr3[i];												//�����D������n����str1[0]=arr3[i]�Astr1[1]=arr3[i]�~�|���`
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ',') 								//�p�G�J��u,�v�N��ܡu,�v�A���Xfor�j��
								{
									j = j + 20;
									//printf(",");
									i = i + 1;
									b++;
								}
								else 										//�p�G�S���J��u,�v�N�Nstr1[a]=arr3[i]�Astr1�N�����P��}���䪺�ɶ��t
								{
									//printf("%c",arr3[i]);

									i = i + 1;
									str1[a] = arr3[i];
									a++;
									b++;
								}
							}
							a = 1;
							str2[0] = arr3[i];	         									//�����D������n����str2[0]=arr3[i]�Astr2[1]=arr3[i]�~�|���`
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == '\n') 							//�p�G�J��u,�v�N��ܡu,�v�A���Xfor�j��
								{
									//printf("\n");
									j = j + 20;
									b++;
								}
								else 										//�p�G�S���J��u,�v�N�Nstr2[a]=arr3[i]�Astr2�N���}�Ĥ@��P���U�ĤG�䪺�ɶ��t
								{
									//	printf("%c",arr3[i]);

									i = i + 1;
									str2[a] = arr3[i];
									a++;
									b++;
								}
							}
							math3 = math1;												//math3�����W����math1
							math4 = math2;												//math4�����W����math2
							math1 = atoi(str1);											//�Nstr1�ഫ����ƨé�Jmath1
							math2 = atoi(str2);											//�Nstr2�ഫ����ƨé�Jmath2
							Interval = math4;												//���j�N��Ĥ@���}�P�ĤG����U���ɶ��t
							Dwell_time = math3;											//���d�ɶ��N�����P��}���䪺�ɶ��t
							Latency = math1 + math2 + math3;									//���ɥN��Ĥ@����U�P�ĤG���}���ɶ��t
							Flight_time = math1 + math2;									//����ɶ��N��Ĥ@����U�P�ĤG����U���ɶ��t
							Up_to_up = math2 + math3;										//���ﰪ�N��Ĥ@���}�P�ĤG���}���ɶ��t
																							//    printf("%d,",math1);
																							//    printf("%d\n",math2);
																							//    printf("%s - %s\n",last,pre);

							printf("���j�G%d,���d�ɶ��G%d,���ɡG%d,����ɶ��G%d,���ﰪ�G%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							fprintf(file, "���j�G%d,���d�ɶ��G%d,���ɡG%d,����ɶ��G%d,���ﰪ�G%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							//  printf("%d\n",math1+math2);
						}
					}
					num_std++;
					fprintf(file, "%d", num_std);

					fclose(file);															//����test4.txt��










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


					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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

					fprintf(file, "�O�_�G%d�ӡA�O�a�G%d��\n", first, third);
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
					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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
					fprintf(file, "�a�ΡG%d�ӡA�a�ϡG%d�ӡA�a�աG%d��\n", first, second, third);
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
					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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
					fprintf(file, "�F�_�G%d�ӡA�F���G%d��\n", first, second);
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
					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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
					fprintf(file, "�����G%d�ӡA�����G%d��\n", first, second);
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









































			//�X�k�ϥΪ�

			if (round == cross) {}
			else {


				sprintf(filename, "101%d-%d.txt", number, round);
				file = fopen(filename, "r");		//�гytest3.txt��


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
					file1 = fopen(filename1, "a");		//�гytest3.txt��
					sprintf(filename2, "Result-1/101%d-Ground-train.txt", number);
					file2 = fopen(filename2, "a");		//�гytest3.txt��
					sprintf(filename3, "Result-1/101%d-East-train.txt", number);
					file3 = fopen(filename3, "a");		//�гytest3.txt��
					sprintf(filename4, "Result-1/101%d-Sea-train.txt", number);
					file4 = fopen(filename4, "a");		//�гytest3.txt��



					for (j = 0; j<MAX; j++)					//�~��
						key[j] = ' ';
					for (i = 0; i<10; i++)
					{
						for (j = 0; j<MIN; j++)					//�~��
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
					while (!feof(file))					//�N test2.txt�ɪ���r�ӧO��ikey[i]��
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//����test2.txt��
					file = fopen("test2.txt", "w");		//�гytest3.txt��
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//��J��KeyDown��r��
							{
								i = i + 9;
								if (key[i] == 'B'&&key[i + 1] == 'a'&&key[i + 2] == 'c'&&key[i + 3] == 'k'&&key[i + 4] == 'S'&&key[i + 5] == 'p'&&key[i + 6] == 'a'&&key[i + 7] == 'c'&&key[i + 8] == 'e') 					//�P�_�O�_���j����
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
										if (key[i] == '\"') 																		//�p�G�J��u"�v�N�N�u:�v��itest3.txt�ɡA���Xfor�j��
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//�p�G�S���J��u"�v�N�N��r��itest3.txt��
										{
											//printf("%c",key[i]);
											//fprintf(file,"%c",key[i]);
											arr[arri][arrj] = key[i];
											arrj++;
											i = i + 1;
										}
									}
								}																						//�N�}�C������Y" "�����r
							}


							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//��J��Delay��r��
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//�p�G�J��u\n�v�N�N�u,�v�Ϊ̡u\n�v(�̷�a�@�P�_)��itest3.txt�ɡA���Xfor�j��
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
									else 																					//�p�G�S���J��u\n�v�N�N��r��itest3.txt��
									{
										//printf("%c",key[i]);
										//fprintf(file,"%c",key[i]);
										arr[arri][arrj] = key[i];
										arrj++;
										i = i + 1;
									}
								}
							}

							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'U'&&key[i + 4] == 'p') 	//��J��KeyDown��r��
							{
								i = i + 7;																								//�N�}�C������Y" "�����r
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
										if (key[i] == '\"') 																		//�p�G�J��u"�v�N�N�u:�v��itest3.txt�ɡA���Xfor�j��
										{
											//printf(":");
											//fprintf(file,":");
											j = j + 20;
											arrj = 5;
										}
										else 																					//�p�G�S���J��u"�v�N�N��r��itest3.txt��
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


							/*        	if (key[i]=='D'&&key[i+1]=='e'&&key[i+2]=='l'&&key[i+3]=='a'&&key[i+4]=='y'){								//��J��Delay��r��
							i=i+6;
							for(j=0;j<20;j++)
							{
							if(key[i]=='\n'){																		//�p�G�J��u\n�v�N�N�u,�v�Ϊ̡u\n�v(�̷�a�@�P�_)��itest3.txt�ɡA���Xfor�j��

							//printf(",");
							//fprintf(file,",");
							j=j+20;


							}
							else{																					//�p�G�S���J��u\n�v�N�N��r��itest3.txt��
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
					for(j=0;j<10;j++)					//�~��
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
					for (j = 0; j<MAX; j++)					//�~��
						key[j] = ' ';

					while (!feof(file))					//�N test2.txt�ɪ���r�ӧO��ikey[i]��
					{
						fscanf(file, "%c", &key[i]);
						i++;
					}
					fclose(file);						//����test2.txt��
					file = fopen("test3.txt", "w");		//�гytest3.txt��
					for (i = 0; i<MAX; i++)
					{
						if (key[i] != ' ')
						{
							b = 0;
							if (key[i] == 'K'&&key[i + 1] == 'e'&&key[i + 2] == 'y'&&key[i + 3] == 'D'&&key[i + 4] == 'o'&&key[i + 5] == 'w'&&key[i + 6] == 'n') 	//��J��KeyDown��r��
							{
								i = i + 9;																								//�N�}�C������Y" "�����r
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\"') 																		//�p�G�J��u"�v�N�N�u:�v��itest3.txt�ɡA���Xfor�j��
									{
										printf(":");
										fprintf(file, ":");
										j = j + 20;
									}
									else 																					//�p�G�S���J��u"�v�N�N��r��itest3.txt��
									{
										printf("%c", key[i]);
										fprintf(file, "%c", key[i]);
										i = i + 1;
									}
								}
							}
							if (key[i] == 'D'&&key[i + 1] == 'e'&&key[i + 2] == 'l'&&key[i + 3] == 'a'&&key[i + 4] == 'y') 								//��J��Delay��r��
							{
								i = i + 6;
								for (j = 0; j<20; j++)
								{
									if (key[i] == '\n') 																		//�p�G�J��u\n�v�N�N�u,�v�Ϊ̡u\n�v(�̷�a�@�P�_)��itest3.txt�ɡA���Xfor�j��
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
										//�p�G�S���J��u\n�v�N�N��r��itest3.txt��
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
					for (j = 0; j<MAX; j++) 														//�Narr3[MAX]�Ppre[MAX]�~��
					{
						arr3[j] = ' ';
						pre[j] = ' ';
					}
					arr3rr[0] = ' ';
					while (!feof(file))														//�Ntest3.txt�ɤ�r���iarr3[MAX]��
					{
						fscanf(file, "%c", &arr3[i]);
						i++;
					}
					fclose(file);															//����test3.txt��
					file = fopen("test4.txt", "w");		//�гytest4.txt��
					for (i = 0; i<MAX; i++) 														//�Nstr1[5]�Pstr2[5]�~��
					{
						for (j = 0; j<5; j++)
						{
							str1[j] = '0';
							str2[j] = '0';

						}


						if (arr3[i] != ' ') 													//�p�Garr3[i]������ťծɡA�i�Jif��
						{
							printf("�u");
							fprintf(file, "�u");
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ':') 								//�p�G�J��u:�v�N��ܡu:�v�A���Xfor�j��
								{
									//printf(":");
									j = j + 20;
									i = i + 1;
									b++;
								}
								else
								{
									printf("%c", arr3[i]);					//�p�G�S���J��u"�v�N�Npre[i]=arr3[i]
									fprintf(file, "%c", arr3[i]);
									pre[i] = arr3[i];
									i = i + 1;
									b++;

								}
							}
							printf("�v�P�W���䪺");
							fprintf(file, "�v�P�W���䪺");
							a = 1;
							str1[0] = arr3[i];												//�����D������n����str1[0]=arr3[i]�Astr1[1]=arr3[i]�~�|���`
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == ',') 								//�p�G�J��u,�v�N��ܡu,�v�A���Xfor�j��
								{
									j = j + 20;
									//printf(",");
									i = i + 1;
									b++;
								}
								else 										//�p�G�S���J��u,�v�N�Nstr1[a]=arr3[i]�Astr1�N�����P��}���䪺�ɶ��t
								{
									//printf("%c",arr3[i]);

									i = i + 1;
									str1[a] = arr3[i];
									a++;
									b++;
								}
							}
							a = 1;
							str2[0] = arr3[i];	         									//�����D������n����str2[0]=arr3[i]�Astr2[1]=arr3[i]�~�|���`
							for (j = 0; j<20; j++)
							{
								if (arr3[i] == '\n') 							//�p�G�J��u,�v�N��ܡu,�v�A���Xfor�j��
								{
									//printf("\n");
									j = j + 20;
									b++;
								}
								else 										//�p�G�S���J��u,�v�N�Nstr2[a]=arr3[i]�Astr2�N���}�Ĥ@��P���U�ĤG�䪺�ɶ��t
								{
									//	printf("%c",arr3[i]);

									i = i + 1;
									str2[a] = arr3[i];
									a++;
									b++;
								}
							}
							math3 = math1;												//math3�����W����math1
							math4 = math2;												//math4�����W����math2
							math1 = atoi(str1);											//�Nstr1�ഫ����ƨé�Jmath1
							math2 = atoi(str2);											//�Nstr2�ഫ����ƨé�Jmath2
							Interval = math4;												//���j�N��Ĥ@���}�P�ĤG����U���ɶ��t
							Dwell_time = math3;											//���d�ɶ��N�����P��}���䪺�ɶ��t
							Latency = math1 + math2 + math3;									//���ɥN��Ĥ@����U�P�ĤG���}���ɶ��t
							Flight_time = math1 + math2;									//����ɶ��N��Ĥ@����U�P�ĤG����U���ɶ��t
							Up_to_up = math2 + math3;										//���ﰪ�N��Ĥ@���}�P�ĤG���}���ɶ��t
																							//    printf("%d,",math1);
																							//    printf("%d\n",math2);
																							//    printf("%s - %s\n",last,pre);

							printf("���j�G%d,���d�ɶ��G%d,���ɡG%d,����ɶ��G%d,���ﰪ�G%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							fprintf(file, "���j�G%d,���d�ɶ��G%d,���ɡG%d,����ɶ��G%d,���ﰪ�G%d\n", math2, math3, math1 + math2 + math3, math1 + math2, math2 + math3);
							//  printf("%d\n",math1+math2);
						}
					}
					num_std++;
					fprintf(file, "%d", num_std);

					fclose(file);															//����test4.txt��










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


					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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

					fprintf(file, "�O�_�G%d�ӡA�O�a�G%d��\n", first, third);
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
					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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
					fprintf(file, "�a�ΡG%d�ӡA�a�ϡG%d�ӡA�a�աG%d��\n", first, second, third);
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
					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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
					fprintf(file, "�F�_�G%d�ӡA�F���G%d��\n", first, second);
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
					for (j = 0; j<MAX; j++)					//�~��
						arr2[j] = ' ';
					while (!feof(file))					//�N word.txt�ɪ���r�ӧO��itxt[i]��
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
					fprintf(file, "�����G%d�ӡA�����G%d��\n", first, second);
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


