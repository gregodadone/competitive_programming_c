#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//INCOMPLETE YET
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/

/*
TODO
- isPrime Function
- Search for closer inside array or list
- calculate magic alphabet
*/
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

	int magicalAlphabet

	return 0;
}
