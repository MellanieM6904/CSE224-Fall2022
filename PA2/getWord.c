/*
Name: Mellanie Martin
Class: CSE 224 - Programming Tools
Date: 10/21/22
Assignment: PA2
Summary: Will take and isolate each word from stdin, convert stdin words to all caps, and whitespace is ignored
*/

#include "index.h"

char *getWord(char *word) {
	
	int outloc = 1;
	int c;
	
	while (1) {
		c = myGetChar();
		if (c == EOF) {
			return NULL;
		}
	
		if (!isspace(c)) {
			break;
		}
	}

	word[0] = c;

	while (c != EOF) { // main loop; check if c is EOF, ' ', or a valid char
		c = myGetChar();
	
		if (isspace(c)) {
			word[outloc] = '\0';
			return word;
		}
		if (isalpha(c)) {
			word[outloc++] = c;
		}
	}

	return NULL;
}


