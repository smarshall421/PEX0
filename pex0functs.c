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

/** parseIt
* @brief this function takes in a string and does nothing with it
* @param string is the char array for the input parameter
* @return There is no return
* @pre the user must pass in a string
* @post this functions will have changed every occurance of ' ' to - and every 't' and 'T' to ' '
*/
void parseIt(char *string)
{

    int length = length(string);

    for (int i = 0; i < length; i++)
    {

        if (string[i] == ' ')
        {

            string[i] = '-';
        }

        else if (string[i] == 't')
        {

            string[i] == ' ';
        }

        else if (string[i] == 'T')
        {

            string[i] == ' ';
        }
    }
}

/** modifyIt
* @brief this function will take in a string and return a pointer to the string
* @param string is the character array for the passed in string
* @return will return a pointer to the string 
* @pre the user must pass in a string that is within the normal bounds
* @post the result will be a pointer without NULL
*/
char **modifyIt(char *string)
{

    char **stringPtr = &string;

    return stringPtr;
}