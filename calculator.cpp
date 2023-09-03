// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    char op;
    float num1, num2;
 
    // It allows user to enter operator
    // i.e. +, -, *, /
    cout<<"Enter an operator from (+,-,*,/)"<<endl;
    cout<<"Enter the Operator --> ";
    cin >> op;
 
    // It allow user to enter the operands
    cout<<"Enter the Operand1 --> ";
    cin >> num1;
    cout<<"Enter the Operand2 --> ";
    cin >> num2;
 
    // Switch statement begins
    switch (op)
    {       
        // If user enter +
        case '+':
            cout<<"Sum of the operands is --> ";
            cout << num1 + num2;
            break;
         
        // If user enter -
        case '-':
              cout<<"Difference of the operands is --> ";
            cout << num1 - num2;
            break;
         
        // If user enter *
        case '*':
              cout<<"Product of the operands is --> ";
            cout << num1 * num2;
            break;
         
        // If user enter /
        case '/':
            cout<<"Division of the operands gives --> ";
            cout << num1 / num2;
            break;
         
        // If the operator is other than +, -, * or /,
        // error message will display
        default:
            cout << "Error! operator is not correct";
            
    }
    // switch statement ends
 
    return 0;
}