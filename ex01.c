/*
#include <locale.h>
#include <stdio.h>

 1– Faça um programa que recebe dois valores e apresente na tela a soma, a
subtração e multiplicação e a divisão desses dois valores. 

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int primNum, segNum;

  printf("Digite o primeiro número: ");
  scanf("%d", &primNum);

  printf("Digite o segundo número: ");
  scanf("%d", &segNum);

  int soma = primNum + segNum, subtracao = primNum - segNum,
      divisao = primNum / segNum, multiplicacao = primNum * segNum;

  printf("\nA soma entre %d e %d é: %d \n", primNum, segNum, soma);
  printf("A subtração entre %d e %d é: %d \n", primNum, segNum, subtracao);
  printf("A multiplicação entre %d e %d é: %d \n", primNum, segNum,
         multiplicacao);
  printf("A divisão entre %d e %d é: %d \n", primNum, segNum, divisao);

  return 0;
}
*/