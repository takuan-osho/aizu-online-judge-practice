#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    string tCard, hCard;
    int tPoint = 0;
    int hPoint = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tCard >> hCard;
        if (tCard == hCard) {
            tPoint++;
            hPoint++;
        } else if (tCard > hCard) {
            tPoint = tPoint + 3;
        } else {
            hPoint = hPoint + 3;
        }
    }

    cout << tPoint << " " << hPoint << endl;
}
