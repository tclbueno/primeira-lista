/*
#include <locale.h>
#include <stdio.h>

 10 - Escrever um programa que lê a identificação de um vendedor (a
  identificação pode ser um número inteiro qualquer), o seu salário fixo, o
  total das vendas por ele efetuadas e o percentual que ganha sobre o total de
  vendas. O programa deve calcular o salário total do vendedor e apresentar na
  tela a identificação do vendedor e o seu salário total.

int main(void) {

 setlocale(LC_ALL, "Portuguese");

  int idVendedor, totalDeVendas;
  float salarioFixo, percSobreVendas, salarioLiquido;

  printf("Digite a identificção de vendedor: ");
  scanf("%d", &idVendedor);

  printf("Digite o valor de seu salario fixo: ");
  scanf("%f", &salarioFixo);

  printf("Digite o total de vendas realizadas: ");
  scanf("%d", &totalDeVendas);

  printf("Digite o percentual que se ganha sobre as vendas realizadas: ");
  scanf("%f", &percSobreVendas);

  salarioLiquido = salarioFixo + (totalDeVendas * percSobreVendas);

  printf("O vendedor %d recebe R$%.2f no total.", idVendedor, salarioLiquido);

  return 0;
}
*/