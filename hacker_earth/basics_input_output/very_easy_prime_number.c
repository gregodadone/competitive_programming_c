#include <stdio.h>
#include <stdbool.h>

//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/

bool isPrime(int n) {
	bool result = true;
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			result = false;
			break;
		}
	}
	return result;
}

int main() {
	int n;
	scanf("%d", &n);

	int number;
	for (number = 2; number <= n; number++){
		if (isPrime(number)) {
			printf("%d ", number);
		}
	}

	return 0;
}
