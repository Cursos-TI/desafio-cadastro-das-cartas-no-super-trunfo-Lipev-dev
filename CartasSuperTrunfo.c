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
    float densidade, pib_per_capta;
    

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade);

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
 
    printf("A área é: %.2fkm² \n", area);

    printf("Existem %d pontos turísticos \n", pontos_turisticos);

    densidade = populacao / area;
    printf("A densidade populacional é: %.2f \n", densidade);

    pib_per_capta = pib /populacao;
    printf("O pib per capita é de: %.2f \n", pib_per_capta);
    
    // ---------------------------------------------------------------------------------------------------------------------------



    //CIDADE2

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);
    
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade);
    
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

    printf("A densidade populacional é: %.2f \n", densidade);

    printf("O pib per capita é de: %2.f \n", pib_per_capta);


    return 0;


}

   
