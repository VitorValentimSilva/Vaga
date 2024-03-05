#include <stdio.h>

void inverterString(char *str) {
    if (str == NULL) {
        return;
    }

    int comprimento = 0;
    while (str[comprimento] != '\0') {
        comprimento++;
    }

    int i = 0, j = comprimento - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
