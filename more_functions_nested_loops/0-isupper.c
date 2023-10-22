#include <stdio.h>

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char character = 'A'; // Change this to the character you want to check
    int result = _isupper(character);

    if (result) {
        printf("%c is an uppercase character.\n", character);
    } else {
        printf("%c is not an uppercase character.\n", character);
    }

    return 0;
}
