#include <stdio.h>
#include <string.h>

// 2. Виверт строки (оборотна послідовність символів)

int main() {
    char str[100];
    int length, i;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    length = strlen(str);

    printf("String in reverse: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}