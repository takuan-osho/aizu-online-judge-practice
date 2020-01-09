#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    /* code */
    string W, input;
    int cnt = 0;

    cin >> W;
    while (cin >> input) {
        if (input == "END_OF_TEXT") {
            break;
        }
        // 大文字化
        transform(W.begin(), W.end(), W.begin(), ::toupper);
        transform(input.begin(), input.end(), input.begin(), ::toupper);

        if (input == W) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
