#include <stdio.h>

int main()
{
    int accounttype, balance, interest;

    printf("Enter account type (1-Savings, 2-Current, 3-Fixed Deposit): ");
    scanf("%d", &accounttype);

    printf("Enter account balance: ");
    scanf("%d", &balance);

    switch(accounttype)
    {
        case 1:
            if (balance > 100000)
            {
                interest = balance * 0.04;
            }
            else
            {
                interest = balance * 0.02;
            }
            break;

        case 2:
            interest = 0;
            break;

        case 3:
            interest = balance * 0.08;
            break;

        default:
            printf("Invalid account type");
            return 0;
    }

    printf("Annual Interest Earned = Rs. %d", interest);

    return 0;
}
