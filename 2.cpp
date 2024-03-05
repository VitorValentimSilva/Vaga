#include <stdio.h>

int verificaFibonacci(int num) {
    int a = 0, b = 1, c;
    
    if (num == a || num == b) {
        return 1; 
    }
    
    while (b <= num) {
        c = a + b;
        if (c == num) {
            return 1; 
        }
        a = b;
        b = c;
    }
    
    return 0; 
}

int main() {
    int numero;

    printf("Informe um numero para verificar se esta na sequencia de Fibonacci: ");
    scanf("%d", &numero);

    if (verificaFibonacci(numero)) {
        printf("O numero %d esta na sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao esta na sequencia de Fibonacci.\n", numero);
    }

    return 0;
}

