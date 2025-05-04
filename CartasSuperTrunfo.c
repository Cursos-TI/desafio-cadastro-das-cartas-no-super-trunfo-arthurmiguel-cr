#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        // Variáveis da carta 1

        char estado [15];
        char codigo [5];
        char cidade [20];
        int populacao;
        int pontosturisticos;
        float area;
        float pib;
    
        // Variáveis da carta 2
    
        char estado2 [5];
        char codigo2 [7];
        char cidade2 [25];
        int populacao2;
        int pontosturisticos2;
        float area2;
        float pib2;
    
         // Entrada de dados da carta 1
        printf("Digite seu estado: \n");
        scanf("%s", &estado);
    
        printf("Codigo: \n");
        scanf("%s", &codigo);
    
        printf("Nome da cidade: \n");
        scanf("%s", &cidade);
    
        printf("Total de habitantes: \n");
        scanf("%d", &populacao);
    
        printf("Quantidade de pontos turisticos: \n");
        scanf("%d", &pontosturisticos);
    
        printf("Area: \n");
        scanf("%f", &area);
    
        printf("Pib: \n");
        scanf("%f", &pib);
    
    
         // Entrada de dados da carta 2
         printf("Digite seu estado: \n");
         scanf("%s", &estado2);
    
         printf("Codigo: \n");
         scanf("%s", &codigo2);
    
         printf("Nome da cidade: \n");
         scanf("%s", &cidade2);
    
         printf("Total de habitantes: \n");
         scanf("%d", &populacao2);
    
         printf("Quantidade de pontos turisticos: \n");
         scanf("%d", &pontosturisticos2);
    
         printf("Area: \n");
         scanf("%f", &area2);
    
         printf("Pib: \n");
         scanf("%f", &pib2);
    
    
         // Exibição dos dados da carta 1
    
        printf("Carta 1!");
        printf("Estado: %s \n", estado);
        printf("Codigo da carta: %s%s \n", estado, codigo);
        printf("Cidade: %d \n", cidade);
        printf("Habitantes: %d \n", populacao);
        printf("Pontos Turisticos: %d \n", pontosturisticos);
        printf("Area: %f \n", area);
        printf("Pib: \n", pib);
        
    
        // Exibição dos dados da carta 2
    
        printf("Carta 2!");
        printf("Estado: %s \n", estado2);
        printf("Codigo da carta: %s%s \n", estado2, codigo2);
        printf("Cidade: %d \n", cidade2);
        printf("Habitantes: %d \n", populacao2);
        printf("Pontos Turisticos: %d \n", pontosturisticos2);
        printf("Area: %f \n", area2);
        printf("Pib: \n", pib2);

    return 0;
}
