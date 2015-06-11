#include<stdio.h>
#include<conio.h>
void arrayPointer()
{
	printf("==============Array Pointer Programming==================");
	int arr[4]= { 2,3,3,5 };
	int *p;
	p = arr;
	printf("size of array::::::%d", sizeof(arr)/4);
	for (int i = 0; i <sizeof(arr)/4; i++)
	{
		printf("value in %d th array::::::%d\n",i, arr[i]);
		printf("address of pointers:::::::%d\n", &arr[i]);
	}
	printf("::::::::::::::::::::::::::iterating through pointer::::::::\n");
		for(int i=0;i< 4; i++)
		{
			printf("address of pointer %d\n",(p+i));
			printf("value in the pointer %d\n", *(p + i));


		}

} 