//2013058686_¿Ø»Ø¿œ_508

#include<cstdio>

using namespace std;
#define INF 9999999


void swap(int i, int largest);
void MAX_HEAP_INSERT(int key);

int extract_max();
int maxim(int left, int right);
void top_bottom(int i);
int arr[111111];
int heap_size;
int N, K, x;
int cnt;
int main() {

	while (1)
	{
		int a, b, c;
		scanf("%d", &a);
		int ex;
		if (a == 0) {

			for (int i = 1; i <= x; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
			break;
		}

		switch (a)
		{

		case 1: //insert
			scanf("%d", &b);
			arr[++x] = b;
			heap_size = x;
			MAX_HEAP_INSERT(x);
			break;
		case 2:
			ex = extract_max();
			printf("%d ", ex);
			top_bottom(1);
			break;
		case 3:
			scanf("%d %d", &b, &c);
			arr[b] = c;
			MAX_HEAP_INSERT(b);
			top_bottom(b);

			break;

		}

	}
	return 0;
}





int extract_max() {
	int res = arr[1];
	swap(1, x);
	arr[x] = -INF;
	x--;

	return res;
}

void top_bottom(int i) {
	if (i * 2 > x)return;

	int parent = i;// 1
	int leftchild = i * 2;//2
	int rightchild = i * 2 + 1;//3

	int max_child = maxim(leftchild, rightchild);
	if (arr[parent] < arr[max_child]) {
		swap(parent, max_child);
		top_bottom(max_child);
	}
}
void MAX_HEAP_INSERT(int key) {

	if (key == 0)return;

	int child = key;
	int parent = key / 2; //1

	if (parent != 0) {
		if (arr[child] > arr[parent]) {
			swap(child, parent);
			MAX_HEAP_INSERT(parent);
		}
	}
}




void swap(int i, int largest) {
	int temp = arr[i];
	arr[i] = arr[largest];
	arr[largest] = temp;

}
int maxim(int left, int right) {
	int res = 0;
	if (arr[left] > arr[right])res = left;
	else res = right;
	return res;
}