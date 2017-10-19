#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int res[10];

int main()
{
    long long m, n;
	while(scanf("%lld%lld", &m, &n) != EOF)
	{
		memset(res, 0, sizeof(res));
		for(long long i = m; i <= n; i++)
		{
			int temp = i;
			while(temp)
			{
				res[temp % 10]++;
				temp /= 10;
			}
		}
		for(int i=0; i<10; i++)
		{
			printf("%d", res[i]);
			if(i == 9)
				printf("\n");
			else
				printf(" ");
		}
	}
	return 0;
}