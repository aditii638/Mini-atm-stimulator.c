
#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    printf("===== MINI ATM =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Your balance is Rs. %.2f\n", balance);
    }
    else if (choice == 2)
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);

        if (amount > 0)
        {
            balance = balance + amount;
            printf("Deposit successful!\n");
            printf("New balance: Rs. %.2f\n", balance);
        }
        else
        {
            printf("Invalid amount!\n");
        }
    }
    else if (choice == 3)
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        if (amount <= 0)
        {
            printf("Invalid amount!\n");
        }
        else if (amount > balance)
        {
            printf("Insufficient balance!\n");
        }
        else
        {
            balance = balance - amount;
            printf("Withdrawal successful!\n");
            printf("Remaining balance: Rs. %.2f\n", balance);
        }
    }
    else if (choice == 4)
    {
        printf("Thank you for using Mini ATM!\n");
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}