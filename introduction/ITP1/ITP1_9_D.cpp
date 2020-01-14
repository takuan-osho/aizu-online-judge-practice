#include <iostream>
using namespace std;

void doReplace(int a, int b, string &p, string &str) {
    str.replace(a, b - a + 1, p);
}

void doReverse(int a, int b, string &str) {
    string tmp = str.substr(a, b - a + 1);
    int n = tmp.size();
    for (int i = 0; i < n; i++) {
        str[i + a] = tmp[n - i - 1];
    }
}

void doPrint(int a, int b, string str) {
    cout << str.substr(a, b - a + 1) << endl;
}

int main(int argc, char const *argv[]) {
    string str;
    cin >> str;

    int q;
    cin >> q;

    string imperativeWord;
    int a, b;
    string p;

    for (int i = 0; i < q; i++) {
        cin >> imperativeWord;
        if (imperativeWord == "replace") {
            cin >> a >> b >> p;
            doReplace(a, b, p, str);
        } else if (imperativeWord == "reverse") {
            cin >> a >> b;
            doReverse(a, b, str);
        } else {
            // print
            cin >> a >> b;
            doPrint(a, b, str);
        }
    }
}
