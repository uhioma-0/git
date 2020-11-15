#include <cstdio>
//#include <iostream>
using namespace std;
int main()
{
	char name[]="test";
	int age;
	char gender[] = "test";
	int married;
	char adress[] = "test";
	float height;
	printf("please enter your name: \n ");
	scanf_s("%s",name);
	printf("please enter your Age \n ");
	scanf_s("%d",&age);
	printf("please enter your gender (m for male, f for female \n ");
	scanf_s("%s",gender);
	printf("you are married.true or false? \n ");
	scanf_s("%d", &married);
	printf("please enter your adress? \n ");
	scanf_s("%s", adress);
	printf("please enter your hight in meter\n ");
	scanf_s("%f", &height);
	printf("Name: %s.\n",name );
	printf("Age: %i.\n" ,age );
	printf("Gender: %s.\n",gender );
	if(married == 1)
		printf("Married? True\n ");
	else
		printf("Married? False.\n ");
	printf("Adress: %s.\n" ,adress );
	printf("Height: %f.\n",height );
	return 0;
}