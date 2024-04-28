/*
#include <locale.h>
#include <stdio.h>

8 – Um trabalhador recebe R$ 100,00 por dia trabalhado. Ao receber, são
  descontados 8% de impostos. Escreva um programa que receba o número de dias
  trabalhados e informe o quanto deve ser pago ao trabalhador.

int main() {

  setlocale(LC_ALL, "Portuguese");

  float diaTrabalhado = 100.0, desconto = 0.08, quantAReceber, quantSemDesconto;
  int quantDiasTrabalhados;

  printf("Digite a quantidade de dias trabalhados: ");
  scanf("%d", &quantDiasTrabalhados);

  quantSemDesconto = quantDiasTrabalhados * diaTrabalhado;

  desconto *= quantSemDesconto;

  quantAReceber = quantSemDesconto - desconto;

  printf("A quantidade que o trabalhador têm à receber é de %.2f. ",
         quantAReceber);

  return 0;
}
  */