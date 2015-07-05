#include<stdio.h>
#include<conio.h>
#include<string.h>
void checkPrint(char *collectString)
{
	int count = 0;
	//if (*collectString == 'T')
		//collectString = 'p';not allowed to modify if the value is passed as pointer or constant

	while (*collectString != '\0')
	{
		printf(" checkprint printed %c\n",*collectString);
		collectString++;
	}
	


}
void funcCharacterArray()
{
	
	char a[8] = "john";
	char b[8] = { 'a', 'y', 'a', 'n' ,'\0'};
	char c[8];
	c[0] = 'a';
	c[1] = 'r';
	c[2] = 'g';
	c[3] = 'h';
	c[4] = 'a';
	c[5] = '\0';
	char *p = "TestString";

	
	printf("::::::::lets have some fun with Character Array:::::::::::\n");
	int i = 0;
		
		printf("I am %s\n", c);
		printf("I Know %s \n", a);
		printf("My oldest friend  is %s\n", b);
		checkPrint(c);
		getchar();
		checkPrint(p);
		
		



}