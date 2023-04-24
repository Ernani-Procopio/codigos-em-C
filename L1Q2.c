#include <stdio.h>

int main() {
    int num1, num2, resultado;

    printf("Digite os valores desejados: ");
    scanf("%d%d", &num1,&num2);

    resultado = num1 + num2;

    if (resultado >= 10) {
        resultado += 5;
    } else {
        resultado += 7;
    }

    printf("%d\n", resultado);

    return 0;
}
