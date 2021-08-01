#include<stdio.h>
int main()
{
	char temp;
	char arr[10] = {1, 2, 3, 4, 5, 6, 9, 8};
	temp = (arr + 1)[2];
	printf("%d\n", temp);
	return 0;
}

//Output: 4
/* Explanation: 
Here, temp = (arr + 1)[2];
Let us consider the address of first element in an array arr[10] is 2293416 then temp looks like this temp = (2293416 + 1)[2];
Now temp =(2293420)[2];, which denotes temp = "index value of 2 from the address 2293420(value = 2)";
Now temp = 4;(address = 2293428)
Thus the program outputted 4. */