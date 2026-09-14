#include <stdio.h>

int main()
{
    int zone, speed;
    float fine;

    printf("Enter zone type (1-School, 2-Highway, 3-Residential): ");
    scanf("%d", &zone);

    printf("Enter driver's speed: ");
    scanf("%d", &speed);

    switch(zone)
    {
        case 1:
            if (speed <= 30)
            {
                printf("No violation. No fine.");
            }
            else
            {
                if (speed - 30 > 20)
                    fine = 2000;
                else
                    fine = 1000;

                printf("Fine = Rs. %.2f", fine);
            }
            break;

        case 2:
            if (speed <= 100)
            {
                printf("No violation. No fine.");
            }
            else
            {
                if (speed - 100 > 20)
                    fine = 2000;
                else
                    fine = 1000;

                printf("Fine = Rs. %.2f", fine);
            }
            break;

        case 3:
            if (speed <= 50)
            {
                printf("No violation. No fine.");
            }
            else
            {
                if (speed - 50 > 20)
                    fine = 2000;
                else
                    fine = 1000;

                printf("Fine = Rs. %.2f", fine);
            }
            break;

        default:
            printf("Invalid zone");
    }

    return 0;
}
