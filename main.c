/******************************************************************************

 Solicite que o usuário informe uma data, 
 solicitando de forma separada o ano, o mês e o dia (nesta ordem), todos valores inteiros. 
 O ano pode ser qualquer valor entre 0 e 2022. O mês deve ser um valor entre 1 (inclusive) e 12 (inclusive). 
 O dia deve estar de acordo com o mês informado e, ainda, com o ano (bissexto ou não). 

*******************************************************************************/
#include <stdio.h>


int main() {
    int ano, mes, dia;

    printf("Digite o ano (entre 0 e 2022): ");
    scanf("%d", &ano);

    if (ano < 0 || ano > 2022) {
        printf("Ano inválido.\n");
        return 1; 
    }

    printf("Digite o mês (entre 1 e 12): ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
        return 1; 
    }

    printf("Digite o dia: ");
    scanf("%d", &dia);

    if (dia < 1 || dia > 31) {
        printf("Dia inválido.\n");
        return 1; 
    }

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        printf("Dia inválido para este mês.\n");
        return 1; 
    }

    int max_dias_fevereiro = 28;
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        max_dias_fevereiro = 29;
    }

    if (mes == 2 && (dia < 1 || dia > max_dias_fevereiro)) {
        printf("Dia inválido para este mês.\n");
        return 1; 
    }

    printf("Data válida: %d/%d/%d\n", dia, mes, ano);


    return 0;
}
