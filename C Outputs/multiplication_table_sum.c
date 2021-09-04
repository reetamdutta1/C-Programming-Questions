/*TestCase 1:

Input:

5

Expected Result Value:

5, 10, 15, 20, 25, 30, 35, 40, 45, 50 

275

TestCase 2:

Input:

12

Expected Result Value:

12, 24, 36, 48, 60, 72, 84, 96, 108, 120 

 660

*/

#include <stdio.h>
int main()
{
    int n, i, value=0, sum=0;
                
    printf("Enter number : ",n);
    scanf("%d",&n);
        
    for(i=1; i<=10; ++i)
    {
        value = n * i;
        printf("%d \t",value);
        sum=sum+value;
    }
           
    printf("\nsum : %d",sum);
                
    return 0;
}