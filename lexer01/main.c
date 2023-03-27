#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    Mais,
    Menos,
    Vezes,
    Dividido
} Token;

void tokenizar(char* s, Token* tokens, int* n) {
    int len = strlen(s);
    int i = 0, j = 0;
    while (i < len) {
        switch(s[i]) {
            case '+':
                tokens[j++] = Mais;
                break;
            case '-':
                tokens[j++] = Menos;
                break;
            case '*':
                tokens[j++] = Vezes;
                break;
            case '/':
                tokens[j++] = Dividido;
                break;
            case ' ':
                break;
            default:
                printf("Caracter invalido: %c\n", s[i]);
        }
        i++;
    }
    *n = j;
}

int main() {
    Token tokens[100];
    int n;
    char* s = "d + - * / * - + d";
    tokenizar(s, tokens, &n);
    printf("TOKENS: ");
    for (int i = 0; i < n; i++) {
        switch(tokens[i]) {
            case Mais:
                printf("Mais ");
                break;
            case Menos:
                printf("Menos ");
                break;
            case Vezes:
                printf("Vezes ");
                break;
            case Dividido:
                printf("Divido ");
                break;
					 
        }
    }
    printf("\n");
    return 0;
}