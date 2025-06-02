#include <iostream>
using namespace std;

int main() {  
    //Initialising variables  
    int num1;
    int num2;
    int result;
    char operation;

    //Taking inputs
    cout << "Enter 1st Number: ";
    cin >> num1;

    cout << "Select Operation (+, -, *, /)";
    cin >> operation;

    cout << "Enter 2nd Number: ";
    cin >> num2;

    //Logic
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result;
        break;
    
    case '-':
        result = num1 - num2;
        cout << "Result: " << result;
        break;
    
    case '*':
        result = num1 * num2;
        cout << "Result: " << result;
        break;
    
    case '/':
        result = num1 / num2;
        cout << "Result: " << result;
        break;
    
    default:
        cout << "Enter valid arithmetic operator!";
        break;
    }

    return 0;
}
