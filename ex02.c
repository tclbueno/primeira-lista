/*
#include <locale.h>
#include <stdio.h>

2 – Escreva um programa que solicite ao usuário a altura e o raio de um
cilindro circular e imprima seu volume. Use a fórmula:
Volume de um cilindro = 3,141592 * raio * raio * altura

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  float raio, altura, pi = 3.141592, volume;

  printf("Digite a altura do Cilindro: ");
  scanf("%f", &altura);

  printf("Digite o raio do Cilindro: ");
  scanf("%f", &raio);

  volume = pi * raio * raio * altura;

  printf("O volume do Cilindro é de: %.2f", volume);

  return 0;
}
*/