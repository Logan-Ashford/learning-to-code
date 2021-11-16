// Example #1 from ch6 of book

//Pairs three kids with favorite superhero

#include <stdio.h>
#include <string.h>

main()
{

char Kid1[12];
// Kid1 can hold up to a 11 letter name
// Kid 2 will be 7 characters (up to 6 letters)
char Kid2[ ] = "Maddie";
//Kid 3 is also 7 characters, but defined specifically
char Kid3[7] = "Andrew";
// Hero1 will be 7 characters
char Hero1[] = "Batman";
// Hero 2 will have extra room just in case
char Hero2[34] = "Spiderman";
char Hero3[25];

    Kid1[0] = 'K';
    Kid1[1] = 'a';
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0';

    strcpy(Hero3, "The Incredible Hulk");

    printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
    printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
    printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);

    return 0;
}
