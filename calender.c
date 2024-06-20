#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to calculate the day of the week for January 1st of the given year
int get_first_day(int year)
{
    int d;
    d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return d;
}

int main()
{
    bool choice = true;
    char m;

    while (choice)
    {
        system("cls"); // Clear the console screen
        system("color 0A"); // Set console text color

        int year, weekDay = 0, startingDay, daysInMonth;
        printf("Enter Year: ");
        scanf("%d", &year);
        printf("Press Enter");
        getch();
        system("cls"); // Clear the console screen

        

        char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        int monthDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Adjust February's days based on whether it's a leap year
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            monthDay[1] = 29;
        }

        startingDay = get_first_day(year); // Calculate the starting day of the year

        for (int month = 0; month < 12; month++)
        {
            daysInMonth = monthDay[month];
            printf("\n              YEAR %d                      ",year);
            printf("\n\n---------------%s----------------------\n", months[month]);

           
            printf("\n  Sun  Mon  Tue  Wed   Thu  Fri   Sat\n");

            // Print spaces for days before the starting day
            for (weekDay = 0; weekDay < startingDay; weekDay++)
            {
                printf("     ");
            }

            // Print days of the month
            for (int day = 1; day <= daysInMonth; day++)
            {
                printf("%5d", day);
                if (++weekDay > 6)
                {
                    printf("\n");
                    weekDay = 0;
                }
                startingDay = weekDay;
            }
            printf("\n\nPlease Enter a key to view next month........");
            getch();//Wait for user input
            system("cls");// Clear the console screen
            


            
            
        }
        printf("\n\nPlease Enter a key to continue........");
        getch(); // Wait for user input

            
        // Ask if the user wants to enter another year
        system("cls");// Clear the console screen
        printf("\nDo you want to enter another year (Y or N): ");
        scanf(" %c", &m);
        if (m == 'Y' || m == 'y')
        {
            choice = true;
        }
        else if (m == 'N' || m == 'n')
        {
            choice = false;
        }
    }

    return 0;
}
