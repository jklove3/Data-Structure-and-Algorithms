#include <stdio.h>

int MaxSubseqSum(int a[], int n)
{
	int i, thisNum = 0, maxNum = 0;
	for(i = 0; i < n; i++)
	{
		thisNum += a[i];
		if(thisNum > maxNum)
			maxNum = thisNum;
		else if(thisNum < 0)
			thisNum = 0;
	}
	return maxNum;
}

int main()
{
    int a[] = {1, 2, 5, -9, 19, -6, 10, 12, -1, 6};
    int n = 10;
    printf("%d", MaxSubseqSum(a, n));
}
