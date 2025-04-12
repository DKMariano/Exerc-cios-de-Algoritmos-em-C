/*************************************************************************************************
* Data: 12/04/2025                                                                               *
* Exercício: 003 - Exercícios de Algoritmos (em C)                                               *
* Instituição de Ensino: UNEB                                                                    *
* Disciplina: Linguagem C                                                                        *
* Professor: Jorge Campos                                                                        *
* Aluno: D. K. Mariano                                                                           *
* Descrição:Escreva um programa que solicite ao usuário seu peso (em kg) e a altura (em metros)  *
* e calcule o Índice de Massa Corpórea (IMC). O IMC é dado pela fórmula: IMC = peso / altura2.   *
* A saída do seu programa deverá apresentar a seguinte mensagem: "Uma pessoa com altura de XX.XX *
* metros e pesando YY.YY quilos tem um IMC=ZZ.ZZ".                                               *
* XX.XX é a altura informada pelo usuário apresentada com duas casas decimais                    *
* YY.YY é o peso informado pelo usuário apresentada com duas casas decimais                      *
* ZZ.ZZ é o valor do IMC calculado pelo seu programa e apresentado com duas casas decimais       *
*************************************************************************************************/


// Biblioteca padrão para entrada e saída (ex: printf, scanf)
#include <stdio.h>

// Biblioteca usada para configurar o idioma e permitir acentuação
#include <locale.h>

// Biblioteca matemática, usada aqui para utilizar a função pow()
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

    printf("O seu IMC é de %.2f \n", imc);

    // Limpa o buffer do teclado
    getchar();

    printf("Pressione Enter para sair...");

    // Limpa o buffer do teclado
    getchar();

    return 0;

}
