/**********************************************************************************************
* Data: 12/04/2025                                                                            *
* Exercício: 001 - Exercícios de Algoritmos (em C)                                            *
* Instituição de Ensino: UNEB                                                                 *
* Disciplina: Linguagem C                                                                     *
* Professor: Jorge Campos                                                                     *
* Aluno: D. K. Mariano                                                                        *
* Descrição:Escreva um programa que leia uma temperatura em graus Fahrenheit e a imprima      *
* em graus Centígrados. A conversão de graus Fahrenheit para graus Centígrados é obtida       *
* pela formula C = (5/9)(F-32). A saída do seu programa deverá apresentar a seguinte          *
* mensagem: XX.XX graus Fahrenheit equivalem a YY.YY graus Celsius. XX.XX é a temperatura     *
* Fahrenheit em informada pelo usuário apresentada com duas casas decimais YY.YY é o valor    *
* da temperatura em Celsius calculada pelo seu programa e apresentada com duas casas decimais *
**********************************************************************************************/

// Biblioteca padrão de entrada e saída
#include <stdio.h>

// Biblioteca para configurar o idioma
#include <locale.h>

// Biblioteca para funções gerais
#include <stdlib.h>

int main(){
    // Define o idioma como português (acentuação)
    setlocale(LC_ALL, "Portuguese");

    float celsius = 0, fahrenheit = 0;

    printf("Digite o valor da temperatura em graus Fahrenheit:\n");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9.0) * (fahrenheit - 32);


    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);

    // limpa o Enter do scanf
    getchar();

    printf("Pressione Enter para sair...");

    // Limpa o buffer do teclado
    getchar();

    return 0;
}
