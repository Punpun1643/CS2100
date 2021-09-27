#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int hexToDecimal(char[], size_t);
int hexVal(char);

int main(void) {
	char hex[8];
	size_t len;

	printf("Enter up to 7 hexadecimal characters: ");
	fgets(hex, 8, stdin);
	len = strlen(hex);

	/* End-of-Line Check */
	if(hex[len-1] == '\n') {
		len = len - 1;
		hex[len] = '\0';
	}

	printf("You entered: %s\n", hex);
	printf("The value in decimal is: %d\n", hexToDecimal(hex, len));
	return 0;
}

int hexVal(char hex) {
	switch(toupper(hex)) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case 'A': return 10;
		case 'B': return 11;
		case 'C': return 12;
		case 'D': return 13;
		case 'E': return 14;
		case 'F': return 15;
	}
	return 0;
}

int hexToDecimal(char hex[], size_t size) {
	// complete the function body
	long outputDecimal = 0;
	//the pointer to the last element
	char *hex_p = &hex[size - 1];

	outputDecimal += hexVal(*hex_p) * 1;

	for (int i = 1; i <= size - 1; i++) {
		hex_p -= sizeof(hex[0]);
		outputDecimal += hexVal(*hex_p) * pow(16, i);
	}
	
	return outputDecimal;

}

