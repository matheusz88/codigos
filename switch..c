#include <stdio.h>
#include <stdio.h>

int main() {
  int num1, num2;
  char operador;


  printf("Digite o primeiro numero: ");
  scanf("%i", &num1);

  printf("Digite o operador (+, -, *, /): ");
  scanf(" %c", &operador);

  printf("Digite o segundo numero: ");
  scanf("%i", &num2);


  switch (operador) {
    case '+':
      printf("%i + %i = %i\n", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%i - %i = %i\n", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%i * %i= %i\n", num1, num2, num1 * num2);
      break;
    case '/':
      if (num2 == 0) {
      } else {
        printf("%i/ %.i = %i\n", num1, num2, num1 / num2);
      }

  }
  return 0;
}
