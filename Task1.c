#include <stdio.h>
#pragma warning(disable : 4996)
#include <string.h>

int main(int argc, char* argv[])
{
	char filename[10];
	char str[20];
	//strcpy(str, argv[2]);
	FILE* fp;
	int ocurrences = 0;

	//printf("Please enter the filename: ");
	//scanf("%s", filename);

	//printf("Please enter substring: ");
	//scanf("%s", str);

	fp = fopen(argv[1], "r");

	if (fp == NULL)
	{
		printf("%s was not found.", argv[1]);
	}
	else
	{
		int i = 0;
		char c;

		while (!feof(fp))
		{
			c = fgetc(fp);
			if (c == argv[2][i])
			{
				i++;
			}
			else
			{
				i = 0;
			}
			if (i >= strlen(argv[2]))
			{
				ocurrences++;
				i = 0;
			}
		}
		printf("Total occurrences: %d", ocurrences);
		fclose(fp);
	}


	return 0;
}
