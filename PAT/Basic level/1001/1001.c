#include <stdio.h>

/* Nothing to explain*/
int Callatz(int n)
{
	int i = 0;
	while(n != 1)
	{
		if(n % 2 == 0)
			n /= 2;
		else
			n = (3 * n + 1) / 2;
		i++;
	}
	return i;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Callatz(n));
	return 0;
}