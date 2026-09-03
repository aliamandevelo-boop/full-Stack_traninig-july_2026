#include <stdio.h>

int main()
{
    int pin = 1234;
    int userPin;
    int count = 0;

    while(count < 3)
    {
        printf("Enter ATM PIN: ");
        scanf("%d", &userPin);

        if(userPin == pin)
        {
            printf("\nWelcome to ATM!\n");

            int choice;
            float balance = 10000, amount;

            do
            {
                printf("\n===== ATM MENU =====\n");
                printf("1. Check Balance\n");
                printf("2. Deposit Money\n");
                printf("3. Withdraw Money\n");
                printf("4. Exit\n");

                printf("Enter your choice: ");
                scanf("%d", &choice);
                

                switch(choice)
                {
                    case 1:
                        printf("Balance: %.2f Rs\n", balance);
                        break;

                    case 2:
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount); 

                        balance += amount;

                        printf("Deposit Successful!\n");
                        printf("New Balance: %.2f Rs\n", balance);
                        break;

                        

                    case 3:
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);

                        if(amount <= balance)
                        {
                            balance -= amount;
                            printf("Please collect your cash.\n");
                            printf("Remaining Balance: %.2f Rs\n", balance);
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }
                        break;

                    case 4:
                        printf("Thank You For Using ATM.\n");
                        break;

                    default:
                        printf("Invalid Choice!\n");
                }

            } while(choice != 4);

            return 0;
        }
        else
        {
            count++;
            printf("Wrong PIN! Attempts Left: %d\n", 3 - count);
        }
    }

    printf("\nATM Card Blocked! Contact Bank.\n");

    return 0;
}  