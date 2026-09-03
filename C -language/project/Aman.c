#include <stdio.h>

int main()
{
    int marks;

    printf("Please enter first value: ");
    scanf("%d", &marks);

    if (marks >= 60)
    {
        printf("You Passed with  First Division!");
    }
    else if (marks >= 45 && marks < 60)
    {
        printf("You Passed with Second Division!");
    }
    else if (marks >= 33 && marks < 45)
    {
        printf("You Passed with Third Division!");
    }
    else
    {
       printf ("you failed !");
    }

    return 0;
}