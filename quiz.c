#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int conferir_resposta(char correta) {
    char resposta;
    printf("  Resposta: ");
    scanf(" %c", &resposta);
    printf("\n");

    if (toupper(resposta) == correta) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int acertos = 0;

    printf("=====================================\n");
    printf("     🎮 QUIZ DE HTML, CSS E C 🎮     \n");
    printf("=====================================\n\n");

    printf("1. Qual tag é usada para criar um link em HTML?\n");
    printf(" a) link\n b) a\n c) href\n d) url\n");
    acertos += conferir_resposta('B');

    printf("2. Qual dessas tags é usada para criar um parágrafo?\n");
    printf(" a) p\n b) div\n c) span\n d) section\n");
    acertos += conferir_resposta('A');

    printf("3. Qual atributo da tag <img> define o endereço da imagem?\n");
    printf(" a) href\n b) src\n c) alt\n d) path\n");
    acertos += conferir_resposta('B');

    printf("4. Qual propriedade CSS é usada para mudar a cor do texto?\n");
    printf(" a) text-color\n b) font-color\n c) color\n d) text-style\n");
    acertos += conferir_resposta('C');

    printf("5. Qual elemento HTML é usado para criar uma lista ordenada (numerada)?\n");
    printf(" a) ul\n b) ol\n c) li\n d) list\n");
    acertos += conferir_resposta('B');

    printf("6. Qual propriedade CSS altera o fundo de um elemento?\n");
    printf(" a) background-color\n b) color\n c) font-color\n d) text-background\n");
    acertos += conferir_resposta('A');

    printf("7. Qual unidade em CSS representa uma porcentagem do tamanho da tela?\n");
    printf(" a) px\n b) em\n c) %%\n d) rem\n");
    acertos += conferir_resposta('C');

    printf("8. Qual das opções é um tipo de estrutura condicional em C?\n");
    printf(" a) function\n b) if\n c) include\n d) printf\n");
    acertos += conferir_resposta('B');

    printf("9. Como se declara uma variável inteira em C?\n");
    printf(" a) int numero;\n b) integer numero;\n c) var numero\n d) number numero\n");
    acertos += conferir_resposta('A');

    printf("10. Qual linguagem é usada para criar a estrutura de uma página da web?\n");
    printf(" a) Python\n b) C\n c) HTML\n d) Java\n");
    acertos += conferir_resposta('C');

    printf("\n=====================================\n");
    printf("          🎯 FIM DO QUIZ 🎯\n");
    printf("  Você acertou %d de 10 questões.\n", acertos);
    printf("=====================================\n");

    return 0;
}
