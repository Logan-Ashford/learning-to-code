// Let's practice variables!
// Chapter 5, example 1

#include <stdio.h>

main()
{
    // Set up variables at beginning of program!
    int number_of_cakes;
    int number_of_burgers;
    char firstinitial, lastinitial;
    float cost;

    // Define variables!
    firstinitial = 'L';
    lastinitial = 'A',

    number_of_cakes = 2;
    number_of_burgers = 3;
    cost = 2.85;
    printf("%c%c needs %d cakes, and would love %d burgers!\n", firstinitial, lastinitial, number_of_cakes, number_of_burgers);
    printf("That means he MUST pay $%.2f\n\n", cost*number_of_cakes + cost*number_of_burgers);

    return 0;

}
