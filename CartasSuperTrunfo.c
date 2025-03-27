#include <stdio.h>
#include <string.h>
 
int main() {
    // Variáveis Carta 01
    char estado1[5], codigo1[5], cidade1[50]; // Todas as variáveis strings da Carta 01
    int populacao1, ponto_tur1; // Todas as variáveis inteiras da Carta 01
    float area1, pib1; // Todas as variáveis de Ponto Flutuante da Carta 01
    float dens_popul1, pib_per1; // Inclui as variáveis do Desafio Aventureiro Carta 01

    char estado2[5], codigo2[5], cidade2[50]; // Todas as variáveis strings da Carta 02
    int populacao2, ponto_tur2; // Todas as variáveis inteiras da Carta 02
    float area2, pib2; // Todas as variáveis de Ponto Flutuante da Carta 02
    float dens_popul2, pib_per2; // Inclui as variáveis do Desafio Aventureiro Carta 02

    // Carta 01 // Pega as informações da Carta 01.
    printf("Carta 01:\n"); 
    printf("Digite o Estado: "); // Imprime a solicitação para o scanf
    scanf("%s", estado1); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o Código: "); // Imprime a solicitação para o scanf
    scanf("%s", codigo1); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o nome da cidade: "); // Imprime a solicitação para o scanf
    fgets(cidade1, 50, stdin); // Lê o que foi digitado após o printf
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a linha gerado pelo fgets
    printf("Digite a população: "); // Imprime a solicitação para o scanf
    scanf("%d", &populacao1); // Lê o que foi digitado após o printf
    printf("Digite a área: "); // Imprime a solicitação para o scanf
    scanf("%f", &area1); // Lê o que foi digitado após o printf
    printf("Digite o PIB: "); // Imprime a solicitação para o scanf
    scanf("%f", &pib1); // Lê o que foi digitado após o printf
    printf("Digite o número de pontos turísticos: "); // Imprime a solicitação para o scanf
    scanf("%d", &ponto_tur1); // Lê o que foi digitado após o printf

    // Carta 02 // Pega as informações da Carta 02.
    printf("\nCarta 02:\n"); 
    printf("Digite o Estado: "); // Imprime a solicitação para o scanf
    scanf("%s", estado2); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o Código: "); // Imprime a solicitação para o scanf
    scanf("%s", codigo2); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o nome da cidade: "); // Imprime a solicitação para o scanf
    fgets(cidade2, 50, stdin); // Lê o que foi digitado após o printf
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a linha gerado pelo fgets
    printf("Digite a população: "); // Imprime a solicitação para o scanf
    scanf("%d", &populacao2); // Lê o que foi digitado após o printf
    printf("Digite a área: "); // Imprime a solicitação para o scanf
    scanf("%f", &area2); // Lê o que foi digitado após o printf
    printf("Digite o PIB: "); // Imprime a solicitação para o scanf
    scanf("%f", &pib2); // Lê o que foi digitado após o printf
    printf("Digite o número de pontos turísticos: "); // Imprime a solicitação para o scanf
    scanf("%d", &ponto_tur2); // Lê o que foi digitado após o printf
    
    dens_popul1 = (float) populacao1 / area1; // Faz o calculo da Denseidade populacional da carta 01 e armazena na variável
    dens_popul2 = (float) populacao2 / area2; // Faz o calculo da Denseidade populacional da carta 02 e armazena na variável
    pib_per1 = (float) (pib1 * 1000000000) / populacao1; // Faz o calculo do PIB per Capita da carta 01 e armazena na variável
    pib_per2 = (float) (pib2 * 1000000000) / populacao2; // Faz o calculo do PIB per Capita da carta 02 e armazena na variável
    // Estou multipilcando o pib por 1 bilhão para o calculo dar certo
    printf("\nCarta 1:\n"); 
    printf("Estado: %s\n", estado1); // Imprime o estado armazenado na variável "estado1"
    printf("Código: %s\n", codigo1); // Imprime o código armazenado na variável "codigo1"
    printf("Nome da Cidade: %s\n", cidade1); // Imprime a Cidade armazenada na variável "cidade1"
    printf("População: %d\n", populacao1); // Imprime a População armazenada na variável "populacao1"
    printf("Área: %.2f km²\n", area1); // Imprime a Área armazenada na variável "area1"
    printf("PIB: %.2f bilhões de reais\n", pib1); // Imprime o PIB armazenado na variável "pib1"
    printf("Número de Pontos Turísticos: %d\n", ponto_tur1); // Imprime o número de Pontos Turísticos armazenado na variável "ponto_tur1"
    printf("Densidade Populacional: %.2f hab/km²\n", dens_popul1);
    printf("PIB per Capita %.2f reais\n", pib_per1);

    printf("\nCarta 2:\n"); 
    printf("Estado: %s\n", estado2); // Imprime o estado armazenado na variável "estado2"
    printf("Código: %s\n", codigo2); // Imprime o código armazenado na variável "codigo2"
    printf("Nome da Cidade: %s\n", cidade2); // Imprime a Cidade armazenada na variável "cidade2"
    printf("População: %d\n", populacao2); // Imprime a População armazenada na variável "populacao2"
    printf("Área: %.2f km²\n", area2); // Imprime a Área armazenada na variável "area2"
    printf("PIB: %.2f bilhões de reais\n", pib2); // Imprime o PIB armazenado na variável "pib2"
    printf("Número de Pontos Turísticos: %d\n", ponto_tur2); // Imprime o número de Pontos Turísticos armazenado na variável "ponto_tur2"
    printf("Densidade Populacional: %.2f hab/km²\n", dens_popul2);
    printf("PIB per Capita %.2f reais\n", pib_per2);

}