#include <stdio.h>

static int temp;

void main()
{
	int n; printf("Number of elements in your array: "); scanf("%d", &n); int arr[n];
	for (int i=0; i<n; i++) {printf("Element %d: ", i+1); scanf("%d", &arr[i]);}

	for (int i=0; i<=n; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
			if (arr[j]>arr[j+1]) {temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;}
		}
	}

	for (int i=0; i<n; i++) {printf("%d ", arr[i]);}
}