//This is practice using header files and constants! :D
//Logan Ashford
//November 11th, 2021
//Talks about something Teddy just did a few minutes ago!

#include <stdio.h>
//PracticeHeader contains the constants CAT, AGE, and ACTIVITY
#include "PracticeHeader.h"

main()
{
    //Prints the cat's name, their age, and what they just did
    printf("\n%s, who is %d years old, just %s\n", CAT, AGE, ACTIVITY);

    return 0;
}
