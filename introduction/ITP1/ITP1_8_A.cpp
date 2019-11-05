#include <cctype>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char ch;

    while (true) {
        scanf("%c", &ch);
        if (ch == '\n') {
            printf("\n");
            break;
        }

        if (isalpha(ch)) {
            if (islower(ch)) {
                printf("%c", toupper(ch));
            } else {
                printf("%c", tolower(ch));
            }
        } else {
            printf("%c", ch);
        }
    }

    return 0;
}
