/* Write a single C++ statement or line that accomplishes each of the following: */
// Print the message "Enter two numbers". DONE

//Assign the product of variables b and c to variable a. DONE

/* State that a program performs a payroll calculation (i.e., use text that helps to document
a program) DONE */

// Input three integer values from the keyboard into integer variables a, b and c.


/* Write a statement (or comment) to accomplish each of the following (assume that using
declarations have been used for cin, cout and endl): DONE
a) Document that a program calculates the product of three integers. DONE
b) Declare the variables x, y, z and result to be of type int (in separate statements) and
initialize each to 0. DONE
c) Prompt the user to enter three integers. DONE
d) Read three integers from the keyboard and store them in the variables x, y and z.DONE
e) Compute the product of the three integers contained in variables x, y and z, and assign
the result to the variable result. DONE
f) Print "The product is " followed by the value of the variable result. DONE
g) Return a value from main indicating that the program terminated successfully. DONE
*/

/* Using the statements you wrote above, write a complete program that calculates
and displays the product of three integers. Add comments to the code where appropriate. 
[Note:You’ll need to write the necessary using declarations or directive.] */

#include <iostream>
using namespace std;

void c2fun();
void payRoll();

int main()
{

    c2fun();

    payRoll();

    return 1;
}

void c2fun() //function for first question
{
    int varB, varC, varA;
    cout << "Enter two numbers:" << endl;
    cout << "Number 1: ";
    cin >> varB; // prompt user to input value 1 and assign to varB
    cout << "Number 2: ";
    cin >> varC; // prompt user to input value 2 and assign to varC
    varA = varB + varC; // add varB and varC and assign it to varA
    cout << varA << endl; //output varA

}
void payRoll()  //program performs payroll calculation
{
int varX {0};
int varY {0};
int varZ {0};
int result;
    cout << "Enter three integers (with spaces in between each) "; //prompt user for input with correct syntax
    cin >> varX >> varY >> varZ; // have users input all three
    result = varX + varY + varZ; //calculate result
    cout << "\nThe product is " << result << endl;
}
