#include <iostream>
using namespace std;

int main() {
  int n;
  int b, f, r, v;
  // 初期化
  int houses[4][3][10];
  for (b = 0; b < 4; b++) {
    for (f = 0; f < 3; f++) {
      for (r = 0; r < 10; r++) {
        houses[b][f][r] = 0;
      }
    }
  }

  // 入力の処理
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    // 入力の値を添字の形式に合わせるためにそれぞれ-1している。
    houses[b-1][f-1][r-1] += v;
    if (houses[b-1][f-1][r-1] < 0) {
      houses[b-1][f-1][r-1] = 0;
    }
  }

  // 出力
  for (b = 0; b < 4; b++) {
    for (f = 0; f < 3; f++) {
      for (r = 0; r < 10; r++) {
        cout << " " << houses[b][f][r];
      }
      cout << endl;
    }
    if (b == 3) {
      continue;
    }
    cout << "####################" << endl;
  }
}
