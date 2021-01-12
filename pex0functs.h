/** pex00Main.h
* ===========================================================
* Name: Shane Marshall, 11 Jan 21
* Section: T5
* Project: PEX 00 
* Purpose: This PEX is supposed to be a pretest on the skills
            of the programmer
* Documentation: NONE 
* =========================================================== */
#ifndef PEX00FUNCTS_H
#define PEX00FUNCTS_H
#include <stdlib.h>


/**
* @brief provide a description of what the function does; it’s intended purpose (not how it does it
    but what it is for)
* @param list each parameter and describe the use
* @return describe the return value (if any)
* @pre describe the preconditions: things that must be true before calling the function (e.g., 
    limits on ranges of input values, other functions that should be called first, etc.)
* @post describe the postconditions: what will change as a result of the function call, what
    will be true as a result of calling the method
*/


/** parseIt
* @brief this function takes in a string and does nothing with it
* @param string is the char array for the input parameter
* @return There is no return
* @pre the user must pass in a string
* @post this functions will have changed every occurance of ' ' to - and every 't' and 'T' to ' '
*/
void parseIt (char *string);

/** modifyIt
* @brief this function will take in a string and return a pointer to the string
* @param string is the character array for the passed in string
* @return will return a pointer to the string 
* @pre the user must pass in a string that is within the normal bounds
* @post the result will be a pointer without NULL
*/
char** modifyIt (char *string) {

    char **stringPtr = &string;

    return stringPtr;

}





#endif // PEX00FUNCTS_H