#include<stdio.h>
int main()
{
	int arr[ ]={1.2, 2.4, 3.6, 4.8, 5};
	int j, *ptr = arr;
	for(j = 0;j<5;j++)
	{
	printf("%d ", *arr);
	++ptr;
	}
}

//Output: 11111
/*Initially array arr is assigned to a pointer variable ptr. In the for loop, ptr is incremented and not arr. So the value 1 1 1 1 1 will be printed. as we use integer type decimal values are all exempted.*/