/*
Name: Mellanie Martin
Class: CSE 224 - Programming Tools
Date: 10/21/22
Assignment: PA2
Summary: Prints keywords and how many times they appeared in stdin.
*/

#include "index.h"

void displayResults(char keyWords[100][32], int count[100], int numWords) {
	int i;
	
	for (i = 0; i < numWords; i++ ) {
	printf("\n<%s> : <%d>\n", keyWords[i], count[i]);
	}
}
