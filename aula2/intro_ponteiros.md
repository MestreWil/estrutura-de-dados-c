# Ponteiros

O ponteiro é uma referencia de memoria no computador

## Exemplo de variavel da aula anterior

Imagine que na linguagem de programação de sua preferencia existe um tipo de variavel chamado 'Jogador do Barcelo'
Essa variavel armazena um numero

- vamos instanciar uma variavel dessa

jogador do barcelona messi = 10;

printf("&messi = %p, messi = %d", &messi, messi);

returna

&messi = avenida do messi, messi = 10

Agora imagine que temos um novo tipo de dado, que se chama carteiro de jogador do barcelona, ele vai ser responsavel por enviar cartas/pacotes
apenas para jogadores do barcelona **NENHUM OUTRO TIPO DE JOGADOR O CARTEIRO VAI PODER ENVIAR PACOTES OU CARTAS**

- vamos instanciar uma variavel carteiro do barcelona

carteiro do barcelona jaiminho;

- jaminho vai receber o endereco da memorial de messi

jaiminho = &messi;

- conteudo de um endereco -> \*

(jaiminho) = \_(Avenida do messi) = 10

conteudo [*(jaiminho) = *(avenida do messi)] valor [= messi = 10]
