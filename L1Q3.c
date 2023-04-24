#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int main()
{
    int ano_nascimento, ano_atual=2023, idade;
    char fez_aniversario;

    printf("");
    scanf("%d", &ano_nascimento);

    printf("");
    scanf(" %c", &fez_aniversario); //o espaço antes do %c é para ignorar possíveis espaços em branco antes da resposta

    idade = ano_atual - ano_nascimento;

    if (fez_aniversario == 'N' || fez_aniversario == 'n') {
        idade--;
    }

    printf("%d\n", idade);

    if (idade >= 18) {
        printf("Pode dirigir\n");
    }
    else {
        printf("Não pode dirigir.\n");
    }

    return 0;
}
