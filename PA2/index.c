/*
Name: Mellanie Martin
Class: CSE 224 - Programming Tools
Date: 10/21/22
Assignment: PA2
Summary: main file for PA2 that links the functions together
*/
#include "index.h"

void main () {

	int count[100] = {0};
	char keyWords[100][32];
	char words[100];
	int numWords = readKeyWords("keywords.txt", keyWords);

	if (numWords == -1) {
		printf("Error! Keywords file cannot be opened.\n");
		return;
	}

	while (getWord(words) != NULL) {
		tally(words, keyWords, count, numWords);
	}
	
	displayResults(keyWords,count,numWords);
}
