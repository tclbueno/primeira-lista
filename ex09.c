/*
#include <locale.h>
#include <stdio.h>

9 – Sabe-se que o preço de um piso é de R$ 7,00 o m2 e que cada peça possui
0,25 m2
.
Escreva um programa que receba uma área (em metros quadrados) e retorne quantas
peças serão necessárias e o valor total.


int main(void) {

  float valorPiso = 7.00, tamanhoPeca = 0.25, area, valorTotal, quantPecas;

  printf("Digite o tamanho da area em m²: ");
  scanf("%f", &area);

  quantPecas = area / tamanhoPeca;
  valorTotal = quantPecas * valorPiso;


  printf("Serão necessárias %.2f peças e o valor total é de R$%.2f.",
         quantPecas, valorTotal);

      return 0;
}
*/