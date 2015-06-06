#include<stdio.h>
#include<conio.h>
void pointerexperiement()
{
	printf("/////////////////////////////Derefferencing example/////////////////////////////////////////////////");
	int a=1025;
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

	printf("////////////////////type casting in pointer//////////////\n");
	char *charpointer;
	charpointer = (char*)p;
	printf("value at address=%d is  =%d", charpointer, *charpointer);





	getchar();
	

	


}
