#include <stdio.h>

void cabecalho() {
    printf("Relatorio de Estoque\n");
    printf("====================\n");
    printf("Informacoes de pecas em estoque:\n\n");
}

int main() {
    float valor1, valor2;  
    int qtde1, qtde2;      
    float valorMedio1, valorMedio2, valorMedioGeral; 
    const float dolar = 5.70;
    
    printf("Digite o valor total em estoque da peca tipo 1: R$ ");
    scanf("%f", &valor1);
    printf("Digite a quantidade da peca tipo 1: ");
    scanf("%d", &qtde1);

    printf("Digite o valor total em estoque da peca tipo 2: R$ ");
    scanf("%f", &valor2);
    printf("Digite a quantidade da peca tipo 2: ");
    scanf("%d", &qtde2);
    
    valorMedio1 = valor1 / qtde1;
    valorMedio2 = valor2 / qtde2;
    
    valorMedioGeral = (valor1 + valor2) / (qtde1 + qtde2) / dolar;
    
    cabecalho();

    printf("Peca Tipo 1:\n");
    printf("Valor em estoque = R$ %.2f\n", valor1);
    printf("Quantidade em estoque = %d\n", qtde1);
    printf("Valor Medio = R$ %.2f\n\n", valorMedio1);
    
    printf("Peca Tipo 2:\n");
    printf("Valor em estoque = R$ %.2f\n", valor2);
    printf("Qtde em estoque = %d\n", qtde2);
    printf("Valor Medio = R$ %.2f\n\n", valorMedio2);
    
    printf("Valor medio geral = $ %.2f\n", valorMedioGeral);
    
    return 0;
}
