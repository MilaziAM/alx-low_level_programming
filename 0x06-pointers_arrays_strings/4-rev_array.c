#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * n: number of elements to of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0;  i < n ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
