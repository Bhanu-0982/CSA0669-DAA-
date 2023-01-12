#include<stdio.h>


void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}


int getSuccessor(int arr[], int k, int n)
{

	int p = k - 1;
	while (arr[p] == n)
		p--;

	
	if (p < 0)
		return 0;

	
	arr[p] = arr[p] + 1;
	for(int i = p + 1; i < k; i++)
		arr[i] = 1;

	return 1;
}


void printSequences(int n, int k)
{
	int *arr = new int[k];


	for(int i = 0; i < k; i++)
		arr[i] = 1;


	while(1)
	{
	
		printArray(arr, k);

	
		if(getSuccessor(arr, k, n) == 0)
		break;
	}

	delete(arr); 
	return;
}


int main()
{
	int n = 3;
	int k = 2;
	printSequences(n, k);
	return 0;
}
