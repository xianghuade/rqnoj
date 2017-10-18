#include <stdio.h>
#include <string.h>

#define MAX_M 25
#define MAX_V 30000

struct node{
    int price;
	int importance;
	int value;
};

struct node in[MAX_M];
int dp[MAX_V];

int max(int m, int n)
{
	return m > n ? m : n;
}

int main()
{
	int N, M;
	while(scanf("%d%d", &N, &M) != EOF)
	{
		memset(dp, 0, sizeof(dp));
		memset(in, 0, sizeof(in));
		for(int i=1; i<=M; i++)
		{
			scanf("%d%d", &in[i].price, &in[i].importance);
			in[i].value = in[i].price * in[i].importance;
		}
		for(int i=1; i<=M; i++)
		{
			for(int j=N; j>=in[i].price; j--)
			{
				dp[j] = max(dp[j], dp[j-in[i].price] + in[i].value);
			}
		}
		printf("%d\n", dp[N]);
	}
	return 0;
}