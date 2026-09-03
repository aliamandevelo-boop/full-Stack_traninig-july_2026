
#include <stdio.h>

int main()
{
    char name[2][20];
    int marks[2][4];

    for(int i = 0; i < 2; i++)
    {
        printf("Enter Student Name: ");
        scanf("%s", name[i]);

        printf("Enter Hindi Marks: ");
        scanf("%d", &marks[i][0]);

        printf("Enter English Marks: "); 
        scanf("%d", &marks[i][1]);

        printf("Enter Maths Marks: ");
        scanf("%d", &marks[i][2]);

        printf("Enter Science Marks: ");
        scanf("%d", &marks[i][3]);
    }

    printf("\nStudent Report\n");

    for(int i = 0; i < 2; i++)
    {
        printf("\nName: %s\n", name[i]);
        printf("Hindi   = %d\n", marks[i][0]);
        printf("English = %d\n", marks[i][1]);
        printf("Maths   = %d\n", marks[i][2]);
        printf("Science = %d\n", marks[i][3]);
    }

    return 0;
} 