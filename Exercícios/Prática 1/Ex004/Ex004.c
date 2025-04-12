/*********************************************************************************************************************
* Data: 12/04/2025                                                                                                   *
* Exerc�cio: 004 - Exerc�cios de Algoritmos (em C)                                                                   *
* Institui��o de Ensino: UNEB                                                                                        *
* Disciplina: Linguagem C                                                                                            *
* Professor: Jorge Campos                                                                                            *
* Aluno: D. K. Mariano                                                                                               *
* Descri��o:Escreva um programa que leia um n�mero de quatro algarismos e mostre o n�mero formato pela invers�o da   *
* ordem dos algarismos do n�mero dado. Utilize as opera��es de %, /, *, + para resolver a quest�o. Por exemplo, caso *
* o usu�rio informe o n�mero 1365, a sa�da do seu programa dever� apresentar a seguinte mensagem: Invertendo-se os   *
* algarismos do numero 1365 obt�m-se o numero 5631.                                                                  *
********************************************************************************************************************/

// Biblioteca padr�o de entrada e sa�da:
// Permite usar fun��es como printf() e scanf().
#include <stdio.h>

// Biblioteca para suporte � localiza��o:
// Usada aqui para permitir a exibi��o correta de acentos e caracteres especiais.
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");


    int num= 0, num_invertido = 0, unidade = 0, dezena = 0, centena = 0, milhar = 0;

    printf("Digite o n�mero inteiro que deseja inverter: ");
    scanf("%d", &num);

    milhar = num/1000;
    centena = (num / 100) - (milhar *10);
    dezena = (num / 10) - (milhar *100) - (centena*10);
    unidade = num - (milhar *1000) - (centena*100) - (dezena *10);

    num_invertido = (unidade * 1000) + (dezena * 100) + (centena * 10) +  milhar;

    printf("\nInvertendo-se os algarismos do numero %d obt�m-se o numero %d.\n", num, num_invertido);

    printf("\nPressione Enter para sair...");

    // Limpa o buffer do teclado
    getchar();

    return 0;



}
