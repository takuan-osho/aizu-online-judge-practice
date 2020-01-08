#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string s, p, concatedStr;
    cin >> s >> p;

    concatedStr = s + s;
    if (concatedStr.find(p) == concatedStr.npos) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
