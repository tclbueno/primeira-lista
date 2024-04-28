/*
#include <locale.h>
#include <stdio.h>

6 – Escreva um programa que leia o preço de uma refeição e retorne o valor dos 10% da
conta.

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  float preco, dezPorcento;

  printf("Digite o valor da refeição: ");
  scanf("%f", &preco);

  dezPorcento = preco / 10;

  printf("10%% da conta é: %.2f", dezPorcento);

  return 0;
}
*/