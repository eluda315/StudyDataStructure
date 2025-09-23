#include <stdio.h>

int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return (fib(n - 1) + fib(n - 2));
}

int fib_iter(int n)
{
	if (n < 2) return n;
	else {
		int tmp, current = 1, last = 0;
		for (int i = 2; i <= n; i++) {
			tmp = current; // 다음 주기에 fib(n-2)가 될 현fib(n-1)을 미리 저장
			current += last; // fib(n) = fib(n-1)+fib(n-2)
			last = tmp; // 다음 주기를 위한 fib(n-2)를 갱신
		}
		return current; 
	}
}

int main(void) 
{
	// 0 1 1 2 3 5
	printf("%d\n", fib(5));
	printf("%d\n", fib_iter(6));
}