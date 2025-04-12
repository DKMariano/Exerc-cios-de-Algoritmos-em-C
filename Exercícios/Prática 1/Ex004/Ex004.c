/*********************************************************************************************************************
* Data: 12/04/2025                                                                                                   *
* Exercício: 004 - Exercícios de Algoritmos (em C)                                                                   *
* Instituição de Ensino: UNEB                                                                                        *
* Disciplina: Linguagem C                                                                                            *
* Professor: Jorge Campos                                                                                            *
* Aluno: D. K. Mariano                                                                                               *
* Descrição:Escreva um programa que leia um número de quatro algarismos e mostre o número formato pela inversão da   *
* ordem dos algarismos do número dado. Utilize as operações de %, /, *, + para resolver a questão. Por exemplo, caso *
* o usuário informe o número 1365, a saída do seu programa deverá apresentar a seguinte mensagem: Invertendo-se os   *
* algarismos do numero 1365 obtêm-se o numero 5631.                                                                  *
********************************************************************************************************************/

// Biblioteca padrão de entrada e saída:
// Permite usar funções como printf() e scanf().
#include <stdio.h>

// Biblioteca para suporte à localização:
// Usada aqui para permitir a exibição correta de acentos e caracteres especiais.
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");


    int num= 0, num_invertido = 0, unidade = 0, dezena = 0, centena = 0, milhar = 0;

    printf("Digite o número inteiro que deseja inverter: ");
    scanf("%d", &num);

    milhar = num/1000;
    centena = (num / 100) - (milhar *10);
    dezena = (num / 10) - (milhar *100) - (centena*10);
    unidade = num - (milhar *1000) - (centena*100) - (dezena *10);

    num_invertido = (unidade * 1000) + (dezena * 100) + (centena * 10) +  milhar;

    printf("\nInvertendo-se os algarismos do numero %d obtêm-se o numero %d.\n", num, num_invertido);

    printf("\nPressione Enter para sair...");

    // Limpa o buffer do teclado
    getchar();

    return 0;



}
