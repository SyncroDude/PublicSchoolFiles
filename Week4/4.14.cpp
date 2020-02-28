#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int accNum{0};
    double bBalance{0}, totCharge{0}, totCredit{0}, creditLim{0},Balance{0};
    cout << fixed << setprecision(2);
    cout << "Input account number (or input -1 to quit): ";
    cin >> accNum;
    while (accNum != -1) {
            cout << "Enter beginning balance:";
            cin >> bBalance;
            cout << "Enter total charges:";
            cin >> totCharge;
            cout << "Enter total credits:";
            cin >> totCredit;
            cout << "Enter Credit Limit:";
            cin >> creditLim;
            Balance = bBalance + totCharge - totCredit;
            cout << "New Balance is: " << Balance << endl;
            if (Balance > creditLim) {
                cout << "Account:\t" << accNum << endl;
                cout << "Credit limit:\t" << creditLim << endl;
                cout << "Balance:\t" << Balance << endl;
                cout << "Credit Limit Exceeded" << endl;

            }
            cout << "\nInput account number (or input -1 to quit): ";
            cin >> accNum;
    }
    return 0;
}