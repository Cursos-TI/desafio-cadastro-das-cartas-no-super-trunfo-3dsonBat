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

    int populacao, pontosTuristicos;
    float area, pib;
    char nomeCidade[50];
    char codigoCidade[3];

    //Solicita o nome da cidade
    printf("Digite o nome da Cidade: \n");

    //input do nome da cidade
    scanf(" %s", &nomeCidade);

    //Solicita o código da Cidade
    printf("Digite o Código da Cidade: \n");

    //Input do código da cidade
    scanf(" %s", &codigoCidade);

    //Solicita a população da cidade
    printf("Digite a população da Cidade: \n");

    //Input da População da Cidade
    scanf(" %d", &populacao);

    //Solicita a Área da cidade
    printf("Insira a Área da Cidade: \n");

    //Input da Área da Cidade
    scanf(" %f", &area);

    //Solicita Quantidade de Pontos turísticos
    printf("Quantos Pontos Turísticos tem a Cidade %s ? \n", nomeCidade);

    //Input do número de pontos turísticos
    scanf(" %d", &pontosTuristicos);

    //Solicita o PIB da Cidade
    printf("Qual o PIB (Produto Interno Bruto) da Cidade? \n");

    //Input do PIB
    scanf("%f", &pib);

    //Input do PIB da Cidade
    printf(" Cidade: %s \n Codigo: %s \n População: %d \n PIB: %f \n Área: %f \n Pontos Turísticos: %d", nomeCidade, codigoCidade, populacao, pib, area, pontosTuristicos);

    
    return 0;
}
