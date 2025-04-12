/*****************************************************************************************************************
* Data: 12/04/2025                                                                                               *
* Exercício: 003 - Exercícios de Algoritmos (em C)                                                               *
* Instituição de Ensino: UNEB                                                                                    *
* Disciplina: Linguagem C                                                                                        *
* Professor: Jorge Campos                                                                                        *
* Aluno: D. K. Mariano                                                                                           *
* Descrição:Escreva um programa que solicite ao usuário um ano e calcule a data do domingo de Páscoa.            *
* Utilize o algoritmo abaixo:                                                                                    *
*    1. Solicite o ano desejado e atribua o valor digitado a variável ano                                        *
*    2. Atribua à variável a o resto da divisão inteira da variável ano por 19                                   *
*    3. Atribua à variável b o resultado da divisão inteira da variável ano por 100                              *
*    4. Atribua à variável c o resto da divisão inteira da variável ano por 100                                  *
*    5. Atribua à variável d o resultado da divisão inteira da variável b por 4                                  *
*    6. Atribua à variável e o resto da divisão inteira da variável b por 4                                      *
*    7. Atribua à variável f o resultado da divisão inteira da expressão b+8 por 25                              *
*    8. Atribua à variável g o resultado da divisão inteira da expressão b-f+1 por 3                             *
*    9. Atribua à variável h o resto da divisão inteira da expressão 19 * a + b - d - g + 15 por 30              *
*    10. Atribua à variável i o resultado da divisão inteira da variável c por 4                                 *
*    11. Atribua à variável k o resto da divisão inteira da variável c por 4                                     *
*    12. Atribua à variável l o resto da divisão inteira da expressão 32 + 2 * e + 2 * i - h - k por 7           *
*    13. Atribua à variável m o resultado da divisão inteira da expressão a + 11 * h + 22 * l por 451            *
*    14. Atribua à variável mes o resultado da divisão inteira da expressão h + l - 7 * m + 114 por 31           *
*    15. Atribua à variável dia o resto da divisão inteira da expressão h + l - 7 * m + 114 por 31 e adicione um *
*    16. Informe ao usuário o dia/mês/ano do domingo de páscoa.                                                  *
*****************************************************************************************************************/

// Biblioteca padrão de entrada e saída:
// Permite usar funções como printf() e scanf().
#include <stdio.h>

// Biblioteca para suporte à localização:
// Usada aqui para permitir a exibição correta de acentos e caracteres especiais.
#include <locale.h>

int main(){
    // Configura a linguagem e acentuação para Português do Brasil
    setlocale(LC_ALL, "Portuguese");

    int dia = 0, mes = 0, ano = 0;

    printf("Informe o ano (XXXX) para descobrir a data do Domingo de Páscoa:\n");
    scanf("%d", &ano);

    // Algoritmo de Gauss para cálculo da Páscoa:
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

    printf("\nO domingo de Páscoa será/foi em %02d/%02d/%d\n", dia, mes, ano);

    // Limpa o buffer do teclado
    getchar();

    printf("Pressione Enter para sair...");

    // Limpa o buffer do teclado
    getchar();

    return 0;


}
