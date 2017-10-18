#include <stdio.h>
#include <string.h>

int mi(int k, int m)
{
    int res = 1;
	while(m)
	{
		if(m & 1)
		{
			res *= k;
		}
		k *= k;
		m >>= 1;
	}
	return res;
}

int main()
{
	int k, N;
	long long res;
	while(scanf("%d%d", &k, &N) != EOF)
	{
		int i = 0;
		res = 0;
		while(N)
		{
			if(N & 1)
			{
				res += mi(k, i);
			}
			i++;
			N >>= 1;
		}
		printf("%lld\n", res);
	}
	return 0;
}