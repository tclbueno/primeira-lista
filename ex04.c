/*
#include <locale.h>
#include <stdio.h>

4 – Escreva um programa que receba uma medida em centímetros e retorne essa
quantidade em metros.

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  float metros, centimentros;

  printf("Digite o centimentro: ");
  scanf("%f", &centimentros);

  metros = centimentros / 100;

  printf("Em metros é: %.2f", metros);

  return 0;
}
*/