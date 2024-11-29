// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS // This disable certain security warnings that the compiler may give
#define BUFFER_SIZE 80 // This is defining a constant number so that we don't have to deal with magic numbers
#include "converting.h" //This is including our custom header file with 

// V1
void converting (void) {
printf ("*** start of Converting Strings to int Demo ***\n");

char intString [BUFFER_SIZE]; //This is declaring a char variable for a string with 80 characters maximum
int intNumber; //This is where we will store our converted number string into number int
do { // A do while loop is alays necessary when we have to ask at least one time for the user for input

printf ("Type an int numeric string (q - to quit):\n");
fgets (intString, BUFFER_SIZE, stdin); // that is a different way of getting user's input, in IPC we usually use scanf
intString [strlen (intString) - 1] = '\0'; // strlen is a function inside the string.h heather file, it is capable of given the length of a string. Aparantly, what this line is doing is eliminating a bunch of white space at the end of our int string variable, if there is any.
if (strcmp (intString, "q") != 0) { //strcmp is a function inside the string.h heather file, it compare two string, so in the case of this line it is checking if the user didn't press 'q', because that the command to stop our function
    intNumber = atoi (intString); // atoi is a function inside the stdlib.h heather file, that efectivly what is turning a string of numbers into real numbers
    printf("Converted number is %d\n", intNumber);

}

} while (strcmp(intString, "q") != 0); //This while keep the loop going as long as the user don't press q to stop
printf ("*** End of Converting Strings to int Demo ***\n\n");
} 