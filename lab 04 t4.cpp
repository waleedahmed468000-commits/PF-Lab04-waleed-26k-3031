#include <stdio.h>

int main()
{
    int membership, slot, fee, discount, finalfee;

    printf("Enter membership type (1-Student, 2-Regular, 3-Senior Citizen): ");
    scanf("%d", &membership);

    printf("Enter slot (1-Morning, 2-Evening): ");
    scanf("%d", &slot);

    switch(membership)
    {
        case 1:
            fee = 2000;
            break;

        case 2:
            fee = 3500;
            break;

        case 3:
            fee = 2500;
            break;

        default:
            printf("Invalid membership type");
            return 0;
    }

    switch(slot)
    {
        case 1:
            discount = fee * 0.15;
            break;

        case 2:
            discount = 0;
            break;

        default:
            printf("Invalid slot");
            return 0;
    }

    finalfee = fee - discount;

    printf("Final Monthly Fee = Rs. %d", finalfee);

    return 0;
}
