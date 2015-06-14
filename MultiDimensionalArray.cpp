#include<stdio.h>
#include<conio.h>
void multidimensionalArrayFunc()
{
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	int (*p)[3] = arr;//the size of the pointer must be same with the each row size of the array like 3 here
	printf(":::::::::::::::::::::::::::::Example of multidimensional Array and Pointer::::::::::::::::::::::\n");
	for (int i = 0; i < sizeof(arr)/ 12; i++)
	{
		for (int j = 0; j < sizeof(arr)/ 8; j++)
		{
			printf(":::::::::::::::::address of pointer %d, %d:::::::::::%d\n", i, j, (*(p + i) + j));//notice the break of the indicies here the arr[i][j]=*(*(arr+i)+j)
			printf(":::::::::::::::::value inside pointer %d, %d:::::::::::%d\n",i,j,*(*(p+i)+j));
		}
		
	}
	//when the indicies get added with the array's base address inside a bracket the array reffer to the 2 nd row of the multidimensional array
	printf("address of the 2 nd rows starting %d\n",*(p+ 1));
	//when the indicies get added with the array's base address with out any brace it act as a single dimensional array and point to the imediately next block of memory
	printf("%d",*p + 1);

	getchar();




}