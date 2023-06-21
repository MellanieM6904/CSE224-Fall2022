// header files
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// prototypes
int readKeyWords(char *filename, char keyWords[100][32]);
void tally(char *word, char keyWords[100][32], int count[100], int numWords);
char *getWord(char *word);
int myGetChar();
void displayResults(char keyWords[100][32], int count[100], int numWords);
