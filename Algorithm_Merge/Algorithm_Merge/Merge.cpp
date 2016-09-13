//2013058686_¿Ø»Ø¿œ_508
#include<stdio.h>
void merge_sort(int first, int end);
void merge(int first, int middle, int end);
int arr[100001];
int sorted[100001];
int N;
int main() {
	
	scanf("%d",&N);
	for (int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
	}
	merge_sort(0, N-1);

	for (int i = N-1; i >= 0; i--) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

void merge_sort(int first, int end) {
	if(first<end){
		int middle = (first + end) / 2;
		merge_sort(first, middle);
		merge_sort(middle + 1, end);
		
		merge(first,middle+1,end);
	}
}
             //0,1,1
void merge(int first, int middle, int end) {
	int left = middle - 1; //0
	int tmp = first; //0
	int num = end - first + 1;//2

	while (first <= left && middle <= end) {
		if (arr[first] <= arr[middle]) //arr[0]<=arr[1]
			sorted[tmp++] = arr[first++];
		else
			sorted[tmp++] = arr[middle++];
	}

	while (first <= left)
		sorted[tmp++] = arr[first++];

	while (middle <= end)
		sorted[tmp++] = arr[middle++];

	for (int i = 0; i < num; i++,end--) {
		arr[end] = sorted[end];

	}

}