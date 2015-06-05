#include<stdio.h>
#include<conio.h>
void pointerexperiement()
{
	printf("/////////////////////////////Derefferencing example/////////////////////////////////////////////////");
	int a=10;
	int *p=&a;

	printf("value of a %d", *p);
	printf("address of a %d", p);
	printf("value of a %d", *p);


	printf("////////////////////pointer arithmetic////////////////////////\n");
	printf(" address of the pointer:::::%d\n", p);
	printf("size of pointer %d\n", sizeof(p));
	printf("incrementing address by 1 %d\n", p + 1);
	printf("value of p+1 address %d\n", *(p + 1));
	printf("incrementing the value of p by 1 %d\n", *p + 1);




	getchar();
	

	


}
