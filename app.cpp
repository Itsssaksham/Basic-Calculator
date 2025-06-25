#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int currVal = 0;
    bool isFirst = true;

    cout << "+ = 1" << endl
         << "- = 2" << endl
         << "* = 3" << endl
         << "/ = 4" << endl
         << "% = 5" << endl
         << "clear = 7" << endl
         << "end = 6" << endl;

    while (true) {
        if (isFirst) {
            cout << "\nEnter the first value: ";
            cin >> currVal;
            isFirst = false;
        }

        cout << "\nCurrent value: " << currVal << endl;
        cout << "Enter operation number: ";
        cin >> n;

        if (n == 6) {
            cout << "Calculator Ended." << endl;
            break;
        } else if (n == 7) {
            cout << "Cleared!" << endl;
            currVal = 0;
            isFirst = true;
            continue;
        }

        int nextVal;
        cout << "Enter the next value: ";
        cin >> nextVal;

        switch (n) {
            case 1:
                currVal += nextVal;
                break;
            case 2:
                currVal -= nextVal;
                break;
            case 3:
                currVal *= nextVal;
                break;
            case 4:
                if (nextVal != 0)
                    currVal /= nextVal;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                if (nextVal != 0)
                    currVal %= nextVal;
                else
                    cout << "Error: Modulo by zero!" << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        cout << "Updated value: " << currVal << endl;
    }

    return 0;
}
