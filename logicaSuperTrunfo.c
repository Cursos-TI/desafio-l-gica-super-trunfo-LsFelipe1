#include <stdio.h>

// Estrutura para armazenar os dados de uma carta (cidade)
typedef struct {
    char estado;          // Estado da cidade (A a H)
    char codigo[4];       // Código da carta (ex: A01, B02)
    char nome_cidade[50]; // Nome da cidade (string com até 50 caracteres)
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade
    int pontos_turisticos; // Número de pontos turísticos
} Carta;

int main() {
    // Declaração de duas variáveis do tipo Carta para armazenar os dados das duas cidades
    Carta carta1, carta2;

    // --- Cadastro da primeira carta ---
    // Solicita o estado da primeira carta
    printf("Digite o estado da primeira carta (A a H): ");
    scanf(" %c", &carta1.estado);

    // Solicita o código da primeira carta
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    // Solicita o nome da cidade da primeira carta
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]s", carta1.nome_cidade); // Lê string com espaços

    // Solicita a população da primeira carta
    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &carta1.populacao);

    // Solicita a área da primeira carta
    printf("Digite a area da primeira carta (em km2): ");
    scanf("%f", &carta1.area);

    // Solicita o PIB da primeira carta
    printf("Digite o PIB da primeira carta (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    // Solicita o número de pontos turísticos da primeira carta
    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &carta1.pontos_turisticos);

    // --- Cadastro da segunda carta ---
    // Solicita o estado da segunda carta
    printf("\nDigite o estado da segunda carta (A a H): ");
    scanf(" %c", &carta2.estado);

    // Solicita o código da segunda carta
    printf("Digite o codigo da segunda carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    // Solicita o nome da cidade da segunda carta
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]s", carta2.nome_cidade); // Lê string com espaços

    // Solicita a população da segunda carta
    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &carta2.populacao);

    // Solicita a área da segunda carta
    printf("Digite a area da segunda carta (em km2): ");
    scanf("%f", &carta2.area);

    // Solicita o PIB da segunda carta
    printf("Digite o PIB da segunda carta (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    // Solicita o número de pontos turísticos da segunda carta
    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &carta2.pontos_turisticos);

    // --- Exibição dos dados da primeira carta ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    // --- Exibição dos dados da segunda carta ---
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
