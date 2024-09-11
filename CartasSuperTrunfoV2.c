#include <stdio.h>

int main(){
    // Variáveis para os atributos de cidade
    int codigo;
    char nome[50];
    long int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    // Cadastro das Cartas
    printf("Cadastro de Cartas de Cidades\n");

    // Solicitando as informações do usuário
    printf("Digite o código da cidade: ");
    scanf("%d",&codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("Dados da Cidade\n");
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %ld habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;


}
