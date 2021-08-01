#include<stdio.h>
int main()
{
	printf("%d\t",sizeof(2.5));
	printf("%d\t",sizeof(2));
	printf("%d",sizeof('A'));
	return 0;
}

//Output: 8 4 1
//Explanation: C compiler by default will assign any undeclared float data type as double. Thus 8 4 1 is outputted