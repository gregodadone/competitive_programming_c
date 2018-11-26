#include <stdio.h>
#include <string.h>

//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/description/

int main() {
	
	char string[100];
	scanf("%s", string);

	int length = strlen(string);

	int i;
	for (i = 0; i <= (length / 2); i++) {
		if (string[i] != string[(length - 1 - i)]) {
			printf("%s\n", "NO");
			return 0;
		}
	}
	printf("%s\n", "YES");

	return 0;
}
