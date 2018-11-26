#include <stdio.h>
#include <string.h>

//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/

int calculatePosition(int initialPos, int n) {
	int finalPos;
	
	if (initialPos > 47 && initialPos < 58) {
		finalPos = initialPos + (n % 10);
		if (finalPos > 57) {
			finalPos = 48 + (finalPos % 58);
		}
		return finalPos;
	}
	if (initialPos > 64 && initialPos < 91) {
		finalPos = initialPos + (n % 26);
		if (finalPos > 90) {
			finalPos = 65 + (finalPos % 91);
		}
		return finalPos;
	}
	if (initialPos > 96 && initialPos < 123) {
		finalPos = initialPos + (n % 26);
		if (finalPos > 122) {
			finalPos = 97 + (finalPos % 123);
		}
		return finalPos;
	}

	return initialPos;
}

int main() {

	char message[1000];
	int n, lenght;

	scanf("%s", message);
	scanf("%d", &n);

	lenght = strlen(message);

	int i, ascii, ciphered;
	for (i = 0; i < lenght; i++) {
		ascii = (int) message[i];
		ciphered = calculatePosition(ascii, n);
		if (ciphered != ascii) {
			message[i] = ciphered;
		}
	}

	printf("%s\n", message);

	return 0;
}
