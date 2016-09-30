//2013058686_¿Ø»Ø¿œ_508

#include<cstdio>
#include<algorithm>
using namespace std;
#define INF 987654321
int A[100001];
int B[100001];
int main() {
	int N, M;
	int cnt = 0;
	scanf("%d %d",&N,&M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < M; i++) {
		scanf("%d", &B[i]);
	}
	sort(A, A + N);
	
	
	for (int i = 0; i < M; i++) {
		bool res = binary_search(A, A + N, B[i]);
		if (res == true)
			cnt++;
	}
	printf("%d\n",cnt);
	
	return 0;
}