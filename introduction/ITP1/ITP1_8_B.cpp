#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    char str[1001];

    while (true) {
        scanf("%s", str);
        if (str[0] == '0') {
            break;
        }

        int sum = 0;
        int inputLength = strlen(str);
        for (int i = 0; i < inputLength; i++) {
            sum += (str[i] - '0');
        }

        printf("%d\n", sum);
    }

    return 0;
}
