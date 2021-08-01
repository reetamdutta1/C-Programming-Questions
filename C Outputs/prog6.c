#include<stdio.h>
int main()
{
	int a[][3] = {0, 1, 2, 3, 4, 5};
	int (*ptr)[3] = a;
	printf("%d %d ", (*ptr)[0], (*ptr)[1]);
	++ptr;
	printf("%d %d\n", (*ptr)[0], (*ptr)[1]);
	return 0;
}

//Output: 0 1 3 4
/*Explanation: Here, *ptr[3] is a pointer array which holds the address of first element in an array a[][3]. Now the address of a[][3] and *ptr[3] are same, which means any changes made to one of the variable will affect other variable.
now *ptr[3] looks like this *ptr[3] = {0, 1, 2}, thus first printf outputted 0 1
In the very next line we have ++ptr;, which pre-increment the address of ptr, i.e) let us consider the address of ptr is 2293432 and after pre-increment the address of ptr will be 2293444 and not 2293436 in this case, because we are incrementing array and not a value in an array.
Now the value of ptr looks like *ptr[3] = {3, 4, 5}, thus second printf outputted 3 4 */