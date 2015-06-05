#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 5;
	int *p;
	p = &a;
	printf("address of a  %d \n", p);
	printf("value of a %d\n", *p);
	
	*p = 8;
	printf("value of a  %d \n", *p);
	pointerexperiement();
	getchar();


}