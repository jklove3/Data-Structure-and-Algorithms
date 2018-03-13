#include <stdio.h>

int MaxSubseqSum(int a[], int n)
{
    int i, j, k, thisNum, maxNum = 0;
    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            thisNum = 0;
            for(k = i; k <= j; k++)
                thisNum += a[k];
            if(thisNum >= maxNum)
                maxNum = thisNum;
        }
    }
    return maxNum;
}

int main()
{
    int a[] = {1, 2, 5, -9, 19, -6, 10, 12, -1, 6};
    int n = 10;
    printf("%d", MaxSubseqSum(a, n));
}
