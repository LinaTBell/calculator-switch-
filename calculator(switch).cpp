#include <iostream>

using namespace std;


int main() {
    double num1, num2, result;
    char op;

    // Input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    // Calculation and output
    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "Cannot divide by zero!" << endl;
            return 1; // Exit with an error code
        }
        break;
    default:
        cout << "Invalid operator. Supported operators are +, -, *, /." << endl;
        return 1; // Exit with an error code
    }

    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;
}
