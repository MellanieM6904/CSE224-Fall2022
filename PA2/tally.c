/* 
Name: Mellanie Martin
Class: CSE 224 - Programming Tools
Date: 10/24/22
Assignment: PA2
Summary: Will compare words taken from run-time argument with the words in the keyWords array. Following that, it will increment the count variable associated with the respective word if a commonality is found. 
*/

// use strcmp

#include "index.h"

void tally(char *word, char keyWords[100][32], int count[100], int numWords) {
	
	int i;
	for (i = 0; i < numWords; i++) {
		if (strcmp(keyWords[i], word) == 0) {
			++count[i];
		}
	}
	return;
}
