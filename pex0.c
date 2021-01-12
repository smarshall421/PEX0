/** pex00Main.c
* ===========================================================
* Name: Shane Marshall, 11 Jan 21
* Section: T5
* Project: PEX 00 
* Purpose: This PEX is supposed to be a pretest on the skills
            of the programmer
* Documentation: NONE 
* =========================================================== */ 

#include "pex0functs.h"

int main (int argc, char *argv[]) {

    char inputSentence [80];

    fgets(inputSentence, 80, stdin);

    parseIt(inputSentence);

    return 0;
}