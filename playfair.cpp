// C program to implement Playfair Cipher

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[SIZE], key[SIZE];

	// Key to be encrypted
	strcpy(key, "Monarchy");
	printf("Key text: %s\n", key);

	// Plaintext to be encrypted
	strcpy(str, "instruments");
	printf("Plain text: %s\n", str);

	// encrypt using Playfair Cipher
	encryptByPlayfairCipher(str, key);

	printf("Cipher text: %s\n", str);

	return 0;
}

// This code is contributed by AbhayBhat

