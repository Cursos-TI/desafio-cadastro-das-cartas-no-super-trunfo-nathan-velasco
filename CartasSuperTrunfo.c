// Incluindo a biblioteca padrão de entrada e saída, essencial para
// funções como printf() e scanf().
#include <stdio.h>

int main() {
    // --- Variáveis para a Carta 1 ---
    // Declaração de todas as "caixinhas" que guardarão os dados da primeira carta.
    char estado1;
    char codigo1[4];      // Ex: "A01" + o caractere nulo '\0' no final
    char nomeCidade1[50]; // Um espaço para nomes de até 49 letras
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Variáveis para a Carta 2 ---
    // Fazemos o mesmo para a segunda carta.
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Cadastro da Carta 1 ---
    // Usamos printf para mostrar uma mensagem ao usuário e scanf para ler os dados.
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    // O espaço antes do %c é importante para limpar o buffer de entrada.
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    // Lê uma string com espaços até que o usuário pressione Enter.
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Adiciona uma linha em branco para organizar

    // --- Cadastro da Carta 2 ---
    // Repetimos o mesmo processo para a segunda carta.
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- Exibição das Cartas Cadastradas ---
    // Agora, usamos printf para mostrar os dados armazenados de forma organizada.
    printf("\n\n--- Informações da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    // %.2f formata o número para exibir apenas 2 casas decimais.
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Informações da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}
