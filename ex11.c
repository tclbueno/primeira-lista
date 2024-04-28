/*#include <locale.h>
#include <stdio.h>

 11 - Escreva um programa que receba três números inteiros e positivos (A, B,
C) e calcule a seguinte expressão: D = (R + S) / 2 Sendo R = (A + B)2 e S = (B +
C) 2
.
Dica: para o cálculo do quadrado, neste momento, use x * x.

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int A, B, C, R, S, D;

  printf("Digite o primero número: ");
  scanf("%d", &A);

  printf("Digite o segundo número: ");
  scanf("%d", &B);

  printf("Digite o terceiro número: ");
  scanf("%d", &C);

  R = (A + B) * (A + B);
  S = (B + C) * (B + C);
  D = (R + S) / 2;

  printf("O valor de D é: %d", D);

  return 0;
}
*/