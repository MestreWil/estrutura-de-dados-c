#include <stdio.h>
#include <stdlib.h>

int main() {

     int a = 10;

     int *p1 = NULL; // Declarando um ponteiro do tipo inteiro e inicializando com NULL, pois é uma boa prática para evitar ponteiros pendentes e lixo de memória.
     int *p2;

     printf("&a = %p, a = %d\n", &a, a);
     printf("&p1 = %p, p1 = %p\n", &p1, p1);
     // printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1); <- Isso causaria um erro de segmentação, pois p1 é NULL e não aponta para um endereço válido.
     // O erro de segmentação pode ser traduzido como, tentando acessar algo na memoria que não existe
     printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2); //<- Nesse caso, p2 é um ponteiro não inicializado, o que significa que ele pode conter um endereço de memória aleatório (lixo de memória). Acessar *p2 pode resultar em comportamento indefinido, incluindo um possível erro de segmentação.

     // p1 = &p2; // <- Isso aqui não vai funcionar, pois p1 é um ponteiro para inteiro e p2 é um ponteiro para inteiro, ou seja, eles são do mesmo tipo, mas p1 não pode apontar para p2, pois p2 é um ponteiro e não um inteiro. Isso causaria um erro de compilação.

     // p1 = a; // <- Isso aqui também não vai funcionar, pois p1 é um ponteiro para inteiro e a é um inteiro. Atribuir um inteiro diretamente a um ponteiro causaria um erro de compilação, pois os tipos são incompatíveis.
     p1 = &a;
     p2 = p1;
     *p2 = 4;

     printf("&a = %p, a = %d\n", &a, a);
     printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
     printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);

     return 0;
}