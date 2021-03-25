#include <stdio.h>
#pragma warning(disable : 4996)
#include <string.h>


int main()
{
	char Name[25];
	char RollNo[25];
	char Email[25];
	char option = '\0';
	char choice = '\0';
	char x;		//dummy var
	char line[50];
	int n = 0;
	FILE* fp2; 
	char ch = '\0';
	FILE* fp;


	printf("\nWELCOME TO STUDENT REGISTRATION FORM!\n\n");
	printf("1.Add Students data");
	printf("\n2.Read student's data");
	printf("\n3.Delete student's data");
	printf("\n4.Exit");
	printf("\nMenu option: ");
	//scanf("%c", &option);
	fflush(stdin);
	option = getchar();
	if(option == '\n')
		option = getchar();
	fflush(stdin);

	while(option!= '4')
	{



		switch (option)
		{
		case '1':
			fp = fopen("Registration.txt", "w");

			printf("**********************\nENTER YOUR DETAILS:\n");
			printf("\nEnter your Name: ");
			gets(Name);gets(Name);
			printf("Roll No. : ");
			gets(RollNo);
			printf("Email: ");
			gets(Email);
			
			fflush(stdin);
			fprintf(fp, "%s|%s|%s\n", Name, RollNo, Email);

			printf("\n1.  Enter class-fellow Name: ");
			gets(Name);
			printf("Roll No. : ");
			gets(RollNo);
			printf("Email: ");
			gets(Email);

			fprintf(fp, "%s|%s|%s\n", Name, RollNo, Email);

			printf("\n2.  Enter class-fellow Name: ");
			gets(Name);
			printf("Roll No. : ");
			gets(RollNo);
			printf("Email: ");
			gets(Email);

			fprintf(fp, "%s|%s|%s", Name, RollNo, Email);

			fclose(fp);
			break;
		case '2':

			printf("Press '0' to read your data, '1' to read Class fellow data, '2' to read class fellow data:");
			//scanf("%c", &choice);
			x = getchar();
			choice = getchar();


			n = 0;
			line[0] = '\0';
			fp = fopen("Registration.txt", "r");
			if (choice == '0')
			{
				fgets(line, 50, fp);
				Name[0] = '\0'; RollNo[0] = '\0'; Email[0] = '\0';
				int j = 0;

				for (int i = 0; i < strlen(line)+1; i++)
				{
					if (line[i] != '|' && n == 0)
					{
						//Name copy
						Name[j++] = line[i];
					}else if (line[i] != '|' && n == 1)
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}else if (line[i] != '|' && n == 2)
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}

				if (strcmp(Name,"x") == 0)
				{
					printf("++++++++++++++++++++++++++++++++++++\nData not Found!\n++++++++++++++++++++++++++++++++++++\n");
				}
				else
				{
					printf("++++++++++++++++++++++++++++++++++++");
					printf("\nName: %s  RollNo.: %s  Email:%s\n", Name, RollNo, Email);
					printf("++++++++++++++++++++++++++++++++++++");
					fflush(stdin);
				}

			}
			else if (choice == '1')
			{

				fgets(line, 50, fp);//line 0
				fgets(line, 50, fp);//line 1
				Name[0] = '\0'; RollNo[0] = '\0'; Email[0] = '\0';
				int j = 0;

				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0)
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1)
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2)
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}

				if (strcmp(Name, "x") == 0)
				{
					printf("++++++++++++++++++++++++++++++++++++\nData not Found!\n++++++++++++++++++++++++++++++++++++\n");
				}
				else
				{
					printf("++++++++++++++++++++++++++++++++++++");
					printf("\nName: %s  RollNo.: %s  Email:%s\n", Name, RollNo, Email);
					printf("++++++++++++++++++++++++++++++++++++");
					fflush(stdin);
				}


			}
			else if (choice == '2')
			{

				fgets(line, 50, fp);//line 0
				fgets(line, 50, fp);//line 1
				fgets(line, 50, fp);//line 2
				Name[0] = '\0'; RollNo[0] = '\0'; Email[0] = '\0';
				int j = 0;

				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0)
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1)
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2)
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}


				if (strcmp(Name, "x") == 0)
				{
					printf("++++++++++++++++++++++++++++++++++++\nData not Found!\n++++++++++++++++++++++++++++++++++++\n");
				}
				else
				{
					printf("++++++++++++++++++++++++++++++++++++");
					printf("\nName: %s  RollNo.: %s  Email:%s\n", Name, RollNo, Email);
					printf("++++++++++++++++++++++++++++++++++++");
					fflush(stdin);
				}

			}
			fclose(fp);
			break;
		case '3':
			

			fp = fopen("Registration.txt", "r");
			fp2 = fopen("replica.txt", "w");
			int j;

			printf("Press '0' to delete your data, '1' to delete Class fellow data, '2' to delete class fellow data:");
			//scanf("%c", &choice);
			ch = getchar();
			choice = getchar();

			if (choice == '0')
			{
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 0
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "x|x|x\n");//data deleted

				//Classmate-1
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 1
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "%s|%s|%s\n", Name, RollNo, Email);

				//Classmate-2
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 2
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "%s|%s|%s\n", Name, RollNo, Email);


				fclose(fp);
				fclose(fp2);
				remove("Registration.txt");
				rename("replica.txt", "Registration.txt");

				printf("++++++++++++++++++++++++++++++++++++\nData Successfully deleted!\n++++++++++++++++++++++++++++++++++++\n");
			}
			else if (choice == '1')
			{
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 0
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "%s|%s|%s\n", Name, RollNo, Email);

				//Classmate-1
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 1
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "x|x|x\n");//data deleted


				//Classmate-2
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 2
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "%s|%s|%s\n", Name, RollNo, Email);



				fclose(fp);
				fclose(fp2);
				remove("Registration.txt");
				rename("replica.txt", "Registration.txt");

				printf("++++++++++++++++++++++++++++++++++++\nData Successfully deleted!\n++++++++++++++++++++++++++++++++++++\n");

			}
			else if (choice == '2')
			{
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 0
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "%s|%s|%s\n", Name, RollNo, Email);

				//Classmate-1
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 1
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "%s|%s|%s\n", Name, RollNo, Email);


				//Classmate-2
				Name[0] = '\0';RollNo[0] = '\0';Email[0] = '\0';n = 0;j = 0;line[0] = '\0';//reset variables

				fgets(line, 50, fp);//line 2
				for (int i = 0; i < strlen(line) + 1; i++)
				{
					if (line[i] != '|' && n == 0 && line[i] != '\n')
					{
						//Name copy
						Name[j++] = line[i];
					}
					else if (line[i] != '|' && n == 1 && line[i] != '\n')
					{
						//RollNo. copy
						RollNo[j++] = line[i];
					}
					else if (line[i] != '|' && n == 2 && line[i] != '\n')
					{
						//Email copy
						Email[j++] = line[i];
					}

					if (line[i] == '|' || line[i] == '\0')
					{
						if (n == 0)
							Name[j] = '\0';
						else if (n == 1)
							RollNo[j] = '\0';
						else if (n == 2)
							Email[j] = '\0';
						n++; j = 0;
					}
				}
				fprintf(fp2, "x|x|x\n");//data deleted



				fclose(fp);
				fclose(fp2);
				remove("Registration.txt");
				rename("replica.txt", "Registration.txt");

				printf("++++++++++++++++++++++++++++++++++++\nData Successfully deleted!\n++++++++++++++++++++++++++++++++++++\n");

			}
			break;
		default:
				printf("Invalid choice!");
		}


		printf("\nWELCOME TO STUDENT REGISTRATION FORM!\n\n");
		printf("1.Add Students data");
		printf("\n2.Read student's data");
		printf("\n3.Delete student's data");
		printf("\n4.Exit");
		printf("\nMenu option: ");

		option = getchar();
		if(option == '\n')
			option = getchar();

		fflush(stdin);

	}


	return 0;
}
