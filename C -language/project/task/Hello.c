#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 10000.0, amount;

    printf("==============================\n");
    printf("       WELCOME TO ATM\n");
    printf("==============================\n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) {

        printf("\nLogin Successful!\n");

        printf("\n1. Check Balance");
        printf("\n2. Withdraw Money");
        printf("\n3. Deposit Money");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nYour Balance = %.2f", balance);
        }

        else if (choice == 2) {
            printf("\nEnter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance = balance - amount;
                printf("\nWithdrawal Successful!");
                printf("\nRemaining Balance = %.2f", balance);
            }
            else {
                printf("\nInsufficient Balance!");
            }
        }

        else if (choice == 3) {
            printf("\nEnter amount to deposit: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("\nDeposit Successful!");
            printf("\nUpdated Balance = %.2f", balance);
        }

        else if (choice == 4) {
            printf("\nThank you for using ATM!");
        }

        else {
            printf("\nInvalid Choice!");
        }
    }

    else {
        printf("\nWrong PIN!");
    }

    return 0;
}