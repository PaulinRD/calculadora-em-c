#include <stdio.h>


float soma(float num1, float num2) {
    return num1 + num2;
}


float subtracao(float num1, float num2) {
    return num1 - num2;
}


float multiplicacao(float num1, float num2) {
    return num1 * num2;
}


float divisao(float num1, float num2) {
    return num1 / num2;
}

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite a operação que deseja realizar (+, -, *, /): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = soma(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            resultado = divisao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;
}
