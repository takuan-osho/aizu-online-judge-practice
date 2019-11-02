#include <iostream>
using namespace std;

int main() {
    int a, b, result;
    char op;

    while (true) {
        cin >> a >> op >> b;

        if (op == '?') {
            return 0;
        }

        switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            return -1;
        }

        cout << result << endl;
    }
}
