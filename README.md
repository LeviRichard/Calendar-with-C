# Calendar Generator

This C program is designed to generate and display a calendar for a specified year. It incorporates functions to calculate the day of the week for January 1st of the given year and adjusts February's days based on whether it's a leap year. Upon execution, the program prompts the user to input a year and proceeds to present the calendar for each month of that year.

## How to Use

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Enter the desired year when prompted.
4. Press Enter to view the calendar for each month.
5. Press any key to navigate to the next month.
6. After viewing all months, press any key to continue or exit.
7. If you want to input another year, type 'Y' or 'y' when prompted; type 'N' or 'n' to exit.

## Functions

- get_first_day(int year): Calculates the day of the week for January 1st of the given year.
- main(): The main function that drives the program's logic, including user input, calendar generation, and navigation.

## Dependencies

- stdio.h: Standard input/output functions.
- stdlib.h: General utilities library for memory allocation, system calls, etc.
- stdbool.h: Library for boolean data type and values.

## Further Improvements

- Add error handling for invalid input (e.g., non-numeric year).
- Enhance the user interface with clearer instructions and prompts.

Feel free to modify and enhance this code according to your needs!