//2013058686_¿Ø»Ø¿œ_508

#include<stdio.h>
int arr[30001];
int main() {
	int N, M;
	int temp;
	scanf("%d %d",&N,&M);
	for (int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
	}

	for (int i = 0; i < N - 1; i++) {
		if (i == M)break;
		int min = i;
		for (int j = i + 1; j < N; j++) {
			if (arr[j] < arr[min]) {
				min = j;		
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;;
		
		
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n",arr[i]);
	}
	
	return 0;
}

