#include <stdio.h>

int main()
{
    int n, i;
    printf("n : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=0;i<=n;i=i+2)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=1;i<=n;i=i+2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}