// UTILIZANDO O QUE APRENDEMOS SOBRE PONTEIROS, MUDE O VALOR DE UMA VARIÁVEL ATRAVÉS DE UM PONTEIRO.
#include <stdio.h>

int main() {

     int messi = 10;
     int *jaiminho = NULL; // Declarando um ponteiro do tipo inteiro e inicializando com NULL, pois é uma boa prática para evitar ponteiros pendentes e lixo de memória.
     
     int *jacinto;

     printf("messi: %d\n", messi); // Imprime o valor inicial de messi, que é 10.
     printf("jaiminho: %p\n", jaiminho); // Imprime o valor do ponteiro jaiminho, que é NULL (0x0).
     printf("jacinto: %p\n", jacinto); // Imprime o valor do ponteiro jacinto, que é indeterminado (pode conter lixo de memória).

     jaiminho = &messi; // Atribui o endereço de messi ao ponteiro jaiminho, agora jaiminho aponta para messi.

     jacinto = jaiminho; // Atribui o valor do ponteiro jaiminho (que é o endereço de messi) ao ponteiro jacinto, agora jacinto também aponta para messi.

     *jacinto = 8; // Através do ponteiro jacinto, que aponta para messi, alteramos o valor de messi para 8. 

     printf("messi: %d\n", messi); // Imprime o valor atualizado de messi, que agora é 8.
     printf("jaiminho: %p\n", jaiminho); // Imprime o valor do ponteiro jaiminho, que ainda é o endereço de messi.
     printf("jacinto: %p\n", jacinto); // Imprime o valor do ponteiro jacinto, que também é o endereço de messi.

     return 0;
}