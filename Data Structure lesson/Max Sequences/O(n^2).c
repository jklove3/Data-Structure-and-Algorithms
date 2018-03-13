#include <stdio.h>

int MaxSubseqSum(int a[], int n)
{
	int i, j, thisNum, maxNum = 0;
	for(i = 0; i < n; i++)
	{
		thisNum = 0;
		for (j = i; j < n; j++)
		{
			thisNum += a[j];
			if(thisNum > maxNum)
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