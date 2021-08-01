#include<stdio.h>
int main()
{
	int arr[5][5][5] = {0};
	printf("%d", ( &arr+1 - &arr ));
	return 0;
}

//Output: 1
/*printf("%d", (&arr+1 - &arr)); let us consider the address of an array arr starts from 2293420
then, printf("%d", (2293420 +1 - 2293420);
printf("%d", 0 + 1);
printf("%d", 1);
Thus 1 is outputted. */