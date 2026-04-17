#include <iostream>
using namespace std;

double calculate(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        default: return 0;
    }
}

int main() {
    double a, b;
    char op;

    cout << "=== Smart Calculator ===" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    double result = calculate(a, b, op);

    if(op == '/' && b == 0) {
        cout << "Error: Division by zero!" << endl;
    } else {
        cout << "Result = " << result << endl;
    }

    return 0;
}
