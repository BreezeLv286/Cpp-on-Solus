#include <iostream>
#include <limits>
using namespace std;

int getMonth(int& month) {
    while (true) {
        cout << "Enter month number (1-12): ";

        if (cin >> month) {
            if (month >= 1 && month <= 12) {
                break;
            }
            cerr << "Invalid month. Please enter a value between 1 and 12.\n";
        } else {
            cerr << "Invalid input. Please enter a number, not text or symbols.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
return month;
}

int main() {
    int month;

    getMonth(month);

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "This month has 31 days.\n";
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "This month has 30 days.\n";
            break;

        case 2:  // February
            cout << "February has 28 days (29 in a leap year).\n";
            break;
    }

    return 0;
}
