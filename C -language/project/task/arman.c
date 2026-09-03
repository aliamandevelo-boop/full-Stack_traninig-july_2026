#include <stdio.h>

int main()
{
    int choice;

    char name[30];
    int hindi, english, maths, science;
    int total;
    float percentage;


    printf("1. Student Result");
    printf("\n2. Exit");

    printf("\nEnter Choice: ");
    scanf("%d",&choice);



    switch(choice)
    {

    case 1:

        printf("\nEnter Student Name: ");
        scanf("%s",name);


        printf("Enter Hindi Marks: ");
        scanf("%d",&hindi);


        printf("Enter English Marks: ");
        scanf("%d",&english);


        printf("Enter Maths Marks: ");
        scanf("%d",&maths);


        printf("Enter Science Marks: ");
        scanf("%d",&science);



        total = hindi + english + maths + science;


        percentage = total / 4.0;



        printf("\nStudent Name: %s",name);

        printf("\nTotal Marks: %d",total);

        printf("\nPercentage: %.2f",percentage);



        if(percentage >= 80)
        {
            printf("\nVery Good");
        }

        else if(percentage >= 40)
        {
            printf("\nGood");
        }

        else
        {
            printf("\nFail");
        }


        break;



    case 2:

        printf("\nExit");

        break;



    default:

        printf("\nWrong Choice");

    }

 
        
    return 0;
}