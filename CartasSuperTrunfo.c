#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste KAIO LEON

int main(){
    printf("cartas super trunfo\n");
    char letra = 'R';

    printf("R a letra é:  %c\n", letra);
    

    char codigoCarta1[] = "R";
    char codigoCarta2[] = "B03";

    printf("Código da Carta 1: %s\n", codigoCarta1);
    printf("Código da Carta 2: %s\n", codigoCarta2);

    
    codigoCarta1[0] = 'R'; 
    codigoCarta1[1] = '0'; 
    codigoCarta1[2] = '2';

    printf("Novo Código da Carta 1: %s\n", codigoCarta1);
    char rondonia [] = "RONDONIA";
    printf("rondonia" %s\n", rondonia);
        int população = 2100000;
        printf("população: %d habbitantes\n", população);
        float area = 11401.1;
        printf("Área da Cidade: %.2f km²\n", area);
        area = 12000.5;
        printf("Nova Área da Cidade: %.2f km²\n", area);
        float pib = 123.45; 
        printf("PIB da Cidade: %.2f bilhões de reais\n", pib);
        pib = 150.75;
        printf("Novo PIB da Cidade: %.2f bilhões de reais\n", pib);
        int numPontosTuristicos = 15;
        printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);
        numPontosTuristicos = 20;  
        printf("Novo Número de Pontos Turísticos: %d\n", numPontosTuristicos);
    }

    return 0;
}
