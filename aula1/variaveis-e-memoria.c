#include <stdio.h>

int main() {
     int a = 10;

     int b, c;

     // &a é o endereço de memória onde a variável a está armazenada
     // a é o valor armazenado na variável a
     //%p é o formato para imprimir um endereço de memória
     //%d é o formato para imprimir um inteiro
     
     printf("&a = %p, a = %d\n", &a, a);
     printf("&b = %p, b = %d\n", &b, b);
     printf("&c = %p, c = %d\n", &c, c);

     b = 20; 
     c = a + b;

     printf("&a = %p, a = %d\n", &a, a);
     printf("&b = %p, b = %d\n", &b, b);
     printf("&c = %p, c = %d\n", &c, c);

     return 0;
}