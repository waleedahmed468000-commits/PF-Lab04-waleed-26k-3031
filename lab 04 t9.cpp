#include <stdio.h>

int main()
{
    float bill, discount, finalbill;
    int hour, member;

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    printf("Enter hour (15 to 17): ");
    scanf("%d", &hour);

    printf("Are you a member? (1-Yes, 0-No): ");
    scanf("%d", &member);

    discount = 0;

    if (hour >= 15 && hour <= 17)
    {
        discount = discount + 20;
    }

    if (member == 1)
    {
        discount = discount + 10;
    }

    if (discount > 25)
    {
        discount = 25;
    }

    finalbill = bill - (bill * discount / 100);

    printf("Total Discount = %.2f%%\n", discount);
    printf("Final Payable Bill = Rs. %.2f", finalbill);

    return 0;
}
