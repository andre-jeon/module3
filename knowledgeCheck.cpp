/* This program reads two integers from the user and prints their sum */

#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Please enter an integer value:";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its square is " << i * i << ".\n";
    return 0;
}