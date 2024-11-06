#include <iostream>

using namespace std;

int main(void) {

    char op;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    float num1;
    float num2;
    float result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
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
    }

    return 0;
}
