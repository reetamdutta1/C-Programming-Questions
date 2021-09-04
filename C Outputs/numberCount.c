int numberCount(int len, int* arr, int value)
{
    int count = 0;
    for(int i =0 ; i < len ; i++ )
    {
        if(arr[i]==value)
        count++;
    }
    return count;
}