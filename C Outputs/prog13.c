#include<stdio.h>

int main()
{
    static int arr[] = {0, 1, 2, 3, 4};
    int *p[] = {arr, arr+1, arr+2, arr+3, arr+4};
    int **ptr=p;
    ptr++;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    *ptr++;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    *++ptr;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    ++*ptr;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    return 0;
}

/*p is an array of pointers. ptr is a pointer to a pointer, initailly referring to p.
Step 1:
ptr++
ptr is incremented by 1, i.e. ptr now points to p+1 or (arr+1)
ptr-p=1, *ptr=arr+1, so *ptr-arr=1, **ptr=*(arr+1)=1
Step 2:
*ptr++
is *(ptr++), i.e. ptr=ptr+1=arr+2, the * part is not of any work here.
ptr-p=2, *ptr=arr+2, so *ptr-arr=2, **ptr=*(arr+2)=2
Step 3:
*++ptr
Similar to step 2, *++ptr=*(++ptr)
ptr-p=3, *ptr=arr+3, so *ptr-arr=3, **ptr=*(arr+3)=3
Step 4:
++*ptr
is ++(*ptr), i.e. ptr now points to arr+4, but point to be noted that *p also changes,since ptr is pointer to p. Here ptr does not change its reference position unlike all the other steps, but changes the value it is pointing to
*p[]={arr, arr+1, arr+2, arr+4, arr+4}
so, ptr-p=3, *ptr=p[3]=arr+4, so *ptr-arr=4, **ptr=*(arr+4)=4*/
