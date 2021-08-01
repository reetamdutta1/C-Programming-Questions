#include<stdio.h>
void fun(char**);
int main()
{
	char *arr[] = { "bat", "cat", "fat", "hat", "mat", "pat" };
	fun(arr);
	return 0;
}
void fun(char **p)
{
	char *t;
	t = (p += sizeof(int))[-1];
	printf("%s\n", t);
}

// Output: hat
/* fun(arr) returns the address of first element in an array arr Let we start from the function void fun().
*t is a pointer variable which holds t = (p += sizeof(int))[-1];
ie ) t = (p = p + sizeof(int)) [-1];
t = (p = p + 4) [-1];
t = (p = address of bat + 4)[-1];
let us consider a address of bat is 2293416,
t = (p = 2293416 + 4)[-1];
t = (p = 2293432)[-1]
t = ("mat")[-1]; // index from "mat"
t = "hat";
thus hat is outputted. */