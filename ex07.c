/*
#include <locale.h>
#include <stdio.h>

7 – Sabe-se que o latão é obtido por uma mistura de 7 partes de cobre
e 3 partes de zinco, ou seja, 70% do peso de latão é formado por cobre e 30% de
zinco. Escreva um programa que receba o valor em kgs de quanto de latão deve ser
produzido, e o programa deve indicar quantos kgs de cobre e zinco serão
necessários.

int main() {

  setlocale(LC_ALL, "Portuguese");

  float cobre = 0.7, zinco = 0.3, kgLatao;

  printf("Escreva a quantidade de Kg que devem ser produzido de latão: ");
  scanf("%f", &kgLatao);

  cobre *= kgLatao;
  zinco *= kgLatao;

  printf("São precisos %.2f kg de cobre e %.2f kg de zinco para fazer o latão.",
         cobre, zinco);

  return 0;
}
*/