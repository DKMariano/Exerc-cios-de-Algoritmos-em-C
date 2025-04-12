/*********************************************************************************************************************
* Data: 12/04/2025                                                                                                   *
* Exerc�cio: 005 - Exerc�cios de Algoritmos (em C)                                                                   *
* Institui��o de Ensino: UNEB                                                                                        *
* Disciplina: Linguagem C                                                                                            *
* Professor: Jorge Campos                                                                                            *
* Aluno: D. K. Mariano                                                                                               *
* Descri��o: Um terminal caixa eletr�nico de banco possui um programa que analisa o valor solicitado pelo cliente e  *
* calcula o menor n�mero de c�dulas necess�rias para compor este valor. O n�mero de c�dulas � fun��o dos valores das *
* c�dulas contidas na m�quina. Escreva um programa que solicite ao usu�rio um valor em dinheiro (sem centavos), e    *
* informe quantas notas de cada valor s�o necess�rias para atender ao pedido do usu�rio. Considere que a m�quina     *
* possui notas de 5, 10, 20, 50 e 100 reais. Por exemplo, se o cliente informar o valor 780, o seu programa dever�   *
* apresentar o seguinte resultado:                                                                                   *
*    - 0 nota(s) de 5 reais                                                                                          *
*    - 1 nota(s) de 10 reais                                                                                         *
*    - 1 nota(s) de 20 reais                                                                                         *
*    - 1 nota(s) de 50 reais                                                                                         *
*    - 7 nota(s) de 100 reais                                                                                        *
* O que acontecer� com o seu programa se o valor informado for R$ 783,00? O que deve ser feito neste caso?           *                                                                                 *                                                                                      *
*********************************************************************************************************************/



#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int montante = 0, cedula_cinco = 0, cedula_dez = 0, cedula_vinte = 0, cedula_cinquenta = 0,  cedula_cem = 0;

    printf("Digite o valor do montante em reais que deseja retirar: ");
    scanf("%d", &montante);
    getchar();

    if (montante % 5 == 0){

        cedula_cem = montante/100;
        montante = montante - (cedula_cem * 100);

        cedula_cinquenta = montante/50;
        montante = montante - (cedula_cinquenta * 50);

        cedula_vinte = montante / 20;
        montante = montante - (cedula_vinte * 20);

        cedula_dez = montante / 10;
        montante = montante - (cedula_dez * 10);

        cedula_cinco = montante / 5;
        montante = montante - (cedula_dez * 5);

        printf("\nC�dulas de R$ 100: %d", cedula_cem);
        printf("\nC�dulas de R$ 50: %d", cedula_cinquenta);
        printf("\nC�dulas de R$ 20: %d", cedula_vinte);
        printf("\nC�dulas de R$ 10: %d", cedula_dez);
        printf("\nC�dulas de R$ 5: %d", cedula_cinco);

    }else{
        printf("\nN�o � poss�vel sacar R$ %d com as c�dulas dispon�veis.\n", montante);
        printf("\nPressione Enter para sair...");
        return 1;
    }

    printf("\nPressione Enter para sair...");
    return 0;

}
