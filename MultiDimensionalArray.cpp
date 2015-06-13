#include<stdio.h>
#include<conio.h>
void multidimensionalArrayFunc()
{
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	int (*p)[3] = arr;
	printf(":::::::::::::::::::::::::::::Example of multidimensional Array and Pointer::::::::::::::::::::::\n");
	for (int i = 0; i < sizeof(arr)/ 12; i++)
	{
		for (int j = 0; j < sizeof(arr)/ 8; j++)
		{
			printf("::::::::::::value inside pointer %d, %d:::::::::::%d\n",i,j,*(*(p+i)+j));
		}
	}
	


	getchar();




}