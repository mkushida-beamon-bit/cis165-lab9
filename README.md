## CIS 165 – Lab 9: Loops, Largest and Smallest Values
# Course Section: CIS-165-W099

# Initial Plan

The program will ask the user to enter a series of integers. The number -99 will be used as a sentinel to stop the loop and will not count as a data value.
I will use a while loop to read the numbers until -99 is entered. I will use variables to store the current number, the smallest number, the largest number, and a boolean variable to check whether any valid numbers were entered.
The first valid number will initialize both the smallest and largest variables. Each additional number will be compared with the current smallest and largest values. If a number is smaller or larger, the corresponding variable will be updated.
After the loop ends, the program will check whether any valid numbers were entered. If no numbers were entered, it will display a message saying no data values were entered. Otherwise, it will display the smallest and largest values.

# Compile and Run Instructions

This program uses C++17.
To compile using g++, enter:
bash
g++ -std=c++17 -Wall -Wextra min_max.cpp -o min_max

To run the program, enter:
bash
./min_max

The program can also be run using OnlineGDB:
Open OnlineGDB.
Select C++17.
Paste the code from min_max.cpp into the editor.
Enter the test numbers in the Standard Input section.
Click Run.

# Test Results
3. Test Results

The following tests check whether the program correctly identifies the smallest and largest values for different inputs.

Test	Input	Expected Result	Actual Result	Match
1. Positive Numbers	8, 3, 12, -99	Smallest: 3; Largest: 12	Smallest: 3; Largest: 12	Yes, after verification
2. Negative Numbers	-8, -3, -12, -99	Smallest: -12; Largest: -3	Smallest: -12; Largest: -3	Yes, after verification
3. Single Number	5, -99	Smallest: 5; Largest: 5	Smallest: 5; Largest: 5	Yes, after verification
4. Zero Values	0, 0, -99	Smallest: 0; Largest: 0	Smallest: 0; Largest: 0	Yes, after verification
5. No Data	-99	No data values were entered.	No data values were entered.	Yes, after verification
6. Additional Test	15, -20, 7, 30, -5, -99	Smallest: -20; Largest: 30	Smallest: -20; Largest: 30	Yes, after verification

Additional Test Explanation
I chose the additional test to check whether the program can handle a longer series containing both positive and negative numbers. It also checks whether the smallest and largest values update correctly as more numbers are entered.

## Code Explanation Questions
# Trace one series through the loop, showing when the extrema are initialized and updated.

For the input 8, 3, 12, -99, the first number, 8, initializes both the smallest and largest variables. The next number, 3, is smaller than the current smallest, so the smallest changes to 3. The next number, 12, is larger than the current largest, so the largest changes to 12. When -99 is entered, the loop stops.

# How does your code keep -99 out of the calculations?

The while loop checks whether the entered number is different from -99 before processing it. When -99 is entered, the condition becomes false and the loop stops. This prevents -99 from being included in the smallest and largest calculations.

# Why is initializing both extrema to zero incorrect for some series?

Initializing both values to zero can cause incorrect answers because zero might not be included in the input. If all entered numbers are positive, zero could incorrectly remain the smallest value. If all entered numbers are negative, zero could incorrectly remain the largest value.

# How do you distinguish an empty series from a series containing zero?

The program uses a boolean variable called hasData. It starts as false and becomes true when the first valid number is entered. If the first number is zero, hasData becomes true. If the user enters -99 immediately, hasData stays false, meaning no valid numbers were entered.

# Final Compilation and Verification

Final compilation: The final program compiled successfully using C++17.

Final run: The final program ran successfully, and the test results matched the expected results.

Temporary test changes restored: No temporary test changes were made, so there was nothing to restore.
