#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    do {
        // Exibir menu
        printf("Escolha a operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");

        // Ler a escolha do usuário
        printf("Digite o numero da operacao desejada: ");
        scanf(" %c", &operacao);

        // Verificar se o usuário deseja sair
        if (operacao == '5') {
            printf("Programa encerrado. Obrigado!\n");
            break;
        }

        // Ler os dois números
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        // Calcular o resultado com base na operação escolhida
        switch (operacao) {
            case '1':
                resultado = num1 + num2;
                break;
            case '2':
                resultado = num1 - num2;
                break;
            case '3':
                resultado = num1 * num2;
                break;
            case '4':
                // Verificar se o divisor é zero
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Erro: divisao por zero!\n");
                    continue;  // Reiniciar o loop
                }
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                continue;  // Reiniciar o loop
        }

        // Exibir o resultado
        printf("Resultado: %.2f\n", resultado);

        // Verificar se o usuário deseja continuar
        printf("Deseja fazer outra operacao? (S/N): ");
        char continuar;
        scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            printf("Programa encerrado. Obrigado!\n");
            break;
        }

    } while (1);  // Loop infinito

    return 0;
}
