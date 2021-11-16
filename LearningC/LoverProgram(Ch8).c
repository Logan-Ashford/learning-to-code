// Example program, ch 8
// Using scanf()

#include <stdio.h>

main()
{

    char lover[20];
    int month;
    int day;
    int year;
    float percentage;
    char answer[4];

    printf("Hello. Mind if I interrogate you?");
    printf("What is the name of your lover?\n");
    scanf(" %s", lover);

    printf("Oh yeah? That\'s your lover, huh? Well, if you love them so much...\n");
    printf("Then when\'s their birthday?!\n");
    printf("Enter as mm/dd/yy or this program will not work at all\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n ...");
    printf("\n ..interesting.");
    printf("\n Well, one last question then.");
    printf("\n What percentage do you love your lover?");
    printf("\n(Enter with two decimal points, like XX.XX)");
    scanf(" %f%", &percentage);

    printf("\n Ah, I see");
    printf("\n So your lover is %s, born on %d/%d/%d, and you love them %f%?", lover, month, day, year, percentage);

    scanf(" %s", answer);
    printf("\n(You answered %s)", answer);
    printf("\n Ah, okay then!");

    return (0);
}
