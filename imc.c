#include<stdio.h>
#include<string.h>
#include<math.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{

    double altura, peso, imc;

    printf("Digite a altura em metros: ");
    scanf("%lf", &altura);

    printf("Digite o peso em Kg: ");
    limpar_entrada();
    scanf("%lf", &peso);

    imc=peso/pow(altura,2);

    printf("%.2lf\n", imc);

    if(imc <= 18.5){
        printf("Abaixo do peso!\n");
    }else if(imc >= 16.6 && imc <= 24.9){
        printf("Peso ideal! Muito bem!\n");
    }else if(imc >= 25 && imc <= 29.9){
        printf("Levemente acima do peso!\n");
    }else if(imc >= 30 && imc <= 34.9){
        printf("Obesidade grau I!\n");
    }else if(imc >= 35 && imc <= 39.9){
        printf("Obesidade grau II(Severa)!\n");
    }else{
        printf("Obesidade grau III (Morbida)!\n");
    }

    return 0;
}
