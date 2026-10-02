#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to basic calculator !!!!" << endl;

    float n, m;
    char x;

    cout << "Enter the first number: ";
    cin >> n;

    cout << "Enter the second number: ";
    cin >> m;

    cout << "Enter the operation to perform (+, -, *, /): ";
    cin >> x;

    if (x == '+') {
        cout << "Result = " << n + m;
    }
    else if (x == '-') {
        cout << "Result = " << n - m;
    }
    else if (x == '*') {
        cout << "Result = " << n * m;
    }
    else if (x == '/') {
        cout << "Result = " << n / m;
    }
    else {
        cout << "Invalid operation";
    }

    return 0;
}