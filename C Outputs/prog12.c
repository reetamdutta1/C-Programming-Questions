#include<stdio.h>

int main()
{
    int arr[] = {12, 14, 15, 23, 45};
    printf("%u, %u\n", arr, &arr);
    return 0;
}


// Output: Two same addresses will be printed
/*Explanation :

Step 1: int arr[] = {12, 14, 15, 23, 45}; The variable arr is declared as an integer 

array and initialized.

Step 2: printf("%u, %u\n", arr, &arr); Here,

The base address of the array is 65486.

=> arr, &arr is pointing to the base address of the array arr.

Hence the output of the program is 65486, 65486*/