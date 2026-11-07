/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int number;
    int smallest;
    int largest;
    bool hasData = false;

    cout << "Enter integers (-99 to stop): ";

    while (cin >> number && number != -99) {
        if (!hasData) {
            // Initialize both values using the first actual number.
            smallest = number;
            largest = number;
            hasData = true;
        } else {
            if (number < smallest) {
                smallest = number;
            }

            if (number > largest) {
                largest = number;
            }
        }
    }

    if (!hasData) {
        cout << "No data values were entered." << endl;
    } else {
        cout << "Smallest value: " << smallest << endl;
        cout << "Largest value: " << largest << endl;
    }

    return 0;
}
