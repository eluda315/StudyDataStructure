#include <stdio.h>

int search_iter(int A[], int size, int b) {
	int k=0;
	for (int i = 1; i <= size; i++) {
		if (A[i] == b) k = i;
	}
	return k;
}

int search_recur(int A[], int b, int start, int end) {
	if (start > end) return -1;
	int median = (start + end) / 2;
	if (A[median] < b) search_recur(A, b, median, end);
	else if (A[median] > b) search_recur(A, b, start, median);
	else return median;
}

int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = search_iter(arr, 10, 7);
	printf("%d\n", k);

	printf("%d\n", search_recur(arr, 3, 0, 9));
}