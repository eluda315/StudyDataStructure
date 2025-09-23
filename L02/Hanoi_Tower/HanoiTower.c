#include <stdio.h>

void hanoi_recur(int n, char source, char temp, char dest)
{
	if (n == 1) printf("Move 1 disc from %c to %c.\n", source, dest);
	else {
		hanoi_recur(n - 1, source, dest, temp);
		printf("Move disc %d from %c to %c.\n", n, source, dest);
		hanoi_recur(n - 1, temp, source, dest);
	}
}

void hanoi_iter(int n)
{
	if (n > 5) {
		printf("limit of disk is 5.\n");
		return;
	}
	// create 6 bar
	char bar[6][6];

	// initial position
	for (int i = 1; i <=n;i++) {
		bar[0][i - 1] = n - i + 1; // bar[0]: Ã¹ ¹Ù
	}

	// spread all elements in each bar
	for (int i = 1; i <= n; i++) {
		bar[i][0] = bar[0][n - i];
	}

	//  collect all elements in one bar
	for (int i = 1; i <= 3;i++) {
		//bar[n-1][i] = bar[n-i-1][0];
	}
}

int main(void)
{
	//hanoi_recur(4, 'A', 'B', 'C');
	hanoi_iter(4);
}