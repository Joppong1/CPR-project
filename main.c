#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function prototypes
void fundamentals(void);
void converting(void);
void manipulating(void);
void tokenizing (void);

int main(void) {
    // Call each module function in sequence
    fundamentals();
    converting();
    manipulating();
    tokenizing();

    return 0;
}
