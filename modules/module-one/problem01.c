/**
  Uma equipe de laboratório precisa de um software que calcule o IMC, Eles receberam uma demanda da construtora local para calcular o IMC (Índice de Massa Corporal) de um indivíduo e dizer qual é a sua situação. Há três tipos de situações: Abaixo do peso, peso ideal e sobre peso. A escolha de qual situação retornar depende do IMC do indivíduo, que é calculado pela fórmula IMC = Peso / Altura².
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


  float peso, altura, imc;
  int resp;
  char nome[40];

  do{

      fflush(stdin);

      printf("Digite seu nome: ");
      fgets(nome, 40, stdin);
      
      printf("Digite seu peso: ");
      scanf("%f", &peso);
      
      printf("Digite sua altura: ");
      scanf("%f", &altura);
    
      imc = (peso * (altura * altura))/ 2;
      if(imc < 18.5){
        printf("Nome: %s", nome);
        printf("Resultado: Abaixo do peso \n");
      }else if(imc > 18.5 && imc < 24.9){
        printf("Nome: %s", nome);
        printf("Resultado: Peso ideal \n");
      }else{
        printf("Nome: %s", nome);
        printf("Resultado: Sobre peso \n");
      }
  
      printf("Deseja refazer o teste? [1] SIM, [0] NÂO : ");
      scanf("%d",&resp);
  }while(resp != 0);
  
  system("pause");
  printf("Fim da execução");
  return 0;
}