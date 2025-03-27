#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_cidade[10], nome_cidade[20];
    int populacao, pontos_turisticos;
    float area, pib;

    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo_cidade);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turtistico existem: ");
    scanf("%d", &pontos_turisticos);

    printf("O código da cidade é: %s \n", codigo_cidade);

    printf("O nome da cidade é: %s \n", nome_cidade);

    printf("A população é de: %d \n", populacao);

    printf("O pib é de: %f \n", pib);
 
    printf("A área é: %f \n", area);

    printf("Existem %d pontos turísticos \n", pontos_turisticos);
    
    // ---------------------------------------------------------------------------------------------------------------------------


    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo_cidade);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    
    printf("Digite quantos pontos turtistico existem: ");
    scanf("%d", &pontos_turisticos);
    
    printf("O código da cidade é: %s \n", codigo_cidade);
    
    printf("O nome da cidade é: %s \n", nome_cidade);
    
    printf("A população é de: %d \n", populacao);
    
    printf("O pib é de: %f \n", pib);
     
    printf("A área é: %f \n", area);
    
    printf("Existem %d pontos turísticos \n", pontos_turisticos);
        

   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
