#include<stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 5, 7 };
	int *ptr = (&arr + 1);
	printf("%d %d\n", *(arr + 1), *(ptr - 1));
	return 0;
}

//Answer: 2 7
/*let's go from line 5...
*ptr = (address of first value in arr[] array + 1)
let us consider 2293416 is a address of first value in arr[] array i.e) *ptr = (2293416 + 1)
i.e) *ptr = (2293436) and not 2293420 because 1 points to the next location after all the addressess of values in an array arr[]
here, the address of a value 7 is 2293432. Then the address of *ptr is 2293436
coming to printf();
printf("%d %d\n", *(2293420 + 1), *(2293436 -1));
printf("%d %d\n", *(2293424), *(2293432));
printf("%d %d\n", 2, 7);
thus 2 7 */