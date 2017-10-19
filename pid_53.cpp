#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	long long res = 1;//int 范围不够（溢出）
	scanf("%d", &n);
	//Catalan num : H(n) = H(n - 1) * (4 * n - 2) / (n + 1)
	for(int i=1; i<=n; i++){
		res = res * (4 * i - 2) / (i + 1);
	}
	printf("%lld\n", res);
	return 0;
}