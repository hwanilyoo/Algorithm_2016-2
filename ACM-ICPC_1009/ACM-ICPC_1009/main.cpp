#include<cstdio>
#include<cmath>
using namespace std;
#define INF 987654321;
typedef long long ll;

int main() {
	int T;
	scanf("%d",&T);
	while (T--) {
		int a, b;
		int res=1;
		scanf("%d %d", &a, &b);

		for (int i = 0; i < b; i++) {
			res = res*a;
			res = res % 10;
		}
		
		if (res != 0)printf("%d\n",res);
		else printf("10\n");
	}
	return 0;
}