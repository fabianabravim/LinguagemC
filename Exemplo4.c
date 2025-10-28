#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p;

    strcpy(p.nome, "Fabiana"); //copiar string
    p.idade = 35;
    p.altura = 1.68;

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);

    return 0;
}
