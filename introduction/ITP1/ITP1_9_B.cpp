#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    string str;
    int m;
    while (cin >> str) {
        if (str == "-") {
            break;
        }

        int num;
        cin >> m;
        string str1, str2;
        for (int i = 0; i < m; i++) {
            cin >> num;
            str1 = str.substr(0, num);
            str2 = str.substr(num, str.size() - num);
            str = str2 + str1;
        }
        cout << str << endl;
    }
}
