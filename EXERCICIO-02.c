#include <stdio.h>
// VERIFICAR AS QUESTOES DE COMENTARIOS DO EXECICIO UM OBJETIVO, ENTRADA, SAIDA

// NA SOLUCAO PODERIA UTILIZAR ARRAY PARA SIMPLIFICAR A LOGICA

int main() 
    // DEFINIR QUE AQUI COMEÇA AS VARIAVIES
    // DEIXAR AS DECLARAÇÕES DE INT EM UM LUGAR SO
    // INDICE DEVE SER INT E NAO FLOAT
    int idade, totalPessoas = 0;
    float indice, somaIdade = 0, somaIndice = 0;
    int satisfacao5 = 0, satisfacao10 = 0, abaixoDe7 = 0;
    
    do {
        printf("Digite a idade (999 para encerrar): ");
        scanf("%d", &idade);
        
        if (idade != 999) {
            printf("Digite o indice de satisfacao (5 a 10): ");
            scanf("%f", &indice);

            totalPessoas++;
            somaIdade += idade;
            somaIndice += indice;

            if (indice == 5) satisfacao5++;
            if (indice == 10) satisfacao10++;
            if (indice < 7) abaixoDe7++;
        }
    } while (idade != 999);

    // SE A IDADE FOR 999 VAI QUEBRAR TODOS ESSES CALCULOS AQUI EMBAIXO
    float mediaIdade = somaIdade / totalPessoas;
    float mediaIndice = somaIndice / totalPessoas;
    float percentual5 = (float)satisfacao5 / totalPessoas * 100;
    float percentual10 = (float)satisfacao10 / totalPessoas * 100;
    float percentualAbaixoDe7 = (float)abaixoDe7 / totalPessoas * 100;

    printf("\nResultados da Pesquisa de Opinião:\n");
    printf("Total de pessoas entrevistadas: %d\n", totalPessoas);
    printf("Idade média das pessoas entrevistadas: %.2f\n", mediaIdade);
    printf("Média do índice de satisfação: %.2f\n", mediaIndice);
    printf("Número de satisfação 5: %d (%.2f%%)\n", satisfacao5, percentual5);
    printf("Número de satisfação 10: %d (%.2f%%)\n", satisfacao10, percentual10);
    printf("Percentual de pessoas com satisfação abaixo de 7: %.2f%%\n", percentualAbaixoDe7);
    
    return 0;
}
