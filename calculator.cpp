#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /, %, ^): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
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
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 1;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 1;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            cout << "Error: Invalid operator.\n";
            return 1;
    }

    cout << "Result: " << result << "\n";

    return 0;
}
