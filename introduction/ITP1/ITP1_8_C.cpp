#include <cctype>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char ch;
    const int length = 26;
    int counter[length] =
        {}; // 初期化を忘れると、inputで出てこない文字列のカウンタの値がおかしくなる

    while (cin >> ch) {
        ch = tolower(ch);
        if (!isalpha(ch)) {
            continue;
        }

        int index = ch - 'a';
        counter[index]++;
    }

    for (int i = 0; i < length; i++) {
        printf("%c : %d\n", i + 'a', counter[i]);
    }

    return 0;
}
