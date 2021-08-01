#include<stdio.h>
int main()
{
	void *ptr;
	int  num = 10;
	ptr = &num;
	printf("%d", ptr);
	return 0;
}

//Output: Prints the address