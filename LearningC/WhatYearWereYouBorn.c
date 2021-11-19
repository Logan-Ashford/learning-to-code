//Practice using if statements for data validation
//Ch11
//Asks for birth year, calculates age, and has some easter eggs if the year is in the future and/or a leap year

#include <stdio.h>
#define CURRENTYEAR 2021

main()
{
    int yearborn;
    int age;

    printf("Hi! What year were you born?\n");
    scanf(" %d", &yearborn);

    if (yearborn > CURRENTYEAR)
    {
        printf("Yeah, hi, so, that year hasn\'t happened yet my guy.\n");
        printf("Do you want to try again? What year were you born really?\n");
        scanf(" %d", &yearborn);
        if (yearborn > CURRENTYEAR)
        {
            printf("Ah, I see.\n");
            printf("Welcome time traveler\n");
        }
    }

    age = CURRENTYEAR - yearborn;
    printf("Nice!\n");
    printf("That means that, right now, you are %d years old!!!\n", age);
    printf("Anyhow");
    if ((yearborn % 4) == 0)
    {
        if (yearborn != 2000)
        {
            printf(" .... oh my god. You were born on a leap year....");
            if (yearborn > CURRENTYEAR)
            {
                printf(" assuming they still have leap years in the future?");
            }
            printf("\nAmazing.");
        }
    }
    printf("\nThat's it!");
    printf("\nBye!");

    return 0;
}
