#include <iostream>
using namespace std;
int main() {

    //2.16

    float var1, var2;
    cout << "input two numbers (separated with spaces) ";
    cin >> var1 >> var2;
    cout << var1+var2 << endl << var1*var2 << endl << var1-var2 << endl << var1/var2 << endl;

    //2.17

    cout << "Welcome to C++ programing" << endl;
    cout << "Welcome " << "to " << "C++ " << "programing\n";
    cout << "Welcome to ";
    cout << "C++ programing\n";

    //2.18

    int varA, varB;
    cout << "input two numbers (separated with spaces) ";
    cin >> varA >> varB;
    if (varA == varB)
    {
        cout << "Those values are equal!\n";
    }
    else if (varA>varB) {
        cout << "These numbers are not equal. " << varB << " is smaller than " << varA;
    }
    else{
        cout << "These numbers are not equal. " << varA << " is smaller than " << varB;
    }

    //2.19
/*
    int varX, varY, varZ;
    cout << "input three different numbers (separated with spaces) ";
    cin >> varX, varY, varZ;
    int sum1 = varX + varY + varZ;
    int avg = (varX + varY + varZ)/3;
    int multi = varX * varY * varZ;
    cout << "\nSum is " << sum1 << endl;
    cout << "Average is " << avg << endl;
    cout << "Product is " << multi << endl;
    */
    //2.20



    //2.21
    cout << "   CCC  +      +  \n  C     +      +  \n C    +++++  +++++\n  C     +      +  \n   CCC  +      +  \n";



    return 0;
}