#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    int length, i;
    printf("Enter a string:\n");
    scanf("%s", string);
    length = strlen(string);
    for(i = 0; i < length / 2; i++) {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }
    printf("Reversed string is: %s\n", string);
    return 0;
}
