//2013058686_유환일_508
#include<cstdio>
using namespace std;
#define INF 987654321
void MAX_HEAPIFY(int i);
void swap(int i, int largest); 
void BUILD_MAX_HEAP();
void Heapsort();
int arr[100001];
int N, K;
int heap_size;
int main() {
	
	scanf("%d %d",&N,&K);
	for (int i = 1; i <= N; i++) {
		scanf("%d",&arr[i]);
	}
	
	
	Heapsort();
	for (int i = N; i >= N-K+1; i--) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	for (int i = 1; i <= N-K; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void MAX_HEAPIFY(int i) { //HEAP 특성 유지
	
	int leftChild = 2 * i;
	int rightChild = (2 * i) + 1;
	int parent = i;
	int largest;
	if (leftChild <= heap_size && arr[parent] < arr[leftChild])
		largest = leftChild;
	else
		largest = parent;
	if (rightChild <= heap_size && arr[largest] < arr[rightChild])
		largest = rightChild;

	if (largest != i){
		swap(i, largest);
		MAX_HEAPIFY(largest);
	}
}
void BUILD_MAX_HEAP() { //MAX HEAP 만들기
	heap_size = N;
	for (int i = N / 2; i >= 1; i--) {
		MAX_HEAPIFY(i);
	}
}



void Heapsort() { //HEAP 정렬
	BUILD_MAX_HEAP();
	for (int i = N; i >= N-K+1; i--) {
		swap(1, i);
		heap_size--;
		MAX_HEAPIFY(1);
	}

}

void swap(int i, int largest) {
	int temp = arr[i];
	arr[i] = arr[largest];
	arr[largest] = temp;

}