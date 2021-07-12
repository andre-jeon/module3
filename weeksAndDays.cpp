/*
write a program that reads from the user the number of days they traveled. 
The program will then print their traveling time in the format of full weeks and additional days.

Example:
Please enter number of days you traveled:
19
19 days are 2 weeks and 5 days.
*/

#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7; // when naming the const, name it all uppercase with separated by underscores

int main() {
    int daysTraveled;
    int fullWeeks, remainingDays;

    cout << "Please enter number of days you traveled:" << endl; // displaying the text to the user
    cin >> daysTraveled; // user inputing the daysTraveled value

    fullWeeks = daysTraveled / DAYS_IN_A_WEEK; // divide the days traveled to check how many full weeks
    remainingDays = daysTraveled % DAYS_IN_A_WEEK; // remaining days are equal to the remainder

    cout << daysTraveled << " days are " << fullWeeks << " weeks and " << remainingDays << " days." << endl;

    return 0;
}