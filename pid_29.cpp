#include <stdio.h>

int t, n, k;

int main()
{
    scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &k);
		if((n & k) == k)
			printf("%d\n", 1);
		else
			printf("%d\n", 0);
	}
	return 0;
}