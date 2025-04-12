/**********************************************************************************************
* Data: 12/04/2025                                                                            *
* Exerc�cio: 001 - Exerc�cios de Algoritmos (em C)                                            *
* Institui��o de Ensino: UNEB                                                                 *
* Disciplina: Linguagem C                                                                     *
* Professor: Jorge Campos                                                                     *
* Aluno: D. K. Mariano                                                                        *
* Descri��o:Escreva um programa que leia uma temperatura em graus Fahrenheit e a imprima      *
* em graus Cent�grados. A convers�o de graus Fahrenheit para graus Cent�grados � obtida       *
* pela formula C = (5/9)(F-32). A sa�da do seu programa dever� apresentar a seguinte          *
* mensagem: XX.XX graus Fahrenheit equivalem a YY.YY graus Celsius. XX.XX � a temperatura     *
* Fahrenheit em informada pelo usu�rio apresentada com duas casas decimais YY.YY � o valor    *
* da temperatura em Celsius calculada pelo seu programa e apresentada com duas casas decimais *
**********************************************************************************************/

// Biblioteca padr�o de entrada e sa�da
#include <stdio.h>

// Biblioteca para configurar o idioma
#include <locale.h>

// Biblioteca para fun��es gerais
#include <stdlib.h>

int main(){
    // Define o idioma como portugu�s (acentua��o)
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
