/*************************************************************************************************
* Data: 12/04/2025                                                                               *
* Exerc�cio: 003 - Exerc�cios de Algoritmos (em C)                                               *
* Institui��o de Ensino: UNEB                                                                    *
* Disciplina: Linguagem C                                                                        *
* Professor: Jorge Campos                                                                        *
* Aluno: D. K. Mariano                                                                           *
* Descri��o:Escreva um programa que solicite ao usu�rio seu peso (em kg) e a altura (em metros)  *
* e calcule o �ndice de Massa Corp�rea (IMC). O IMC � dado pela f�rmula: IMC = peso / altura2.   *
* A sa�da do seu programa dever� apresentar a seguinte mensagem: "Uma pessoa com altura de XX.XX *
* metros e pesando YY.YY quilos tem um IMC=ZZ.ZZ".                                               *
* XX.XX � a altura informada pelo usu�rio apresentada com duas casas decimais                    *
* YY.YY � o peso informado pelo usu�rio apresentada com duas casas decimais                      *
* ZZ.ZZ � o valor do IMC calculado pelo seu programa e apresentado com duas casas decimais       *
*************************************************************************************************/


// Biblioteca padr�o para entrada e sa�da (ex: printf, scanf)
#include <stdio.h>

// Biblioteca usada para configurar o idioma e permitir acentua��o
#include <locale.h>

// Biblioteca matem�tica, usada aqui para utilizar a fun��o pow()
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float peso = 0, altura = 0, imc = 0;

    printf("Digite seu peso em quilogramas(kg): ");
    scanf("%f", &peso);

    // Limpa o buffer do teclado
    getchar();

    printf("Digite sua altura em metros(m): ");
    scanf("%f", &altura);

    // Limpa o buffer do teclado
    getchar();

    imc = peso / pow(altura, 2);

    printf("O seu IMC � de %.2f \n", imc);

    // Limpa o buffer do teclado
    getchar();

    printf("Pressione Enter para sair...");

    // Limpa o buffer do teclado
    getchar();

    return 0;

}
