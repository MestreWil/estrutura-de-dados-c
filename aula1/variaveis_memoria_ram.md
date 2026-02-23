# Variáveis e a Memória RAM (xavecodigng)

### variáveis e a memória

* Em C, cada variavel está associada a:

1. Um nome;
2. Um tipo de dado;
3. Um valor;
4. Um endereço de memória;

* OBS: toda variavel tem um tipo, e um tipo tem um tamnho necessário para ser alocado na memória.
* Por exemplo: um número inteiro ocupa 4 bytes de memoria ram, supondo que você instâncie uma variavel inteira e aloque ela no endereco 3020
* o proximo endereco de memoria disponivel será o 3024, isso pq a variavel int que vc instaciou ira ocupar os espaços [3020, 3021, 3022, 
* 3023]

* & -> endereco de memoria

para compílar o codigo da aula, digite gcc variaveis-e-memoria.c -o <nome-do-programa> no terminal
 
em seguida digite o nome do programa