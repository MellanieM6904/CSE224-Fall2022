/*
Name: Mellanie Martin
Class: CSE 224 - Programming Tools
Date Due: September 30, 2022
Assignment: PA1 - stick game
Synopsis: Stick picking game that the user plays against the computer, whoever takes the last stick wins. Utilizes command line arguments (referred to as 'cla' in future comments).
*/

#include <stdio.h>

// add rules page (with play command?)

void main(int argc, char **argv) {
	int i; // # of sticks from cla
	int t = 0; // # of invalid inputs
	int ps; // # of sticks player wants to take
	int cs; // # of sticks computer takes
	char tmp[120];
	char xtr[120];

	printf("\nGAMEPLAY:\n");
	printf("This game is played against the computer; the game starts with 21\n sticks by default, or however many sticks that are specified in the command line. In\n each turn, you will take 1 to 3 sticks, and then the computer will also take 1 to 3\n sticks. If you take the last stick, you win - If the computer takes the last stick,\n the computer wins.");
	printf("\nRULES:\n");
	printf("- Command line argument MUST be a positive integer and CANNOT be 0.\n- When asked how many sticks to take, ONLY enter 1, 2, or 3.\n- If illegal moves are made twice, the game will quit.\n- Illegal entries include;\n    - Just hitting enter\n    - Entering anything that is not an integer from 1 to 3\n- Have fun!!\n\n");

	if (argc >  2) { // check there is only 2 arguments; filename and int
		printf("INVALID ARGUMENT\n");
		return;
	}

	char extra[120];
	if (argc > 1) { // if 2 cla, i = argv[1]
		int returnValue = sscanf(argv[1], "%d%s", &i, extra);
		if (returnValue != 1) { // check that argument is a valid int
			printf("INVALID ARGUMENT\n");
			return;
		}
	} else { // if only 1 cla, i = 21 by default
		i = 21;
	}
	
	
	if (i < 1) { // check if command line argument is greater than 0
		printf("INVALID ARGUMENT\n");
		return;
	}
	
	printf("Number of sticks:\n");
	for (int x = i; x > 0; --x) { // prints # of sticks given in cla
		printf("|");
	}

	while (1 == 1) { // infinite loop to loop gameplay; broken with break statements

	// player turn handling
	int waiting = 1; // = 0 when player inputs a proper input
	printf("(%d)\n", i); // prints numerical value of sticks
	printf("Player, you go first; how many sticks would you like to take?\n1, 2, or 3: ");
	
	while (waiting) {
		fgets(tmp, 120, stdin);
		int result = sscanf(tmp, "%d%s", &ps, xtr);
		if (result == 1 && ps > 0 && ps < 4) { // checks that result = 1 AND ps is not negative, greater than 3, or 0
			waiting = 0;
			i -= ps; 
			t = 0;
		} else {
		if (t > 0) { // checks if player made 2 incorrect inputs
			printf("Looks like you can't follow the rules :(\n");
			return; // exits program if 2 incorrect inputs have occurred
		}
		printf("Invalid input. Try again;\n    How many sticks would you like to take? 1, 2, or 3: ");
		t += 1;
		}
	}

	printf("Remaining number of sticks:\n");
	for (int x = i; x > 0; --x) { // print # of remaining sticks after player's turn
		printf("|");
	}
	

	if (i < 1) { // player win
		printf("You win!...somehow.\n");
		break;
	}

	// computer turn handling
	printf("(%d)\n", i);
	printf("\nComputer's turn:\n");
	cs = i%4; // holds # of sticks computer wants to take
	if (cs == 0) { // remainder = 0
	printf("Computer took 1 stick.\n");
	i -= 1;
	} else { // remainder is not 0
	printf("Computer took %d sticks.\n", cs);
	i -= cs;
	}

	printf("Number of sticks:\n");
        for (int x = i; x > 0; --x) { // prints # of sticks given in cla
                printf("|");
        }

	if (i < 1) { // computer win
		printf("Computer wins!\n");
		break;
	}

        printf("(%d)\n", i); // prints numerical value of sticks
	
}
}
