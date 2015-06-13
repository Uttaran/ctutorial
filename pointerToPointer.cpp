#include<stdio.h>
#include<conio.h>
void pointertoPointerMethod()
{
	printf("::::::::::::::::::::::::::::In this chapter we will learn about pointer to pointer::::::::::::::::::::::::::::\n"); 
	int *p;//single pointer
	int **q;//double pointer
	int ***r;///triple pointer

	int variableinteger = 5;
	p = &variableinteger;
	q = &p;
	r = &q;
	printf("address of variableinteger is %d", &variableinteger);
	printf("address of p is %d\n", &p);
	printf("address of q is %d\n", &q);
	printf("address of r is %d \n ", &r);


	printf("value inside  p is %d\n", p);
	printf("value inside  q is %d\n", q);
	printf("value inside  r is %d\n", r);

	printf("1 st pointer refer to value %d\n", *p);
	printf("2 nd  pointer refer to value %d\n", **q);
	printf("3 rd pointer refer to value %d\n", ***r);

	printf("::::::::::::::::::::::Lets have a experiment with dereferencing:::::::::::::::::::::::::");
		 ***r=**q + 3;
		 printf("After dereferencing value of the integer and pointer:::::::\n");
		 printf("value of integer %d\n", variableinteger);
		 printf("1 st pointer refer to value %d\n", *p);
		 printf("2 nd  pointer refer to value %d\n", **q);
		 printf("3 rd pointer refer to value %d\n", ***r);



	getchar();







}