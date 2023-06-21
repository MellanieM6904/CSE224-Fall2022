/*
Name: Mellanie Martin
Class: CSE 224 - Programming Tools
Date: 10/24/22
Assignment: PA2
Summary: Will open keywords.txt, and enter the words in that file into a keyWords array, and convert each word to all caps. The file will then close. 
*/

#include "index.h" 

int readKeyWords(char *filename, char keyWords[100][32]) {

	int numwords = 0;
	char input[120];

	FILE *fp = fopen(filename, "r");
	if (fp == NULL) { // file cannot be opened
		return -1;
	}

	while (fgets(input, 100, fp) != NULL) {
		for (int i = 0; i < strlen(input); i++) {
			input[i] = toupper(input[i]);
		}

		input[strlen(input)-1] = '\0';

		strcpy(keyWords[numwords], input);
		numwords ++;
	}
	
	fclose(fp);
	return numwords;
}
