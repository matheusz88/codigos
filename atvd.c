#include <stdio.h>

int main() {
double valor_compra, valor_pago, troco;

    int i;

    printf("Digite o valor da compra: R$ ");
    scanf("%lf", &valor_compra);

   printf("digite o valor pago");
   scanf("%lf", &valor_pago);

   if ( valor_pago - valor_compra < 0){
        printf("Valor pago é insuficiente.\n");
        return 1;
    }

    troco = valor_pago - valor_compra;
    printf("Troco: R$ %.2f\n", troco);

    printf("Cédulas/moedas para o troco:\n");

    if(troco >= 100){
        i = troco / 100;
        troco = troco - i*100;
        printf("%i x 100", i);

    }if(troco >= 50){
     i = troco / 50;
        troco = troco - i*50;
        printf("%i x 50", i);

       }if(troco >= 20){
     i = troco / 20;
        troco = troco - i*20;
        printf("%i x 20", i);

         }if(troco >= 10){
     i = troco / 10;
        troco = troco - i*10;
        printf("%i x 10", i);


         }if(troco >= 5){
     i = troco / 5;
        troco = troco - i*5;
        printf("%i x 5", i);



         }if(troco >= 2){
     i = troco / 2;
        troco = troco - i*2;
        printf("%i x 2", i);



}
    return 0;
}

