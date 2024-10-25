#include <stdio.h>

// Objetivo : Incluir o objetivo do programa 
// Entradas : Incluir as entradas de varáveis que terão no programa
// Saida: Incluir a saida final do programa


// Definição de funções deve acorrer depois da função main declarada
void cabecalho() {
    printf("Relatorio de Estoque\n");
    printf("====================\n");
    printf("Informacoes de pecas em estoque:\n\n");
}

int main() {
    // Organizar o programa para deixar exclicito cada momento dele nesse caso criar um comentário informando que é a sessão de variáveis
    // VARIAVEIS 
    // Poderia deixar todas as declaracoes de float em um lugar so
    float valor1, valor2;  
    int qtde1, qtde2;      
    // Inicialize as variaveis nem que seja com valor zerado
    float valorMedio1, valorMedio2, valorMedioGeral; 
    const float dolar = 5.70;

    // INICIO DO PROGRAMA

    // BLOCO 1
    printf("Digite o valor total em estoque da peca tipo 1: R$ ");
    scanf("%f", &valor1);
    printf("Digite a quantidade da peca tipo 1: ");
    scanf("%d", &qtde1);

    // BLOCO 2
    printf("Digite o valor total em estoque da peca tipo 2: R$ ");
    scanf("%f", &valor2);
    printf("Digite a quantidade da peca tipo 2: ");
    scanf("%d", &qtde2);

    // TANTO O BLOCO 1 QUANTO O BLOCO 2 POSSUEM PRATICAMENTE O MESMO CODIGO SUBSTITUIR POR FUNCAO

    // O CALCULO DA MEDIA PODERIA ESTAR EM UMA FUNCAO
    valorMedio1 = valor1 / qtde1;
    valorMedio2 = valor2 / qtde2;

    // O VALOR MEDIO GERAL DEVERIA ESTAR SENDO CALCULADO DENTRO DE UMA FUNCAO
    // A logica do valor medio geral esta errada
    // validar para garantir que nunca nenhum divisor seja igual a zero
    valorMedioGeral = (valor1 + valor2) / (qtde1 + qtde2) / dolar;
    
    cabecalho();

    // Daqui pra baixo poderia estar dentro de uma função chamada apresentarFinalizacao programa
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
