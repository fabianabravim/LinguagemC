#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float peso;
};

int main() {
    struct Pessoa pessoas[3]; // vetor com 3 pessoas

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Digite o peso: ");
        scanf("%f", &pessoas[i].peso);
        printf("\n");
    }

    printf("=== Lista de Pessoas ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s | Idade: %d | Peso: %.2f\n",
               pessoas[i].nome, pessoas[i].idade, pessoas[i].peso);
    }

    return 0;
}
