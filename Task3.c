#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main(int argc, char* argv[])
{
	char word[10];
	char data[100];
	FILE* fp;

	fp = fopen(argv[1], "r");

	if (fp == NULL)
	{
		printf("%s was not found.", argv[1]);
	}
	else
	{
		fgets(data, 100, fp);
		fclose(fp);
		printf("%s\n", data);


		//reverse strings
		int L = 0, R = 0;

		for (int i = 0; i < strlen(data);i++)
		{
			if (data[i + 1] == ' ' || data[i + 1] == '.')
			{
				R = i;

				while (L < R)
				{
					if ((data[L] != 'a' && data[L] != 'e' && data[L] != 'i' && data[L] != 'o' && data[L] != 'u') && (data[R] != 'a' && data[R] != 'e' && data[R] != 'i' && data[R] != 'o' && data[R] != 'u'))
					{
						//not a vowel so swap
						char temp = data[L];
						data[L] = data[R];
						data[R] = temp;
					}
					L++;
					R--;

				}
				if (i + 2 < strlen(data))
					L = i + 2;
			}
		}
		printf("Reversed:\n");
		printf("%s\n", data);
		
	}
	return 0;
}
