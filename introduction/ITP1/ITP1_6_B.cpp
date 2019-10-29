#include <iostream>
using namespace std;

int main() {
    bool cards[4][14];
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 13; j++) {
            cards[i][j] = false;
        }
    }
    /*
    以下のような対応付けで考える
    0: S
    1: H
    2: C
    3: D
    */

    int n, cardNum;
    char type;
    cin >> n;

    // カードの状態を表す入力値の処理
    for (int i = 0; i < n; i++) {
        char type;
        cin >> type >> cardNum;

        if (type == 'S')
            cards[0][cardNum] = true;
        if (type == 'H')
            cards[1][cardNum] = true;
        if (type == 'C')
            cards[2][cardNum] = true;
        if (type == 'D')
            cards[3][cardNum] = true;
    }

    // カードを出力する
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 13; j++) {
            if (cards[i][j])
                continue;
            if (i == 0)
                type = 'S';
            if (i == 1)
                type = 'H';
            if (i == 2)
                type = 'C';
            if (i == 3)
                type = 'D';
            cout << type << " " << j << endl;
        }
    }

    return 0;
}
