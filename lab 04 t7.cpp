#include <stdio.h>

int main()
{
    int policy, age;
    float claim, approved;

    printf("Enter policy status (1-Active, 0-Inactive): ");
    scanf("%d", &policy);

    printf("Enter vehicle age: ");
    scanf("%d", &age);

    printf("Enter claim amount: ");
    scanf("%f", &claim);

    if (policy == 0)
    {
        printf("Claim Rejected");
    }
    else if (age < 10 && claim <= 500000)
    {
        approved = claim;
        printf("Approved Claim Amount = Rs. %.2f", approved);
    }
    else if (age >= 10 && age <= 15)
    {
        approved = claim * 0.50;
        printf("Approved Claim Amount = Rs. %.2f", approved);
    }
    else
    {
        printf("Claim Rejected");
    }

    return 0;
}
