#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double sales, commission, salary;
    cout << fixed << setprecision(2);
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;
    while (sales != -1){
        commission = 0.09 * sales;
        salary = 200.00 + commission;
        cout << "Salary is: $" << salary << endl;
        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> sales;
    }
    return 0;
}