#include <stdio.h>
using namespace std;

void half_pyramis_integer(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%i", j);
			if (j == i)
				printf("\n");
		}
	}
}
/*
int main()
{
	int x;
	printf("Hej! Please insert a number: \n");
	scanf_s("%d", &x);
	half_pyramis_integer(x);
}


void half_pyramis_alphabet(char x)

{
	int n = int(x);
	for (int i = 65; i <= n; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			printf("%c", char(i));
			if (j == i)
				printf("\n");
		}
	}
}

int main()
{
	char x;
	printf("Hej! Please insert an uppercase alphabet: \n");
	scanf_s("%c", &x);
	half_pyramis_alphabet(x);
}
*/