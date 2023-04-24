#include <stdio.h>

int main() {
  int total_apartamentos = 75;
  float taxa_ocupacao_promocional = 0.8,taxa_ocupacao_normal = 0.5,desconto = 0.25,
valor_diaria_normal,valor_diaria_promocional,valor_total_promocional, valor_total_normal, diferenca;

  printf("");
  scanf("%f", &valor_diaria_normal);

  valor_diaria_promocional = valor_diaria_normal * (1 - desconto);

  valor_total_promocional = total_apartamentos * taxa_ocupacao_promocional * valor_diaria_promocional;
  valor_total_normal = total_apartamentos * taxa_ocupacao_normal * valor_diaria_normal;
  diferenca = valor_total_promocional - valor_total_normal;

  printf("Valor promocional: %.2f\n", valor_diaria_promocional);
  printf("Promocional com 80%% ocupado: %.2f\n", valor_total_promocional);
  printf("Normal com 50%% ocupado: %.2f\n", valor_total_normal);
  printf("Diferenca entre os valores: %.2f\n", diferenca);

  return 0;
}
