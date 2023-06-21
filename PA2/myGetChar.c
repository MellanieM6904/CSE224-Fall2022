/*
Name: Mellanie Martin
Class: CSE 224 - Programming Tools
Date: 10/24/22
Assignment: PA2
Summary: Will convert words from stdin to all caps, return ' ' for whitespace, and ignore everything else.
*/

#include "index.h"

int myGetChar() {

	int c;

	while (1==1) {
	
		c = getchar();

		// if c = EOF return EOF
		if (c == EOF) {
			return EOF;
		}
		// if c = ' ' return ' '
		if (isspace(c)) {
			return ' ';
		}
		// if c is a valid char, return the uppercase version
		if (isalpha(c)) {
			return toupper(c);
		}
	}
}
