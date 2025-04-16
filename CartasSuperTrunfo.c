#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_cidade1[10], nome_cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capta1;
    

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turtistico existem: ");
    scanf("%d", &pontos_turisticos1);

    printf("O código da cidade é: %s \n", codigo_cidade1);

    printf("O nome da cidade é: %s \n", nome_cidade1);

    printf("A população é de: %d \n", populacao1);

    printf("O pib é de: %f \n", pib1);
 
    printf("A área é: %.2fkm² \n", area1);

    printf("Existem %d pontos turísticos \n", pontos_turisticos1);

    densidade1 = populacao1 / area1;
    printf("A densidade populacional é: %.2f \n", densidade1);

    pib_per_capta1 = pib1 /populacao1;
    printf("O pib per capita é de: %.2f \n", pib_per_capta1);
    
    // ---------------------------------------------------------------------------------------------------------------------------



    //CIDADE2
    char codigo_cidade2[10], nome_cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capta2;

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos turtistico existem: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("O código da cidade é: %s \n", codigo_cidade2);
    
    printf("O nome da cidade é: %s \n", nome_cidade2);
    
    printf("A população é de: %d \n", populacao2);
    
    printf("O pib é de: %f \n", pib2);
     
    printf("A área é: %f \n", area2);
    
    printf("Existem %d pontos turísticos \n", pontos_turisticos2);

    printf("A densidade populacional é: %.2f \n", densidade2);

    printf("O pib per capita é de: %2.f \n", pib_per_capta2);

    ///////////////////////////////////////////////////////////////////////////////////

    
    int reuslt1 = nome_cidade1 > nome_cidade2;
    int reuslt2 = codigo_cidade1 > codigo_cidade2;
    int reuslt3 = populacao1 > populacao2;
    float reuslt4 = pib1 > pib2;
    float reuslt5 = area1 > area2;
    int reuslt6 = pontos_turisticos1 > pontos_turisticos2;
    int reuslt7 = densidade1 > densidade2;
    int reuslt8 = pib_per_capta1 > pib_per_capta2;

    printf("O nome da cidade 1 é maior que da cidade 2? %d\n",reuslt1);
    printf("O codigo da cidade 1 é maior que da cidade 2? %d\n",reuslt2);
    printf("A populção da cidade 1 é maior que da cidade 2? %d\n",reuslt3);
    printf("O pib da cidade 1 é maior que da cidade 2? %.2f\n",reuslt4);
    printf("A área da cidade 1 é maior que da cidade 2? %.2f\n",reuslt5);
    printf("O número de pontos turísticos da cidade 1 é maior que da cidade 2? %d\n",reuslt6);
    printf("A densidade da cidade 1 é maior que da cidade 2? %d\n",reuslt7);
    printf("O pib per capta da cidade 1 é maior que da cidade 2? %d\n",reuslt8);









    return 0;



}

   
