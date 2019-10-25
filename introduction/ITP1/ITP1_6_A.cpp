#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int digits[n];
    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        if(i != n - 1) {
            cout << " ";
        }
        cout << digits[i];
    }
    cout << endl;
}
