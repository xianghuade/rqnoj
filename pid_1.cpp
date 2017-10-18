#include <stdio.h>
#include <string.h>

#define MAX 1005
int Hash[MAX];

int main()
{
    int n;
	while(scanf("%d", &n) != EOF)
	{
		memset(Hash, 0, sizeof(Hash));
		int res = 0;
		while(n)
		{
			int temp;
			scanf("%d", &temp);
			if(!Hash[temp])
			{
				res++;
				Hash[temp] = 1;
			}
			n--;
		}
		printf("%d\n", res);
		for(int i=0; i<MAX; i++)
		{
			if(Hash[i])
			{
				printf("%d", i);
				if(res != 1)
					printf(" ");
				else
					printf("\n");
				res--;
			}
		}
	}
	return 0;
}