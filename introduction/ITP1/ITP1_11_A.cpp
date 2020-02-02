#include <iostream>
using namespace std;

class Cube {
  public:
    int faces[6];
    Cube(){};
    void roll(int i, int j, int k, int l) {
        int t = faces[i];
        faces[i] = faces[j];
        faces[j] = faces[k];
        faces[k] = faces[l];
        faces[l] = t;
    }
    void roll_z() { roll(1, 2, 4, 3); }
    void roll_y() { roll(0, 2, 5, 3); }
    void roll_x() { roll(0, 1, 5, 4); }
    void move(char ch) {
        switch (ch) {
        case 'E':
            for (int i = 0; i < 3; i++) {
                roll_y();
            }
            break;
        case 'W':
            roll_y();
            break;
        case 'N':
            roll_x();
            break;
        case 'S':
            for (int i = 0; i < 3; i++) {
                roll_x();
            }
        default:
            break;
        }
    }
};

int main(int argc, char const *argv[]) {
    Cube cube;
    string commands;

    for (int i = 0; i < 6; i++) {
        cin >> cube.faces[i];
    }
    cin >> commands;

    for (int i = 0; i < commands.size(); i++) {
        cube.move(commands[i]);
    }

    cout << cube.faces[0] << endl;

    return 0;
}
