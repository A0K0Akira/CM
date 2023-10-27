#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;

    if (num1 < num2 && num2 < num3) {
        cout << "The numbers are in order." << endl;
    }
    else if (num1 > num2 && num2 > num3) {
        cout << "The numbers are in order." << endl;
    }
    else {
        cout << "The numbers are not in order." << endl;
    }

}