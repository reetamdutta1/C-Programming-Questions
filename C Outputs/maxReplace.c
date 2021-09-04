void maxReplace(int size, int *inputList)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
         sum += inputList[i];
    }
        for(i=0;i<size;i++)
        {
            inputList[i]=sum;
        }
    for(i=0;i<size;i++)
    {
        printf("%d ",inputList[i]);
    }
}