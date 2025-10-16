#include <stdio.h>
#include <stdlib.h>

int main() {

    float balance = 500;
    int choice;
    float amount;

    do {
        system("cls");

        printf("\n+=+=+ The _t.rickstxr's Bank (ATM Program) +=+=+\n");
        printf("\n[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("\n===================================\n");
        printf("Please enter your choice: ");

        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("\n|+=+| = BALANCE INQUIRY = |+=+|\n");
                printf("Your current account balance is: P%.2f.\n", balance);
                break;

            case 2:
                printf("\n|+=+| = DEPOSIT = |+=+|\n");
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance = balance + amount;
                    printf("Deposit successful!\n");
                    printf("Your new balance is P%.2f.\n", balance);
                } else {
                    printf("Invalid amount! Please enter a positive value.");
                }
                break;

            case 3:
                printf("\n|+=+| = WITHDRAW = |+=+|\n");
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount! Please enter a positive value.\n");
            } else if ((balance - amount) < 100.00) {
                printf("Withdrawal denied! You MUST maintain at least P100.00 in your account.\n");
            } else {
                balance = balance - amount;
                printf("\nWithdrawal successful!\n");
                printf("Your remaining balance is: P%.2f.\n", balance);
            }
            break;

            case 4:
                printf("\nThank you for backing with _t.rickstxr's Bank. Adios! :>\n");
                break;

            default:
                printf("\nInvalid choice! Please select an option from 1 to 4.\n");
                break;
        }

        if (choice !=4) {
            printf("\nPlease enter to continue...");
            while (getchar() != '\n');
            getchar();

        }

    } while (choice !=4);

    return 0;
}

