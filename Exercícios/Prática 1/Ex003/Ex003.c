/*****************************************************************************************************************
* Data: 12/04/2025                                                                                               *
* Exerc�cio: 003 - Exerc�cios de Algoritmos (em C)                                                               *
* Institui��o de Ensino: UNEB                                                                                    *
* Disciplina: Linguagem C                                                                                        *
* Professor: Jorge Campos                                                                                        *
* Aluno: D. K. Mariano                                                                                           *
* Descri��o:Escreva um programa que solicite ao usu�rio um ano e calcule a data do domingo de P�scoa.            *
* Utilize o algoritmo abaixo:                                                                                    *
*    1. Solicite o ano desejado e atribua o valor digitado a vari�vel ano                                        *
*    2. Atribua � vari�vel a o resto da divis�o inteira da vari�vel ano por 19                                   *
*    3. Atribua � vari�vel b o resultado da divis�o inteira da vari�vel ano por 100                              *
*    4. Atribua � vari�vel c o resto da divis�o inteira da vari�vel ano por 100                                  *
*    5. Atribua � vari�vel d o resultado da divis�o inteira da vari�vel b por 4                                  *
*    6. Atribua � vari�vel e o resto da divis�o inteira da vari�vel b por 4                                      *
*    7. Atribua � vari�vel f o resultado da divis�o inteira da express�o b+8 por 25                              *
*    8. Atribua � vari�vel g o resultado da divis�o inteira da express�o b-f+1 por 3                             *
*    9. Atribua � vari�vel h o resto da divis�o inteira da express�o 19 * a + b - d - g + 15 por 30              *
*    10. Atribua � vari�vel i o resultado da divis�o inteira da vari�vel c por 4                                 *
*    11. Atribua � vari�vel k o resto da divis�o inteira da vari�vel c por 4                                     *
*    12. Atribua � vari�vel l o resto da divis�o inteira da express�o 32 + 2 * e + 2 * i - h - k por 7           *
*    13. Atribua � vari�vel m o resultado da divis�o inteira da express�o a + 11 * h + 22 * l por 451            *
*    14. Atribua � vari�vel mes o resultado da divis�o inteira da express�o h + l - 7 * m + 114 por 31           *
*    15. Atribua � vari�vel dia o resto da divis�o inteira da express�o h + l - 7 * m + 114 por 31 e adicione um *
*    16. Informe ao usu�rio o dia/m�s/ano do domingo de p�scoa.                                                  *
*****************************************************************************************************************/

// Biblioteca padr�o de entrada e sa�da:
// Permite usar fun��es como printf() e scanf().
#include <stdio.h>

// Biblioteca para suporte � localiza��o:
// Usada aqui para permitir a exibi��o correta de acentos e caracteres especiais.
#include <locale.h>

int main(){
    // Configura a linguagem e acentua��o para Portugu�s do Brasil
    setlocale(LC_ALL, "Portuguese");

    int dia = 0, mes = 0, ano = 0;

    printf("Informe o ano (XXXX) para descobrir a data do Domingo de P�scoa:\n");
    scanf("%d", &ano);

    // Algoritmo de Gauss para c�lculo da P�scoa:
    int a = 0;
    a = ano%19;

    int b = 0;
    b = ano/100;

    int c = 0;
    c = ano%100;

    int d = 0;
    d = b/4;

    int e = 0;
    e = b%4;

    int f = 0;
    f = (b + 8)/25;

    int g = 0;
    g = (b - f + 1)/3;

    int h = 0;
    h = (19 * a + b - d - g +15)%30;

    int i = 0;
    i = c/4;

    int k = 0;
    k = c%4;

    int l = 0;
    l = (32 + 2 * e + 2 * i - h - k)%7;

    int m = 0;
    m =  (a + 11 * h + 22 * l)/451;

    mes = (h + l - 7 * m + 114) /31;

    dia = ((h + l - 7 * m + 114)% 31) +1;

    printf("\nO domingo de P�scoa ser�/foi em %02d/%02d/%d\n", dia, mes, ano);

    // Limpa o buffer do teclado
    getchar();

    printf("Pressione Enter para sair...");

    // Limpa o buffer do teclado
    getchar();

    return 0;


}
