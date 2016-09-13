//2013058686_À¯È¯ÀÏ_508
#include<stdio.h>

int arr[30001];
int N;
int main() {
	int key = 0;
	int i;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int j = 1; j < N; j++) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i]>key) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
	for (int i = N - 1; i >= 0; i--) {
		printf("%d\n", arr[i]);
	}

	return 0;
}