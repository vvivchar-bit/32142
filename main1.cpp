#include <iostream>
using namespace std;

int main() {
    double num;

    cout << "Enter any number: ";
    cin >> num;

    if (num < 10) {
        cout << "The number is less than 10." << endl;
    } else if (num == 10) {
        cout << "The number is equal to 10." << endl;
    } else {
        cout << "The number is greater than 10." << endl;
    }

    return 0;
}

