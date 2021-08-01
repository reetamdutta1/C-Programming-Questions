#include<stdio.h>
int main()
{
	void  num=10; //error here
	printf("%v", num);
	return 0;
}


//Compilation error
//void is not a valid data type