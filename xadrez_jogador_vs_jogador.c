/*Somente eu componho o grupo, meu nome é Miguel Mendonça da Conceição e meu número usp é 11319660.
 * Criei todo o arquivo no Apache NetBeans, a IDE, versão 12.4, e rodou perfeitamente, no runcodes aparecm mensagens de erro e não mostra se roda ou não, no entanto testei num compilador online e também roda lá, logo acredito que esteja rodando o arquivo para quem testar, reforço q no NetBeans não aparece mensagem de erro
 * 
 *As funções que descrevem o movimento das peças(mov_cav() para mover os cavaleiros, mov_bis() para mover os bispos, mov_tor() para mover as torres)
 *A função trio() verifica se foi formado uma fileira de 3 peças de mesma cor, fazendo quem jogou ganhar
 *A função print_board() printa o tabuleiro (a lista board é o tabuleiro)
 *A função seis_primeiras() executa as 6 primeiras jogadas, ou seja, as jogadas que são usadas para colocar as peças no tabuleiro
 * A função jogadas() executa da jogada 7 até a jogada 60, se na jogada 61 ninguém tiver ganho significa que já foram 60 jogadas sem ninguém ganhar, ou seja, cada jogador jogou 30 vezes (contando 3 jogadas de cada para colcar as peças) e ninguém ganhou, logo é empate
 * As peças denominadas por letras maiúsculas são brancas, e as minúsculas pretas, k é pro cavaleiro, r pra torre e b pro bispo
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char jogada[4];
    

    int resultado = 0; //essa variavel determina se o jogo termina ou não, se ela virar 1 o jogo termina, enquanto for 0 o jogo continua
    char board[9] = {'.','.','.','.','.','.','.','.','.'};
    
    char p_a[6] = {'K','B','R','k','b','r'};//"p_a" é abreviação de "pieces_alfa", alfa de alfabeto
//----------------------------------------------------------------------------------------------
    //essa funcao verifica se foi formado o trio de uma cor
    void trio(){
        //0  1  2
        //3  4  5
        //6  7  8
        
    //trio vertical 1 (0 3 6)
    if((board[0] == p_a[0] || board[0] == p_a[1] || board[0] == p_a[2]) && (board[3] == p_a[0] || board[3] == p_a[1] || board[3] == p_a[2]) && (board[6] == p_a[0] || board[6] == p_a[1] || board[6] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[0] == p_a[3] || board[0] == p_a[4] || board[0] == p_a[5]) && (board[3] == p_a[3] || board[3] == p_a[4] || board[3] == p_a[5]) && (board[6] == p_a[3] || board[6] == p_a[4] || board[6] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}   
    
    //trio vertical 2 (1 4 7)
    if((board[1] == p_a[0] || board[1] == p_a[1] || board[1] == p_a[2]) && (board[4] == p_a[0] || board[4] == p_a[1] || board[4] == p_a[2]) && (board[7] == p_a[0] || board[7] == p_a[1] || board[7] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[1] == p_a[3] || board[1] == p_a[4] || board[1] == p_a[5]) && (board[4] == p_a[3] || board[4] == p_a[4] || board[4] == p_a[5]) && (board[7] == p_a[3] || board[7] == p_a[4] || board[7] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}    
    
    //trio vertical 3
    if((board[2] == p_a[0] || board[2] == p_a[1] || board[2] == p_a[2]) && (board[5] == p_a[0] || board[5] == p_a[1] || board[5] == p_a[2]) && (board[8] == p_a[0] || board[8] == p_a[1] || board[8] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[2] == p_a[3] || board[2] == p_a[4] || board[2] == p_a[5]) && (board[5] == p_a[3] || board[5] == p_a[4] || board[5] == p_a[5]) && (board[8] == p_a[3] || board[8] == p_a[4] || board[8] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}   
    
    //trio horizontal 1
    if((board[0] == p_a[0] || board[0] == p_a[1] || board[0] == p_a[2]) && (board[1] == p_a[0] || board[1] == p_a[1] || board[1] == p_a[2]) && (board[2] == p_a[0] || board[2] == p_a[1] || board[2] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[0] == p_a[3] || board[0] == p_a[4] || board[0] == p_a[5]) && (board[1] == p_a[3] || board[1] == p_a[4] || board[1] == p_a[5]) && (board[2] == p_a[3] || board[2] == p_a[4] || board[2] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}   
    
    //trio horizontal 2
    if((board[3] == p_a[0] || board[3] == p_a[1] || board[3] == p_a[2]) && (board[4] == p_a[0] || board[4] == p_a[1] || board[4] == p_a[2]) && (board[5] == p_a[0] || board[5] == p_a[1] || board[5] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[3] == p_a[3] || board[3] == p_a[4] || board[3] == p_a[5]) && (board[4] == p_a[3] || board[4] == p_a[4] || board[4] == p_a[5]) && (board[5] == p_a[3] || board[5] == p_a[4] || board[5] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}    
    
    //trio horizontal 3
    if((board[6] == p_a[0] || board[6] == p_a[1] || board[6] == p_a[2]) && (board[7] == p_a[0] || board[7] == p_a[1] || board[7] == p_a[2]) && (board[8] == p_a[0] || board[8] == p_a[1] || board[8] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[6] == p_a[3] || board[6] == p_a[4] || board[6] == p_a[5]) && (board[7] == p_a[3] || board[7] == p_a[4] || board[7] == p_a[5]) && (board[8] == p_a[3] || board[8] == p_a[4] || board[8] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}    
    
    //diagonal principal 0 4 8
    if((board[0] == p_a[0] || board[0] == p_a[1] || board[0] == p_a[2]) && (board[4] == p_a[0] || board[4] == p_a[1] || board[4] == p_a[2]) && (board[8] == p_a[0] || board[8] == p_a[1] || board[8] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[0] == p_a[3] || board[0] == p_a[4] || board[0] == p_a[5]) && (board[4] == p_a[3] || board[4] == p_a[4] || board[4] == p_a[5]) && (board[8] == p_a[3] || board[8] == p_a[4] || board[8] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}    
    
    //diagonal secundaria 2 4 6
    if((board[2] == p_a[0] || board[2] == p_a[1] || board[2] == p_a[2]) && (board[4] == p_a[0] || board[4] == p_a[1] || board[4] == p_a[2]) && (board[6] == p_a[0] || board[6] == p_a[1] || board[6] == p_a[2])){printf("Você venceu !!!\n"); exit(0);}
    if((board[2] == p_a[3] || board[2] == p_a[4] || board[2] == p_a[5]) && (board[4] == p_a[3] || board[4] == p_a[4] || board[4] == p_a[5]) && (board[6] == p_a[3] || board[6] == p_a[4] || board[6] == p_a[5])){printf("Você venceu !!!\n"); exit(0);}    
    
    }
    
    //essa funcao determina o movimento do cavalo
    void mov_cav(){
        //AS SEGUINTES 9 PARTES SÃO AS JOGADAS DO CAVALEIRO BRANCO
        //cavaleiro branco partindo de a1 (0-7 0-5)
        if(board[0] == 'K' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '3'){board[0] = '.'; board[7] = 'K';}//a1b3
        if(board[0] == 'K' && board[5] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '2'){board[0] = '.'; board[5] = 'K';}//a1c2
        
        //cavaleiro branco partindo de a2 (3-2 3-8)
        if(board[3] == 'K' && board[2] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '1' ){board[3] = '.'; board[2] = 'K';}//a2c1
        if(board[3] == 'K' && board[8] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '3' ){board[3] = '.'; board[8] = 'K';}//a2c3
        
        //cavaleiro branco partindo de a3 (6-1 6-5)
        if(board[6] == 'K' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '1' ){board[6] = '.'; board[1] = 'K';}//a3b1
        if(board[6] == 'K' && board[5] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '2' ){board[6] = '.'; board[5] = 'K';}//a3c2
        
        //cavaleiro branco partindo de b1 (1-6 1-8)
        if(board[1] == 'K' && board[6] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '3' ){board[1] = '.'; board[6] = 'K';}//b1a3
        if(board[1] == 'K' && board[8] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '3' ){board[1] = '.'; board[8] = 'K';}//b1c3
        
        //cavaleiro branco partindo de b2 - N ROLA
        //if(board[4] == 'K' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3' ){printf("O cavaleiro não pode partir de b2, escolha outro lance: "); mov_cav();}//b2
        //if(board[4] == 'K' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '2' ){printf("O cavaleiro não pode partir de b2, escolha outro lance: "); mov_cav();}//b2
        
        //cavaleiro branco partindo de b3 (7-0 7-2)
        if(board[7] == 'K' && board[0] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '1' ){board[7] = '.'; board[0] = 'K';}//b3a1
        if(board[7] == 'K' && board[2] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '1' ){board[7] = '.'; board[2] = 'K';}//b3c1
        
        //cavaleiro branco partindo de c1 (2-3 2-7)
        if(board[2] == 'K' && board[3] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '2' ){board[2] = '.'; board[3] = 'K';}//c1a2
        if(board[2] == 'K' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '3' ){board[2] = '.'; board[7] = 'K';}//c1b3
        
        //cavaleiro branco partindo de c2 (5-0 5-6)
        if(board[5] == 'K' && board[0] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '1' ){board[5] = '.'; board[0] = 'K';}//c2a1
        if(board[5] == 'K' && board[6] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '3' ){board[5] = '.'; board[6] = 'K';}//c2a3
        
        //cavaleiro branco partindo de c3 (8-1 8-3)
        if(board[8] == 'K' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '1' ){board[8] = '.'; board[1] = 'K';}//c3b1
        if(board[8] == 'K' && board[3] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '2' ){board[8] = '.'; board[3] = 'K';}//c3a2
        
        //AS SEGUINTES 9 PARTES SÃO AS JOGADAS DO CAVALEIRO PRETO
        //cavaleiro preto partindo de a1 (0-7 0-5)
        if(board[0] == 'k' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '3'){board[0] = '.'; board[7] = 'k';}//a1b3
        if(board[0] == 'k' && board[5] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '2'){board[0] = '.'; board[5] = 'k';}//a1c2
        
        //cavaleiro preto partindo de a2 (3-2 3-8)
        if(board[3] == 'k' && board[2] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '1' ){board[3] = '.'; board[2] = 'k';}//a2c1
        if(board[3] == 'k' && board[8] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '3' ){board[3] = '.'; board[8] = 'k';}//a2c3
        
        //cavaleiro preto partindo de a3 (6-1 6-5)
        if(board[6] == 'k' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '1' ){board[6] = '.'; board[1] = 'k';}//a3b1
        if(board[6] == 'k' && board[5] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '2' ){board[6] = '.'; board[5] = 'k';}//a3c2
        
        //cavaleiro preto partindo de b1 (1-6 1-8)
        if(board[1] == 'k' && board[6] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '3' ){board[1] = '.'; board[6] = 'k';}//b1a3
        if(board[1] == 'k' && board[8] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '3' ){board[1] = '.'; board[8] = 'k';}//b1c3
        
        //cavaleiro preto partindo de b2 - N ROLA
        //if(board[4] == 'k' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3' ){printf("O cavaleiro não pode partir de b2, escolha outro lance: "); mov_cav();}//b2
        //if(board[4] == 'k' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '2' ){printf("O cavaleiro não pode partir de b2, escolha outro lance: "); mov_cav();}//b2
        
        //cavaleiro preto partindo de b3 (7-0 7-2)
        if(board[7] == 'k' && board[0] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '1' ){board[7] = '.'; board[0] = 'k';}//b3a1
        if(board[7] == 'k' && board[2] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '1' ){board[7] = '.'; board[2] = 'k';}//b3c1
        
        //cavaleiro preto partindo de c1 (2-3 2-7)
        if(board[2] == 'k' && board[3] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '2' ){board[2] = '.'; board[3] = 'k';}//c1a2
        if(board[2] == 'k' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '3' ){board[2] = '.'; board[7] = 'k';}//c1b3
        
        //cavaleiro preto partindo de c2 (5-0 5-6)
        if(board[5] == 'k' && board[0] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '1' ){board[5] = '.'; board[0] = 'k';}//c2a1
        if(board[5] == 'k' && board[6] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '3' ){board[5] = '.'; board[6] = 'k';}//c2a3
        
        //cavaleiro preto partindo de c3 (8-1 8-3)
        if(board[8] == 'k' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '1' ){board[8] = '.'; board[1] = 'k';}//c3b1
        if(board[8] == 'k' && board[3] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '2' ){board[8] = '.'; board[3] = 'k';}//c3a2
        
       
    }
    
    //essa funcao determina o movimento do bispo
    void mov_bis(){
    //BISPO BRANCO
    
    //a1b2 a1c3
    if(board[0] == 'B' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '2'){board[0] = '.'; board[4] = 'B';}//a1b2
    if(board[0] == 'B' && board[4] == '.' && board[8] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '3'){board[0] = '.'; board[8] = 'B';}//a1c3

    //a2b1 a2b3
    if(board[3] == 'B' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '1'){board[3] = '.'; board[1] = 'B';}//a2b1
    if(board[3] == 'B' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3'){board[3] = '.'; board[7] = 'B';}//a2b3
    
    //a3b2 a3c1
    if(board[6] == 'B' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '2'){board[6] = '.'; board[4] = 'B';}//a3b2
    if(board[6] == 'B' && board[2] == '.' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '1'){board[6] = '.'; board[2] = 'B';}//a3c1
    
    //b1a2 b1c2
    if(board[1] == 'B' && board[3] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '2'){board[1] = '.'; board[3] = 'B';}//b1a2
    if(board[1] == 'B' && board[5] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '2'){board[1] = '.'; board[5] = 'B';}//b1c2
    
    //b2a1 b2a3 b2c1 b2c3
    if(board[4] == 'B' && board[0] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '1'){board[4] = '.'; board[0] = 'B';}//b2a1
    if(board[4] == 'B' && board[6] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '3'){board[4] = '.'; board[6] = 'B';}//b2a3
    if(board[4] == 'B' && board[2] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '1'){board[4] = '.'; board[2] = 'B';}//b2c1
    if(board[4] == 'B' && board[8] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '3'){board[4] = '.'; board[8] = 'B';}//b2c3
    
    //b3a2 b3c2
    if(board[7] == 'B' && board[3] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '2'){board[7] = '.'; board[3] = 'B';}//b3a2
    if(board[7] == 'B' && board[5] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '2'){board[7] = '.'; board[5] = 'B';}//b1c2
    
    //c1b2 c1a3
    if(board[8] == 'B' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '2'){board[2] = '.'; board[4] = 'B';}//c1b2
    if(board[2] == 'B' && board[6] == '.' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '3'){board[2] = '.'; board[6] = 'B';}//c1a3

    //c2b1 c2b3
    if(board[5] == 'B' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '1'){board[5] = '.'; board[1] = 'B';}//a2b1
    if(board[5] == 'B' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3'){board[5] = '.'; board[7] = 'B';}//a2b3
    
    //c3b2 c3a1
    if(board[8] == 'B' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '2'){board[8] = '.'; board[4] = 'B';}//a3b2
    if(board[8] == 'B' && board[0] == '.' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '1'){board[8] = '.'; board[0] = 'B';}//a3c1
    
    //AQUI ACABA O BISPO BRANCO E COMEÇA O BISPO PRETO
    
    //a1b2 a1c3
    if(board[0] == 'b' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '2'){board[0] = '.'; board[4] = 'b';}//a1b2
    if(board[0] == 'b' && board[4] == '.' && board[8] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '3'){board[0] = '.'; board[8] = 'b';}//a1c3

    //a2b1 a2b3
    if(board[3] == 'b' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '1'){board[3] = '.'; board[1] = 'b';}//a2b1
    if(board[3] == 'b' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3'){board[3] = '.'; board[7] = 'b';}//a2b3
    
    //a3b2 a3c1
    if(board[6] == 'b' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '2'){board[6] = '.'; board[4] = 'b';}//a3b2
    if(board[6] == 'b' && board[2] == '.' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '1'){board[6] = '.'; board[2] = 'b';}//a3c1
    
    //b1a2 b1c2
    if(board[1] == 'b' && board[3] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '2'){board[1] = '.'; board[3] = 'b';}//b1a2
    if(board[1] == 'b' && board[5] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '2'){board[1] = '.'; board[5] = 'b';}//b1c2
    
    //b2a1 b2a3 b2c1 b2c3
    if(board[4] == 'b' && board[0] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '1'){board[4] = '.'; board[0] = 'b';}//b2a1
    if(board[4] == 'b' && board[6] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '3'){board[4] = '.'; board[6] = 'b';}//b2a3
    if(board[4] == 'b' && board[2] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '1'){board[4] = '.'; board[2] = 'b';}//b2c1
    if(board[4] == 'b' && board[8] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '3'){board[4] = '.'; board[8] = 'b';}//b2c3
    
    //b3a2 b3c2
    if(board[7] == 'b' && board[3] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '2'){board[7] = '.'; board[3] = 'b';}//b3a2
    if(board[7] == 'b' && board[5] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '2'){board[7] = '.'; board[5] = 'b';}//b1c2
    
    //c1b2 c1a3
    if(board[8] == 'b' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '2'){board[2] = '.'; board[4] = 'b';}//c1b2
    if(board[2] == 'b' && board[6] == '.' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '3'){board[2] = '.'; board[6] = 'b';}//c1a3

    //c2b1 c2b3
    if(board[5] == 'b' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '1'){board[5] = '.'; board[1] = 'b';}//a2b1
    if(board[5] == 'b' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3'){board[5] = '.'; board[7] = 'b';}//a2b3
    
    //c3b2 c3a1
    if(board[8] == 'b' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '2'){board[8] = '.'; board[4] = 'b';}//a3b2
    if(board[8] == 'b' && board[0] == '.' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '1'){board[8] = '.'; board[0] = 'b';}//a3c1
    
    
    
}
    
    //essa funcao determina o movimento da torre
    void mov_tor(){
    
    //TORRE BRANCA
    
    //a1a2 a1a3 a1b1 a1c1
    if(board[0] == 'R' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '2'){board[0] = '.'; board[3] = 'R';}//a1a2
    if(board[0] == 'R' && board[6] == '.' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '3'){board[0] = '.'; board[6] = 'R';}//a1a3
    if(board[0] == 'R' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '1'){board[0] = '.'; board[1] = 'R';}//a1b1
    if(board[0] == 'R' && board[2] == '.' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '1'){board[0] = '.'; board[2] = 'R';}//a1c1
    
    //a2a1 a2a3 a2b2 a2c2
    if(board[3] == 'R' && board[0] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '1'){board[3] = '.'; board[0] = 'R';}//a2a1
    if(board[3] == 'R' && board[6] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '3'){board[3] = '.'; board[6] = 'R';}//a2a3
    if(board[3] == 'R' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '2'){board[3] = '.'; board[4] = 'R';}//a2b2
    if(board[3] == 'R' && board[5] == '.' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '2'){board[3] = '.'; board[5] = 'R';}//a2c2

    //a3a1 a3a2 a3b3 a3c3
    if(board[6] == 'R' && board[0] == '.' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '1'){board[6] = '.'; board[0] = 'R';}//a3a1
    if(board[6] == 'R' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '2'){board[6] = '.'; board[3] = 'R';}//a3a2
    if(board[6] == 'R' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '3'){board[6] = '.'; board[7] = 'R';}//a3b3
    if(board[6] == 'R' && board[8] == '.' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '3'){board[6] = '.'; board[8] = 'R';}//a3c3

    //b1a1 b1b2 b1b3 b1c1
    if(board[1] == 'R' && board[0] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '1'){board[1] = '.'; board[0] = 'R';}//b1a1
    if(board[1] == 'R' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '2'){board[1] = '.'; board[4] = 'R';}//b1b2
    if(board[1] == 'R' && board[7] == '.' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '3'){board[1] = '.'; board[7] = 'R';}//b1b3
    if(board[1] == 'R' && board[2] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '1'){board[1] = '.'; board[2] = 'R';}//b1c1
    
    //b2a2 b2b1 b2b3 b2c2
    if(board[4] == 'R' && board[3] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '2'){board[4] = '.'; board[3] = 'R';}//b2a2
    if(board[4] == 'R' && board[1] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '1'){board[4] = '.'; board[1] = 'R';}//b2b1
    if(board[4] == 'R' && board[7] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3'){board[4] = '.'; board[7] = 'R';}//b2b3
    if(board[4] == 'R' && board[5] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '2'){board[4] = '.'; board[5] = 'R';}//b2c2
    
    //b3a3 b3b1 b3b2 b3c3
    if(board[7] == 'R' && board[6] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '3'){board[7] = '.'; board[6] = 'R';}//b3a3
    if(board[7] == 'R' && board[1] == '.' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '1'){board[7] = '.'; board[1] = 'R';}//b3b1
    if(board[7] == 'R' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '2'){board[7] = '.'; board[4] = 'R';}//b3b2
    if(board[7] == 'R' && board[8] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '3'){board[7] = '.'; board[8] = 'R';}//b3c3
    
    //c1a1 c1b1 c1c2 c1c3
    if(board[2] == 'R' && board[0] == '.' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '1'){board[2] = '.'; board[0] = 'R';}//c1a1
    if(board[2] == 'R' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '1'){board[2] = '.'; board[1] = 'R';}//c1b1
    if(board[2] == 'R' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '2'){board[2] = '.'; board[5] = 'R';}//c1c2
    if(board[2] == 'R' && board[8] == '.' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '3'){board[2] = '.'; board[8] = 'R';}//c1c3
    
    //c2a2 c2b2 c2c1 c2c3
    if(board[5] == 'R' && board[3] == '.' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '2'){board[5] = '.'; board[3] = 'R';}//c2a2
    if(board[5] == 'R' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '2'){board[5] = '.'; board[4] = 'R';}//c2b2
    if(board[5] == 'R' && board[2] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '1'){board[5] = '.'; board[2] = 'R';}//c2c1
    if(board[5] == 'R' && board[8] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '3'){board[5] = '.'; board[8] = 'R';}//c2c3
    
    //c3a3 c3b3 c3c1 c3c2
    if(board[8] == 'R' && board[6] == '.' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '3'){board[8] = '.'; board[6] = 'R';}//c3a3
    if(board[8] == 'R' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '3'){board[8] = '.'; board[7] = 'R';}//c3b3
    if(board[8] == 'R' && board[2] == '.' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '1'){board[8] = '.'; board[2] = 'R';}//c3c1
    if(board[8] == 'R' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '2'){board[8] = '.'; board[5] = 'R';}//c3c2
    
    //AQUI ACABA A TORRE BRANCA E COMEÇA A TORRE PRETA
    //TORRE PRETA
    
    //a1a2 a1a3 a1b1 a1c1
    if(board[0] == 'r' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '2'){board[0] = '.'; board[3] = 'r';}//a1a2
    if(board[0] == 'r' && board[6] == '.' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '3'){board[0] = '.'; board[6] = 'r';}//a1a3
    if(board[0] == 'r' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '1'){board[0] = '.'; board[1] = 'r';}//a1b1
    if(board[0] == 'r' && board[2] == '.' && board[1] == '.' && jogada[0] == 'a' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '1'){board[0] = '.'; board[2] = 'r';}//a1c1
    
    //a2a1 a2a3 a2b2 a2c2
    if(board[3] == 'r' && board[0] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '1'){board[3] = '.'; board[0] = 'r';}//a2a1
    if(board[3] == 'r' && board[6] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '3'){board[3] = '.'; board[6] = 'r';}//a2a3
    if(board[3] == 'r' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '2'){board[3] = '.'; board[4] = 'r';}//a2b2
    if(board[3] == 'r' && board[5] == '.' && board[4] == '.' && jogada[0] == 'a' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '2'){board[3] = '.'; board[5] = 'r';}//a2c2

    //a3a1 a3a2 a3b3 a3c3
    if(board[6] == 'r' && board[0] == '.' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '1'){board[6] = '.'; board[0] = 'r';}//a3a1
    if(board[6] == 'r' && board[3] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '2'){board[6] = '.'; board[3] = 'r';}//a3a2
    if(board[6] == 'r' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '3'){board[6] = '.'; board[7] = 'r';}//a3b3
    if(board[6] == 'r' && board[8] == '.' && board[7] == '.' && jogada[0] == 'a' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '3'){board[6] = '.'; board[8] = 'r';}//a3c3

    //b1a1 b1b2 b1b3 b1c1
    if(board[1] == 'r' && board[0] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '1'){board[1] = '.'; board[0] = 'r';}//b1a1
    if(board[1] == 'r' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '2'){board[1] = '.'; board[4] = 'r';}//b1b2
    if(board[1] == 'r' && board[7] == '.' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '3'){board[1] = '.'; board[7] = 'r';}//b1b3
    if(board[1] == 'r' && board[2] == '.' && jogada[0] == 'b' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '1'){board[1] = '.'; board[2] = 'r';}//b1c1
    
    //b2a2 b2b1 b2b3 b2c2
    if(board[4] == 'r' && board[3] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '2'){board[4] = '.'; board[3] = 'r';}//b2a2
    if(board[4] == 'r' && board[1] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '1'){board[4] = '.'; board[1] = 'r';}//b2b1
    if(board[4] == 'r' && board[7] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '3'){board[4] = '.'; board[7] = 'r';}//b2b3
    if(board[4] == 'r' && board[5] == '.' && jogada[0] == 'b' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '2'){board[4] = '.'; board[5] = 'r';}//b2c2
    
    //b3a3 b3b1 b3b2 b3c3
    if(board[7] == 'r' && board[6] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '3'){board[7] = '.'; board[6] = 'r';}//b3a3
    if(board[7] == 'r' && board[1] == '.' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '1'){board[7] = '.'; board[1] = 'r';}//b3b1
    if(board[7] == 'r' && board[4] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '2'){board[7] = '.'; board[4] = 'r';}//b3b2
    if(board[7] == 'r' && board[8] == '.' && jogada[0] == 'b' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '3'){board[7] = '.'; board[8] = 'r';}//b3c3
    
    //c1a1 c1b1 c1c2 c1c3
    if(board[2] == 'r' && board[0] == '.' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'a' && jogada[3] == '1'){board[2] = '.'; board[0] = 'r';}//c1a1
    if(board[2] == 'r' && board[1] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'b' && jogada[3] == '1'){board[2] = '.'; board[1] = 'r';}//c1b1
    if(board[2] == 'r' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '2'){board[2] = '.'; board[5] = 'r';}//c1c2
    if(board[2] == 'r' && board[8] == '.' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '1' && jogada[2] == 'c' && jogada[3] == '3'){board[2] = '.'; board[8] = 'r';}//c1c3
    
    //c2a2 c2b2 c2c1 c2c3
    if(board[5] == 'r' && board[3] == '.' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'a' && jogada[3] == '2'){board[5] = '.'; board[3] = 'r';}//c2a2
    if(board[5] == 'r' && board[4] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'b' && jogada[3] == '2'){board[5] = '.'; board[4] = 'r';}//c2b2
    if(board[5] == 'r' && board[2] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '1'){board[5] = '.'; board[2] = 'r';}//c2c1
    if(board[5] == 'r' && board[8] == '.' && jogada[0] == 'c' && jogada[1] == '2' && jogada[2] == 'c' && jogada[3] == '3'){board[5] = '.'; board[8] = 'r';}//c2c3
    
    //c3a3 c3b3 c3c1 c3c2
    if(board[8] == 'r' && board[6] == '.' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'a' && jogada[3] == '3'){board[8] = '.'; board[6] = 'r';}//c3a3
    if(board[8] == 'r' && board[7] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'b' && jogada[3] == '3'){board[8] = '.'; board[7] = 'r';}//c3b3
    if(board[8] == 'r' && board[2] == '.' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '1'){board[8] = '.'; board[2] = 'r';}//c3c1
    if(board[8] == 'r' && board[5] == '.' && jogada[0] == 'c' && jogada[1] == '3' && jogada[2] == 'c' && jogada[3] == '2'){board[8] = '.'; board[5] = 'r';}//c3c2
    
    
    
    
    
}
    
    //essa printa o campo do jogo
    void print_board(){
    int i, j, k;
    printf("1 ");
    for(i=0; i<3; i++){printf("%c", board[i]);}printf("\n");
    printf("2 ");
    for(j=3; j<6; j++){printf("%c", board[j]);}printf("\n");
    printf("3 ");
    for(k=6; k<9; k++){printf("%c", board[k]);}printf("\n");
    printf("  abc\n");
    return;
}
    
    //essa funcao executa as 6 primeiras jogadas, as jogadas nas quais as peças são inseridas no campo
    void seis_primeiras(){
    char casa1[3], casa2[3], casa3[3], casa4[3], casa5[3], casa6[3];
    printf("As peças se codificam em 3 digitos, seguidos, o primeiro é a coordenada-letra, o segundo é a coordenada-número e o terceiro é a peça-cor,\nse a peça cor for maiuscula ela é branca, se for minuscula ela é preta,por exemplo, o cavaleiro branco em a1 é 'a1K', o bispo preto em c2 é 'c2b'\n(bisbo é um B ou b, cavaleiro é um K ou k, e torre é R ou r)\n");
    printf("\nDigite a primeira jogada: ");
    
    //cada variavel "casa" corresponde a uma jogada, ou seja, "casa1" é a primeira jogada, casa2 a segunda e assim por diante até a sexta jogada, quando todas as peças estão no tabuleiro
    
    //PRIMEIRA JOGADA
    scanf("%s", &casa1);
    if (casa1 != "mlk"){
        //board[0] = pieces_alfa[0];
        //possibilidades do cavaleiro, bispo e torre na ordem a1 a2 a3 b1 b2 b3 c1 c2 c3
        if(casa1[0] == 'a' & casa1[1] == '1' & casa1[2] == 'K'){board[0] = p_a[0];} //aiK
        if(casa1[0] == 'a' & casa1[1] == '1' & casa1[2] == 'B'){board[0] = p_a[1];} //a1B
        if(casa1[0] == 'a' & casa1[1] == '1' & casa1[2] == 'R'){board[0] = p_a[2];} //a1R
        if(casa1[0] == 'a' & casa1[1] == '2' & casa1[2] == 'K'){board[3] = p_a[0];} //a2K
        if(casa1[0] == 'a' & casa1[1] == '2' & casa1[2] == 'B'){board[3] = p_a[1];} //a2B
        if(casa1[0] == 'a' & casa1[1] == '2' & casa1[2] == 'R'){board[3] = p_a[2];} //a2R
        if(casa1[0] == 'a' & casa1[1] == '3' & casa1[2] == 'K'){board[6] = p_a[0];} //a3K
        if(casa1[0] == 'a' & casa1[1] == '3' & casa1[2] == 'B'){board[6] = p_a[1];} //a3B
        if(casa1[0] == 'a' & casa1[1] == '3' & casa1[2] == 'R'){board[6] = p_a[2];} //a3R
        if(casa1[0] == 'b' & casa1[1] == '1' & casa1[2] == 'K'){board[1] = p_a[0];} //b1K
        if(casa1[0] == 'b' & casa1[1] == '1' & casa1[2] == 'B'){board[1] = p_a[1];} //b1B
        if(casa1[0] == 'b' & casa1[1] == '1' & casa1[2] == 'R'){board[1] = p_a[2];} //b1R
        if(casa1[0] == 'b' & casa1[1] == '2' & casa1[2] == 'K'){board[4] = p_a[0];} //b2K
        if(casa1[0] == 'b' & casa1[1] == '2' & casa1[2] == 'B'){board[4] = p_a[1];} //b2B
        if(casa1[0] == 'b' & casa1[1] == '2' & casa1[2] == 'R'){board[4] = p_a[2];} //b2R
        if(casa1[0] == 'b' & casa1[1] == '3' & casa1[2] == 'K'){board[7] = p_a[0];} //b3K
        if(casa1[0] == 'b' & casa1[1] == '3' & casa1[2] == 'B'){board[7] = p_a[1];} //b3B
        if(casa1[0] == 'b' & casa1[1] == '3' & casa1[2] == 'R'){board[7] = p_a[2];} //b3R
        if(casa1[0] == 'c' & casa1[1] == '1' & casa1[2] == 'K'){board[2] = p_a[0];} //c1K
        if(casa1[0] == 'c' & casa1[1] == '1' & casa1[2] == 'B'){board[2] = p_a[1];} //c1B
        if(casa1[0] == 'c' & casa1[1] == '1' & casa1[2] == 'R'){board[2] = p_a[2];} //c1R
        if(casa1[0] == 'c' & casa1[1] == '2' & casa1[2] == 'K'){board[5] = p_a[0];} //c2K
        if(casa1[0] == 'c' & casa1[1] == '2' & casa1[2] == 'B'){board[5] = p_a[1];} //c2B
        if(casa1[0] == 'c' & casa1[1] == '2' & casa1[2] == 'R'){board[5] = p_a[2];} //c2R
        if(casa1[0] == 'c' & casa1[1] == '3' & casa1[2] == 'K'){board[8] = p_a[0];} //c3K
        if(casa1[0] == 'c' & casa1[1] == '3' & casa1[2] == 'B'){board[8] = p_a[1];} //c3B
        if(casa1[0] == 'c' & casa1[1] == '3' & casa1[2] == 'R'){board[8] = p_a[2];} //c3R
        //aqui acaba a cor branca e começam as peças pretas
        
        if(casa1[0] == 'a' & casa1[1] == '1' & casa1[2] == 'k'){board[0] = p_a[3];} //a1k
        if(casa1[0] == 'a' & casa1[1] == '1' & casa1[2] == 'b'){board[0] = p_a[4];} //a1b
        if(casa1[0] == 'a' & casa1[1] == '1' & casa1[2] == 'r'){board[0] = p_a[5];} //a1r
        if(casa1[0] == 'a' & casa1[1] == '2' & casa1[2] == 'k'){board[3] = p_a[3];} //a2k
        if(casa1[0] == 'a' & casa1[1] == '2' & casa1[2] == 'b'){board[3] = p_a[4];} //a2b
        if(casa1[0] == 'a' & casa1[1] == '2' & casa1[2] == 'r'){board[3] = p_a[5];} //a2r
        if(casa1[0] == 'a' & casa1[1] == '3' & casa1[2] == 'k'){board[6] = p_a[3];} //a3k
        if(casa1[0] == 'a' & casa1[1] == '3' & casa1[2] == 'b'){board[6] = p_a[4];} //a3b
        if(casa1[0] == 'a' & casa1[1] == '3' & casa1[2] == 'r'){board[6] = p_a[5];} //a3r
        if(casa1[0] == 'b' & casa1[1] == '1' & casa1[2] == 'k'){board[1] = p_a[3];} //b1k
        if(casa1[0] == 'b' & casa1[1] == '1' & casa1[2] == 'b'){board[1] = p_a[4];} //b1b
        if(casa1[0] == 'b' & casa1[1] == '1' & casa1[2] == 'r'){board[1] = p_a[5];} //b1r
        if(casa1[0] == 'b' & casa1[1] == '2' & casa1[2] == 'k'){board[4] = p_a[3];} //b2k
        if(casa1[0] == 'b' & casa1[1] == '2' & casa1[2] == 'b'){board[4] = p_a[4];} //b2b
        if(casa1[0] == 'b' & casa1[1] == '2' & casa1[2] == 'r'){board[4] = p_a[5];} //b2r
        if(casa1[0] == 'b' & casa1[1] == '3' & casa1[2] == 'k'){board[7] = p_a[3];} //b3k
        if(casa1[0] == 'b' & casa1[1] == '3' & casa1[2] == 'b'){board[7] = p_a[4];} //b3b
        if(casa1[0] == 'b' & casa1[1] == '3' & casa1[2] == 'r'){board[7] = p_a[5];} //b3r
        if(casa1[0] == 'c' & casa1[1] == '1' & casa1[2] == 'k'){board[2] = p_a[3];} //c1k
        if(casa1[0] == 'c' & casa1[1] == '1' & casa1[2] == 'b'){board[2] = p_a[4];} //c1b
        if(casa1[0] == 'c' & casa1[1] == '1' & casa1[2] == 'r'){board[2] = p_a[5];} //c1r
        if(casa1[0] == 'c' & casa1[1] == '2' & casa1[2] == 'k'){board[5] = p_a[3];} //c2k
        if(casa1[0] == 'c' & casa1[1] == '2' & casa1[2] == 'b'){board[5] = p_a[4];} //c2b
        if(casa1[0] == 'c' & casa1[1] == '2' & casa1[2] == 'r'){board[5] = p_a[5];} //c2r
        if(casa1[0] == 'c' & casa1[1] == '3' & casa1[2] == 'k'){board[8] = p_a[3];} //c3k
        if(casa1[0] == 'c' & casa1[1] == '3' & casa1[2] == 'b'){board[8] = p_a[4];} //c3b
        if(casa1[0] == 'c' & casa1[1] == '3' & casa1[2] == 'r'){board[8] = p_a[5];} //c3r
    }
    print_board();

    //SEGUNDA JOGADA
    printf("Agora a segunda jogada, a cor oposta a primeira, mesmo esquema de coordenadas: ");
    scanf("%s", &casa2);
    if(casa2 != casa1 & casa1[2] != p_a[3] & casa1[2] != p_a[4] & casa1[2] != p_a[5]){//nesse caso a primeira jogada foi das brancas
        if(casa2[0] == 'a' & casa2[1] == '1' & casa2[2] == 'k'){board[0] = p_a[3];} //a1k
        if(casa2[0] == 'a' & casa2[1] == '1' & casa2[2] == 'b'){board[0] = p_a[4];} //a1b
        if(casa2[0] == 'a' & casa2[1] == '1' & casa2[2] == 'r'){board[0] = p_a[5];} //a1r
        if(casa2[0] == 'a' & casa2[1] == '2' & casa2[2] == 'k'){board[3] = p_a[3];} //a2k
        if(casa2[0] == 'a' & casa2[1] == '2' & casa2[2] == 'b'){board[3] = p_a[4];} //a2b
        if(casa2[0] == 'a' & casa2[1] == '2' & casa2[2] == 'r'){board[3] = p_a[5];} //a2r
        if(casa2[0] == 'a' & casa2[1] == '3' & casa2[2] == 'k'){board[6] = p_a[3];} //a3k
        if(casa2[0] == 'a' & casa2[1] == '3' & casa2[2] == 'b'){board[6] = p_a[4];} //a3b
        if(casa2[0] == 'a' & casa2[1] == '3' & casa2[2] == 'r'){board[6] = p_a[5];} //a3r
        if(casa2[0] == 'b' & casa2[1] == '1' & casa2[2] == 'k'){board[1] = p_a[3];} //b1k
        if(casa2[0] == 'b' & casa2[1] == '1' & casa2[2] == 'b'){board[1] = p_a[4];} //b1b
        if(casa2[0] == 'b' & casa2[1] == '1' & casa2[2] == 'r'){board[1] = p_a[5];} //b1r
        if(casa2[0] == 'b' & casa2[1] == '2' & casa2[2] == 'k'){board[4] = p_a[3];} //b2k
        if(casa2[0] == 'b' & casa2[1] == '2' & casa2[2] == 'b'){board[4] = p_a[4];} //b2b
        if(casa2[0] == 'b' & casa2[1] == '2' & casa2[2] == 'r'){board[4] = p_a[5];} //b2r
        if(casa2[0] == 'b' & casa2[1] == '3' & casa2[2] == 'k'){board[7] = p_a[3];} //b3k
        if(casa2[0] == 'b' & casa2[1] == '3' & casa2[2] == 'b'){board[7] = p_a[4];} //b3b
        if(casa2[0] == 'b' & casa2[1] == '3' & casa2[2] == 'r'){board[7] = p_a[5];} //b3r
        if(casa2[0] == 'c' & casa2[1] == '1' & casa2[2] == 'k'){board[2] = p_a[3];} //c1k
        if(casa2[0] == 'c' & casa2[1] == '1' & casa2[2] == 'b'){board[2] = p_a[4];} //c1b
        if(casa2[0] == 'c' & casa2[1] == '1' & casa2[2] == 'r'){board[2] = p_a[5];} //c1r
        if(casa2[0] == 'c' & casa2[1] == '2' & casa2[2] == 'k'){board[5] = p_a[3];} //c2k
        if(casa2[0] == 'c' & casa2[1] == '2' & casa2[2] == 'b'){board[5] = p_a[4];} //c2b
        if(casa2[0] == 'c' & casa2[1] == '2' & casa2[2] == 'r'){board[5] = p_a[5];} //c2r
        if(casa2[0] == 'c' & casa2[1] == '3' & casa2[2] == 'k'){board[8] = p_a[3];} //c3k
        if(casa2[0] == 'c' & casa2[1] == '3' & casa2[2] == 'b'){board[8] = p_a[4];} //c3b
        if(casa2[0] == 'c' & casa2[1] == '3' & casa2[2] == 'r'){board[8] = p_a[5];} //c3r
    }
    if(casa2 != casa1 & casa1[2] != p_a[0] & casa1[2] != p_a[1] & casa1[2] != p_a[2]){ //nesse caso a primeira jogada foi das pretas
        if(casa2[0] == 'a' & casa2[1] == '1' & casa2[2] == 'K'){board[0] = p_a[0];} //aiK
        if(casa2[0] == 'a' & casa2[1] == '1' & casa2[2] == 'B'){board[0] = p_a[1];} //a1B
        if(casa2[0] == 'a' & casa2[1] == '1' & casa2[2] == 'R'){board[0] = p_a[2];} //a1R
        if(casa2[0] == 'a' & casa2[1] == '2' & casa2[2] == 'K'){board[3] = p_a[0];} //a2K
        if(casa2[0] == 'a' & casa2[1] == '2' & casa2[2] == 'B'){board[3] = p_a[1];} //a2B
        if(casa2[0] == 'a' & casa2[1] == '2' & casa2[2] == 'R'){board[3] = p_a[2];} //a2R
        if(casa2[0] == 'a' & casa2[1] == '3' & casa2[2] == 'K'){board[6] = p_a[0];} //a3K
        if(casa2[0] == 'a' & casa2[1] == '3' & casa2[2] == 'B'){board[6] = p_a[1];} //a3B
        if(casa2[0] == 'a' & casa2[1] == '3' & casa2[2] == 'R'){board[6] = p_a[2];} //a3R
        if(casa2[0] == 'b' & casa2[1] == '1' & casa2[2] == 'K'){board[1] = p_a[0];} //b1K
        if(casa2[0] == 'b' & casa2[1] == '1' & casa2[2] == 'B'){board[1] = p_a[1];} //b1B
        if(casa2[0] == 'b' & casa2[1] == '1' & casa2[2] == 'R'){board[1] = p_a[2];} //b1R
        if(casa2[0] == 'b' & casa2[1] == '2' & casa2[2] == 'K'){board[4] = p_a[0];} //b2K
        if(casa2[0] == 'b' & casa2[1] == '2' & casa2[2] == 'B'){board[4] = p_a[1];} //b2B
        if(casa2[0] == 'b' & casa2[1] == '2' & casa2[2] == 'R'){board[4] = p_a[2];} //b2R
        if(casa2[0] == 'b' & casa2[1] == '3' & casa2[2] == 'K'){board[7] = p_a[0];} //b3K
        if(casa2[0] == 'b' & casa2[1] == '3' & casa2[2] == 'B'){board[7] = p_a[1];} //b3B
        if(casa2[0] == 'b' & casa2[1] == '3' & casa2[2] == 'R'){board[7] = p_a[2];} //b3R
        if(casa2[0] == 'c' & casa2[1] == '1' & casa2[2] == 'K'){board[2] = p_a[0];} //c1K
        if(casa2[0] == 'c' & casa2[1] == '1' & casa2[2] == 'B'){board[2] = p_a[1];} //c1B
        if(casa2[0] == 'c' & casa2[1] == '1' & casa2[2] == 'R'){board[2] = p_a[2];} //c1R
        if(casa2[0] == 'c' & casa2[1] == '2' & casa2[2] == 'K'){board[5] = p_a[0];} //c2K
        if(casa2[0] == 'c' & casa2[1] == '2' & casa2[2] == 'B'){board[5] = p_a[1];} //c2B
        if(casa2[0] == 'c' & casa2[1] == '2' & casa2[2] == 'R'){board[5] = p_a[2];} //c2R
        if(casa2[0] == 'c' & casa2[1] == '3' & casa2[2] == 'K'){board[8] = p_a[0];} //c3K
        if(casa2[0] == 'c' & casa2[1] == '3' & casa2[2] == 'B'){board[8] = p_a[1];} //c3B
        if(casa2[0] == 'c' & casa2[1] == '3' & casa2[2] == 'R'){board[8] = p_a[2];} //c3R
        //aqui acaba a cor branca
    }
    print_board();
    
    
    //TERCEIRA JOGADA
    printf("Terceira jogada: ");
    scanf("%s", &casa3);
    if(casa3 != casa1 & casa3 != casa2 /*testou se é diferente das jogadas anteriores*/ & casa2[2] != p_a[3] & casa2[2] != p_a[4] & casa2[2] != p_a[5])/*jogada anterior das brancas*/{ //nesse caso a primeira jogada foi das brancas
        if(casa3[0] == 'a' & casa3[1] == '1' & casa3[2] == 'k'){board[0] = p_a[3];} //a1k
        if(casa3[0] == 'a' & casa3[1] == '1' & casa3[2] == 'b'){board[0] = p_a[4];} //a1b
        if(casa3[0] == 'a' & casa3[1] == '1' & casa3[2] == 'r'){board[0] = p_a[5];} //a1r
        if(casa3[0] == 'a' & casa3[1] == '2' & casa3[2] == 'k'){board[3] = p_a[3];} //a2k
        if(casa3[0] == 'a' & casa3[1] == '2' & casa3[2] == 'b'){board[3] = p_a[4];} //a2b
        if(casa3[0] == 'a' & casa3[1] == '2' & casa3[2] == 'r'){board[3] = p_a[5];} //a2r
        if(casa3[0] == 'a' & casa3[1] == '3' & casa3[2] == 'k'){board[6] = p_a[3];} //a3k
        if(casa3[0] == 'a' & casa3[1] == '3' & casa3[2] == 'b'){board[6] = p_a[4];} //a3b
        if(casa3[0] == 'a' & casa3[1] == '3' & casa3[2] == 'r'){board[6] = p_a[5];} //a3r
        if(casa3[0] == 'b' & casa3[1] == '1' & casa3[2] == 'k'){board[1] = p_a[3];} //b1k
        if(casa3[0] == 'b' & casa3[1] == '1' & casa3[2] == 'b'){board[1] = p_a[4];} //b1b
        if(casa3[0] == 'b' & casa3[1] == '1' & casa3[2] == 'r'){board[1] = p_a[5];} //b1r
        if(casa3[0] == 'b' & casa3[1] == '2' & casa3[2] == 'k'){board[4] = p_a[3];} //b2k
        if(casa3[0] == 'b' & casa3[1] == '2' & casa3[2] == 'b'){board[4] = p_a[4];} //b2b
        if(casa3[0] == 'b' & casa3[1] == '2' & casa3[2] == 'r'){board[4] = p_a[5];} //b2r
        if(casa3[0] == 'b' & casa3[1] == '3' & casa3[2] == 'k'){board[7] = p_a[3];} //b3k
        if(casa3[0] == 'b' & casa3[1] == '3' & casa3[2] == 'b'){board[7] = p_a[4];} //b3b
        if(casa3[0] == 'b' & casa3[1] == '3' & casa3[2] == 'r'){board[7] = p_a[5];} //b3r
        if(casa3[0] == 'c' & casa3[1] == '1' & casa3[2] == 'k'){board[2] = p_a[3];} //c1k
        if(casa3[0] == 'c' & casa3[1] == '1' & casa3[2] == 'b'){board[2] = p_a[4];} //c1b
        if(casa3[0] == 'c' & casa3[1] == '1' & casa3[2] == 'r'){board[2] = p_a[5];} //c1r
        if(casa3[0] == 'c' & casa3[1] == '2' & casa3[2] == 'k'){board[5] = p_a[3];} //c2k
        if(casa3[0] == 'c' & casa3[1] == '2' & casa3[2] == 'b'){board[5] = p_a[4];} //c2b
        if(casa3[0] == 'c' & casa3[1] == '2' & casa3[2] == 'r'){board[5] = p_a[5];} //c2r
        if(casa3[0] == 'c' & casa3[1] == '3' & casa3[2] == 'k'){board[8] = p_a[3];} //c3k
        if(casa3[0] == 'c' & casa3[1] == '3' & casa3[2] == 'b'){board[8] = p_a[4];} //c3b
        if(casa3[0] == 'c' & casa3[1] == '3' & casa3[2] == 'r'){board[8] = p_a[5];} //c3r
   
}
    if(casa3 != casa1 & casa3 != casa2 /*testou se é diferente das jogadas anteriores*/ & casa2[2] != p_a[0] & casa2[2] != p_a[1] & casa2[2] != p_a[2])/*jogada anterior das pretas*/{ //nesse caso a primeira jogada foi das pretas
        if(casa3[0] == 'a' & casa3[1] == '1' & casa3[2] == 'K'){board[0] = p_a[0];} //aiK
        if(casa3[0] == 'a' & casa3[1] == '1' & casa3[2] == 'B'){board[0] = p_a[1];} //a1B
        if(casa3[0] == 'a' & casa3[1] == '1' & casa3[2] == 'R'){board[0] = p_a[2];} //a1R
        if(casa3[0] == 'a' & casa3[1] == '2' & casa3[2] == 'K'){board[3] = p_a[0];} //a2K
        if(casa3[0] == 'a' & casa3[1] == '2' & casa3[2] == 'B'){board[3] = p_a[1];} //a2B
        if(casa3[0] == 'a' & casa3[1] == '2' & casa3[2] == 'R'){board[3] = p_a[2];} //a2R
        if(casa3[0] == 'a' & casa3[1] == '3' & casa3[2] == 'K'){board[6] = p_a[0];} //a3K
        if(casa3[0] == 'a' & casa3[1] == '3' & casa3[2] == 'B'){board[6] = p_a[1];} //a3B
        if(casa3[0] == 'a' & casa3[1] == '3' & casa3[2] == 'R'){board[6] = p_a[2];} //a3R
        if(casa3[0] == 'b' & casa3[1] == '1' & casa3[2] == 'K'){board[1] = p_a[0];} //b1K
        if(casa3[0] == 'b' & casa3[1] == '1' & casa3[2] == 'B'){board[1] = p_a[1];} //b1B
        if(casa3[0] == 'b' & casa3[1] == '1' & casa3[2] == 'R'){board[1] = p_a[2];} //b1R
        if(casa3[0] == 'b' & casa3[1] == '2' & casa3[2] == 'K'){board[4] = p_a[0];} //b2K
        if(casa3[0] == 'b' & casa3[1] == '2' & casa3[2] == 'B'){board[4] = p_a[1];} //b2B
        if(casa3[0] == 'b' & casa3[1] == '2' & casa3[2] == 'R'){board[4] = p_a[2];} //b2R
        if(casa3[0] == 'b' & casa3[1] == '3' & casa3[2] == 'K'){board[7] = p_a[0];} //b3K
        if(casa3[0] == 'b' & casa3[1] == '3' & casa3[2] == 'B'){board[7] = p_a[1];} //b3B
        if(casa3[0] == 'b' & casa3[1] == '3' & casa3[2] == 'R'){board[7] = p_a[2];} //b3R
        if(casa3[0] == 'c' & casa3[1] == '1' & casa3[2] == 'K'){board[2] = p_a[0];} //c1K
        if(casa3[0] == 'c' & casa3[1] == '1' & casa3[2] == 'B'){board[2] = p_a[1];} //c1B
        if(casa3[0] == 'c' & casa3[1] == '1' & casa3[2] == 'R'){board[2] = p_a[2];} //c1R
        if(casa3[0] == 'c' & casa3[1] == '2' & casa3[2] == 'K'){board[5] = p_a[0];} //c2K
        if(casa3[0] == 'c' & casa3[1] == '2' & casa3[2] == 'B'){board[5] = p_a[1];} //c2B
        if(casa3[0] == 'c' & casa3[1] == '2' & casa3[2] == 'R'){board[5] = p_a[2];} //c2R
        if(casa3[0] == 'c' & casa3[1] == '3' & casa3[2] == 'K'){board[8] = p_a[0];} //c3K
        if(casa3[0] == 'c' & casa3[1] == '3' & casa3[2] == 'B'){board[8] = p_a[1];} //c3B
        if(casa3[0] == 'c' & casa3[1] == '3' & casa3[2] == 'R'){board[8] = p_a[2];} //c3R
        //aqui acaba a cor branca
    }
    print_board();
    
    
    //QUARTA JOGADA
    printf("Quarta jogada: ");
    scanf("%s", &casa4);
    if(casa4 != casa1 & casa4 != casa2 & casa4 != casa3 /*testou se é diferente das jogadas anteriores*/ & casa3[2] != p_a[3] & casa3[2] != p_a[4] & casa3[2] != p_a[5])/*jogada anterior das brancas*/{ //nesse caso a primeira jogada foi das brancas
        if(casa4[0] == 'a' & casa4[1] == '1' & casa4[2] == 'k'){board[0] = p_a[3];} //a1k
        if(casa4[0] == 'a' & casa4[1] == '1' & casa4[2] == 'b'){board[0] = p_a[4];} //a1b
        if(casa4[0] == 'a' & casa4[1] == '1' & casa4[2] == 'r'){board[0] = p_a[5];} //a1r
        if(casa4[0] == 'a' & casa4[1] == '2' & casa4[2] == 'k'){board[3] = p_a[3];} //a2k
        if(casa4[0] == 'a' & casa4[1] == '2' & casa4[2] == 'b'){board[3] = p_a[4];} //a2b
        if(casa4[0] == 'a' & casa4[1] == '2' & casa4[2] == 'r'){board[3] = p_a[5];} //a2r
        if(casa4[0] == 'a' & casa4[1] == '3' & casa4[2] == 'k'){board[6] = p_a[3];} //a3k
        if(casa4[0] == 'a' & casa4[1] == '3' & casa4[2] == 'b'){board[6] = p_a[4];} //a3b
        if(casa4[0] == 'a' & casa4[1] == '3' & casa4[2] == 'r'){board[6] = p_a[5];} //a3r
        if(casa4[0] == 'b' & casa4[1] == '1' & casa4[2] == 'k'){board[1] = p_a[3];} //b1k
        if(casa4[0] == 'b' & casa4[1] == '1' & casa4[2] == 'b'){board[1] = p_a[4];} //b1b
        if(casa4[0] == 'b' & casa4[1] == '1' & casa4[2] == 'r'){board[1] = p_a[5];} //b1r
        if(casa4[0] == 'b' & casa4[1] == '2' & casa4[2] == 'k'){board[4] = p_a[3];} //b2k
        if(casa4[0] == 'b' & casa4[1] == '2' & casa4[2] == 'b'){board[4] = p_a[4];} //b2b
        if(casa4[0] == 'b' & casa4[1] == '2' & casa4[2] == 'r'){board[4] = p_a[5];} //b2r
        if(casa4[0] == 'b' & casa4[1] == '3' & casa4[2] == 'k'){board[7] = p_a[3];} //b3k
        if(casa4[0] == 'b' & casa4[1] == '3' & casa4[2] == 'b'){board[7] = p_a[4];} //b3b
        if(casa4[0] == 'b' & casa4[1] == '3' & casa4[2] == 'r'){board[7] = p_a[5];} //b3r
        if(casa4[0] == 'c' & casa4[1] == '1' & casa4[2] == 'k'){board[2] = p_a[3];} //c1k
        if(casa4[0] == 'c' & casa4[1] == '1' & casa4[2] == 'b'){board[2] = p_a[4];} //c1b
        if(casa4[0] == 'c' & casa4[1] == '1' & casa4[2] == 'r'){board[2] = p_a[5];} //c1r
        if(casa4[0] == 'c' & casa4[1] == '2' & casa4[2] == 'k'){board[5] = p_a[3];} //c2k
        if(casa4[0] == 'c' & casa4[1] == '2' & casa4[2] == 'b'){board[5] = p_a[4];} //c2b
        if(casa4[0] == 'c' & casa4[1] == '2' & casa4[2] == 'r'){board[5] = p_a[5];} //c2r
        if(casa4[0] == 'c' & casa4[1] == '3' & casa4[2] == 'k'){board[8] = p_a[3];} //c3k
        if(casa4[0] == 'c' & casa4[1] == '3' & casa4[2] == 'b'){board[8] = p_a[4];} //c3b
        if(casa4[0] == 'c' & casa4[1] == '3' & casa4[2] == 'r'){board[8] = p_a[5];} //c3r
   
   
}
    if(casa4 != casa1 & casa4 != casa2 & casa4 != casa3 /*testou se é diferente das jogadas anteriores*/ & casa3[2] != p_a[0] & casa3[2] != p_a[1] & casa3[2] != p_a[2])/*jogada anterior das pretas*/{ //nesse caso a primeira jogada foi das pretas
        if(casa4[0] == 'a' & casa4[1] == '1' & casa4[2] == 'K'){board[0] = p_a[0];} //aiK
        if(casa4[0] == 'a' & casa4[1] == '1' & casa4[2] == 'B'){board[0] = p_a[1];} //a1B
        if(casa4[0] == 'a' & casa4[1] == '1' & casa4[2] == 'R'){board[0] = p_a[2];} //a1R
        if(casa4[0] == 'a' & casa4[1] == '2' & casa4[2] == 'K'){board[3] = p_a[0];} //a2K
        if(casa4[0] == 'a' & casa4[1] == '2' & casa4[2] == 'B'){board[3] = p_a[1];} //a2B
        if(casa4[0] == 'a' & casa4[1] == '2' & casa4[2] == 'R'){board[3] = p_a[2];} //a2R
        if(casa4[0] == 'a' & casa4[1] == '3' & casa4[2] == 'K'){board[6] = p_a[0];} //a3K
        if(casa4[0] == 'a' & casa4[1] == '3' & casa4[2] == 'B'){board[6] = p_a[1];} //a3B
        if(casa4[0] == 'a' & casa4[1] == '3' & casa4[2] == 'R'){board[6] = p_a[2];} //a3R
        if(casa4[0] == 'b' & casa4[1] == '1' & casa4[2] == 'K'){board[1] = p_a[0];} //b1K
        if(casa4[0] == 'b' & casa4[1] == '1' & casa4[2] == 'B'){board[1] = p_a[1];} //b1B
        if(casa4[0] == 'b' & casa4[1] == '1' & casa4[2] == 'R'){board[1] = p_a[2];} //b1R
        if(casa4[0] == 'b' & casa4[1] == '2' & casa4[2] == 'K'){board[4] = p_a[0];} //b2K
        if(casa4[0] == 'b' & casa4[1] == '2' & casa4[2] == 'B'){board[4] = p_a[1];} //b2B
        if(casa4[0] == 'b' & casa4[1] == '2' & casa4[2] == 'R'){board[4] = p_a[2];} //b2R
        if(casa4[0] == 'b' & casa4[1] == '3' & casa4[2] == 'K'){board[7] = p_a[0];} //b3K
        if(casa4[0] == 'b' & casa4[1] == '3' & casa4[2] == 'B'){board[7] = p_a[1];} //b3B
        if(casa4[0] == 'b' & casa4[1] == '3' & casa4[2] == 'R'){board[7] = p_a[2];} //b3R
        if(casa4[0] == 'c' & casa4[1] == '1' & casa4[2] == 'K'){board[2] = p_a[0];} //c1K
        if(casa4[0] == 'c' & casa4[1] == '1' & casa4[2] == 'B'){board[2] = p_a[1];} //c1B
        if(casa4[0] == 'c' & casa4[1] == '1' & casa4[2] == 'R'){board[2] = p_a[2];} //c1R
        if(casa4[0] == 'c' & casa4[1] == '2' & casa4[2] == 'K'){board[5] = p_a[0];} //c2K
        if(casa4[0] == 'c' & casa4[1] == '2' & casa4[2] == 'B'){board[5] = p_a[1];} //c2B
        if(casa4[0] == 'c' & casa4[1] == '2' & casa4[2] == 'R'){board[5] = p_a[2];} //c2R
        if(casa4[0] == 'c' & casa4[1] == '3' & casa4[2] == 'K'){board[8] = p_a[0];} //c3K
        if(casa4[0] == 'c' & casa4[1] == '3' & casa4[2] == 'B'){board[8] = p_a[1];} //c3B
        if(casa4[0] == 'c' & casa4[1] == '3' & casa4[2] == 'R'){board[8] = p_a[2];} //c3R
        //aqui acaba a cor branca
    }
    print_board();
    
    //QUINTA JOGADA
    printf("Quinta jogada: ");
    scanf("%s", &casa5);
    if(casa5 != casa1 & casa5 != casa2 & casa5 != casa3 & casa5 != casa4 /*testou se é diferente das jogadas anteriores*/ & casa4[2] != p_a[3] & casa4[2] != p_a[4] & casa4[2] != p_a[5])/*jogada anterior das brancas*/{ //nesse caso a primeira jogada foi das brancas
        if(casa5[0] == 'a' & casa5[1] == '1' & casa5[2] == 'k'){board[0] = p_a[3];} //a1k
        if(casa5[0] == 'a' & casa5[1] == '1' & casa5[2] == 'b'){board[0] = p_a[4];} //a1b
        if(casa5[0] == 'a' & casa5[1] == '1' & casa5[2] == 'r'){board[0] = p_a[5];} //a1r
        if(casa5[0] == 'a' & casa5[1] == '2' & casa5[2] == 'k'){board[3] = p_a[3];} //a2k
        if(casa5[0] == 'a' & casa5[1] == '2' & casa5[2] == 'b'){board[3] = p_a[4];} //a2b
        if(casa5[0] == 'a' & casa5[1] == '2' & casa5[2] == 'r'){board[3] = p_a[5];} //a2r
        if(casa5[0] == 'a' & casa5[1] == '3' & casa5[2] == 'k'){board[6] = p_a[3];} //a3k
        if(casa5[0] == 'a' & casa5[1] == '3' & casa5[2] == 'b'){board[6] = p_a[4];} //a3b
        if(casa5[0] == 'a' & casa5[1] == '3' & casa5[2] == 'r'){board[6] = p_a[5];} //a3r
        if(casa5[0] == 'b' & casa5[1] == '1' & casa5[2] == 'k'){board[1] = p_a[3];} //b1k
        if(casa5[0] == 'b' & casa5[1] == '1' & casa5[2] == 'b'){board[1] = p_a[4];} //b1b
        if(casa5[0] == 'b' & casa5[1] == '1' & casa5[2] == 'r'){board[1] = p_a[5];} //b1r
        if(casa5[0] == 'b' & casa5[1] == '2' & casa5[2] == 'k'){board[4] = p_a[3];} //b2k
        if(casa5[0] == 'b' & casa5[1] == '2' & casa5[2] == 'b'){board[4] = p_a[4];} //b2b
        if(casa5[0] == 'b' & casa5[1] == '2' & casa5[2] == 'r'){board[4] = p_a[5];} //b2r
        if(casa5[0] == 'b' & casa5[1] == '3' & casa5[2] == 'k'){board[7] = p_a[3];} //b3k
        if(casa5[0] == 'b' & casa5[1] == '3' & casa5[2] == 'b'){board[7] = p_a[4];} //b3b
        if(casa5[0] == 'b' & casa5[1] == '3' & casa5[2] == 'r'){board[7] = p_a[5];} //b3r
        if(casa5[0] == 'c' & casa5[1] == '1' & casa5[2] == 'k'){board[2] = p_a[3];} //c1k
        if(casa5[0] == 'c' & casa5[1] == '1' & casa5[2] == 'b'){board[2] = p_a[4];} //c1b
        if(casa5[0] == 'c' & casa5[1] == '1' & casa5[2] == 'r'){board[2] = p_a[5];} //c1r
        if(casa5[0] == 'c' & casa5[1] == '2' & casa5[2] == 'k'){board[5] = p_a[3];} //c2k
        if(casa5[0] == 'c' & casa5[1] == '2' & casa5[2] == 'b'){board[5] = p_a[4];} //c2b
        if(casa5[0] == 'c' & casa5[1] == '2' & casa5[2] == 'r'){board[5] = p_a[5];} //c2r
        if(casa5[0] == 'c' & casa5[1] == '3' & casa5[2] == 'k'){board[8] = p_a[3];} //c3k
        if(casa5[0] == 'c' & casa5[1] == '3' & casa5[2] == 'b'){board[8] = p_a[4];} //c3b
        if(casa5[0] == 'c' & casa5[1] == '3' & casa5[2] == 'r'){board[8] = p_a[5];} //c3r
   
   
}
    if(casa5 != casa1 & casa5 != casa2 & casa5 != casa3 & casa5 != casa4 /*testou se é diferente das jogadas anteriores*/ & casa4[2] != p_a[0] & casa4[2] != p_a[1] & casa4[2] != p_a[2])/*jogada anterior das pretas*/{ //nesse caso a primeira jogada foi das pretas
        if(casa5[0] == 'a' & casa5[1] == '1' & casa5[2] == 'K'){board[0] = p_a[0];} //aiK
        if(casa5[0] == 'a' & casa5[1] == '1' & casa5[2] == 'B'){board[0] = p_a[1];} //a1B
        if(casa5[0] == 'a' & casa5[1] == '1' & casa5[2] == 'R'){board[0] = p_a[2];} //a1R
        if(casa5[0] == 'a' & casa5[1] == '2' & casa5[2] == 'K'){board[3] = p_a[0];} //a2K
        if(casa5[0] == 'a' & casa5[1] == '2' & casa5[2] == 'B'){board[3] = p_a[1];} //a2B
        if(casa5[0] == 'a' & casa5[1] == '2' & casa5[2] == 'R'){board[3] = p_a[2];} //a2R
        if(casa5[0] == 'a' & casa5[1] == '3' & casa5[2] == 'K'){board[6] = p_a[0];} //a3K
        if(casa5[0] == 'a' & casa5[1] == '3' & casa5[2] == 'B'){board[6] = p_a[1];} //a3B
        if(casa5[0] == 'a' & casa5[1] == '3' & casa5[2] == 'R'){board[6] = p_a[2];} //a3R
        if(casa5[0] == 'b' & casa5[1] == '1' & casa5[2] == 'K'){board[1] = p_a[0];} //b1K
        if(casa5[0] == 'b' & casa5[1] == '1' & casa5[2] == 'B'){board[1] = p_a[1];} //b1B
        if(casa5[0] == 'b' & casa5[1] == '1' & casa5[2] == 'R'){board[1] = p_a[2];} //b1R
        if(casa5[0] == 'b' & casa5[1] == '2' & casa5[2] == 'K'){board[4] = p_a[0];} //b2K
        if(casa5[0] == 'b' & casa5[1] == '2' & casa5[2] == 'B'){board[4] = p_a[1];} //b2B
        if(casa5[0] == 'b' & casa5[1] == '2' & casa5[2] == 'R'){board[4] = p_a[2];} //b2R
        if(casa5[0] == 'b' & casa5[1] == '3' & casa5[2] == 'K'){board[7] = p_a[0];} //b3K
        if(casa5[0] == 'b' & casa5[1] == '3' & casa5[2] == 'B'){board[7] = p_a[1];} //b3B
        if(casa5[0] == 'b' & casa5[1] == '3' & casa5[2] == 'R'){board[7] = p_a[2];} //b3R
        if(casa5[0] == 'c' & casa5[1] == '1' & casa5[2] == 'K'){board[2] = p_a[0];} //c1K
        if(casa5[0] == 'c' & casa5[1] == '1' & casa5[2] == 'B'){board[2] = p_a[1];} //c1B
        if(casa5[0] == 'c' & casa5[1] == '1' & casa5[2] == 'R'){board[2] = p_a[2];} //c1R
        if(casa5[0] == 'c' & casa5[1] == '2' & casa5[2] == 'K'){board[5] = p_a[0];} //c2K
        if(casa5[0] == 'c' & casa5[1] == '2' & casa5[2] == 'B'){board[5] = p_a[1];} //c2B
        if(casa5[0] == 'c' & casa5[1] == '2' & casa5[2] == 'R'){board[5] = p_a[2];} //c2R
        if(casa5[0] == 'c' & casa5[1] == '3' & casa5[2] == 'K'){board[8] = p_a[0];} //c3K
        if(casa5[0] == 'c' & casa5[1] == '3' & casa5[2] == 'B'){board[8] = p_a[1];} //c3B
        if(casa5[0] == 'c' & casa5[1] == '3' & casa5[2] == 'R'){board[8] = p_a[2];} //c3R
        //aqui acaba a cor branca
    }
    print_board();
    trio();
    if(resultado == 1){exit(0);}
    
            
    //SEXTA JOGADA
    printf("Sexta jogada: ");
    scanf("%s", &casa6);
    if(casa6 != casa1 & casa6 != casa2 & casa6 != casa3 & casa6 != casa4 & casa6 != casa5 /*testou se é diferente das jogadas anteriores*/ & casa5[2] != p_a[3] & casa5[2] != p_a[4] & casa5[2] != p_a[5])/*jogada anterior das brancas*/{ //nesse caso a primeira jogada foi das brancas
        if(casa6[0] == 'a' & casa6[1] == '1' & casa6[2] == 'k'){board[0] = p_a[3];} //a1k
        if(casa6[0] == 'a' & casa6[1] == '1' & casa6[2] == 'b'){board[0] = p_a[4];} //a1b
        if(casa6[0] == 'a' & casa6[1] == '1' & casa6[2] == 'r'){board[0] = p_a[5];} //a1r
        if(casa6[0] == 'a' & casa6[1] == '2' & casa6[2] == 'k'){board[3] = p_a[3];} //a2k
        if(casa6[0] == 'a' & casa6[1] == '2' & casa6[2] == 'b'){board[3] = p_a[4];} //a2b
        if(casa6[0] == 'a' & casa6[1] == '2' & casa6[2] == 'r'){board[3] = p_a[5];} //a2r
        if(casa6[0] == 'a' & casa6[1] == '3' & casa6[2] == 'k'){board[6] = p_a[3];} //a3k
        if(casa6[0] == 'a' & casa6[1] == '3' & casa6[2] == 'b'){board[6] = p_a[4];} //a3b
        if(casa6[0] == 'a' & casa6[1] == '3' & casa6[2] == 'r'){board[6] = p_a[5];} //a3r
        if(casa6[0] == 'b' & casa6[1] == '1' & casa6[2] == 'k'){board[1] = p_a[3];} //b1k
        if(casa6[0] == 'b' & casa6[1] == '1' & casa6[2] == 'b'){board[1] = p_a[4];} //b1b
        if(casa6[0] == 'b' & casa6[1] == '1' & casa6[2] == 'r'){board[1] = p_a[5];} //b1r
        if(casa6[0] == 'b' & casa6[1] == '2' & casa6[2] == 'k'){board[4] = p_a[3];} //b2k
        if(casa6[0] == 'b' & casa6[1] == '2' & casa6[2] == 'b'){board[4] = p_a[4];} //b2b
        if(casa6[0] == 'b' & casa6[1] == '2' & casa6[2] == 'r'){board[4] = p_a[5];} //b2r
        if(casa6[0] == 'b' & casa6[1] == '3' & casa6[2] == 'k'){board[7] = p_a[3];} //b3k
        if(casa6[0] == 'b' & casa6[1] == '3' & casa6[2] == 'b'){board[7] = p_a[4];} //b3b
        if(casa6[0] == 'b' & casa6[1] == '3' & casa6[2] == 'r'){board[7] = p_a[5];} //b3r
        if(casa6[0] == 'c' & casa6[1] == '1' & casa6[2] == 'k'){board[2] = p_a[3];} //c1k
        if(casa6[0] == 'c' & casa6[1] == '1' & casa6[2] == 'b'){board[2] = p_a[4];} //c1b
        if(casa6[0] == 'c' & casa6[1] == '1' & casa6[2] == 'r'){board[2] = p_a[5];} //c1r
        if(casa6[0] == 'c' & casa6[1] == '2' & casa6[2] == 'k'){board[5] = p_a[3];} //c2k
        if(casa6[0] == 'c' & casa6[1] == '2' & casa6[2] == 'b'){board[5] = p_a[4];} //c2b
        if(casa6[0] == 'c' & casa6[1] == '2' & casa6[2] == 'r'){board[5] = p_a[5];} //c2r
        if(casa6[0] == 'c' & casa6[1] == '3' & casa6[2] == 'k'){board[8] = p_a[3];} //c3k
        if(casa6[0] == 'c' & casa6[1] == '3' & casa6[2] == 'b'){board[8] = p_a[4];} //c3b
        if(casa6[0] == 'c' & casa6[1] == '3' & casa6[2] == 'r'){board[8] = p_a[5];} //c3r
  
   
}
    if(casa6 != casa1 & casa6 != casa2 & casa6 != casa3 & casa6 != casa4 & casa6 != casa5  /*testou se é diferente das jogadas anteriores*/ & casa5[2] != p_a[0] & casa5[2] != p_a[1] & casa5[2] != p_a[2])/*jogada anterior das pretas*/{ //nesse caso a primeira jogada foi das pretas
        if(casa6[0] == 'a' & casa6[1] == '1' & casa6[2] == 'K'){board[0] = p_a[0];} //aiK
        if(casa6[0] == 'a' & casa6[1] == '1' & casa6[2] == 'B'){board[0] = p_a[1];} //a1B
        if(casa6[0] == 'a' & casa6[1] == '1' & casa6[2] == 'R'){board[0] = p_a[2];} //a1R
        if(casa6[0] == 'a' & casa6[1] == '2' & casa6[2] == 'K'){board[3] = p_a[0];} //a2K
        if(casa6[0] == 'a' & casa6[1] == '2' & casa6[2] == 'B'){board[3] = p_a[1];} //a2B
        if(casa6[0] == 'a' & casa6[1] == '2' & casa6[2] == 'R'){board[3] = p_a[2];} //a2R
        if(casa6[0] == 'a' & casa6[1] == '3' & casa6[2] == 'K'){board[6] = p_a[0];} //a3K
        if(casa6[0] == 'a' & casa6[1] == '3' & casa6[2] == 'B'){board[6] = p_a[1];} //a3B
        if(casa6[0] == 'a' & casa6[1] == '3' & casa6[2] == 'R'){board[6] = p_a[2];} //a3R
        if(casa6[0] == 'b' & casa6[1] == '1' & casa6[2] == 'K'){board[1] = p_a[0];} //b1K
        if(casa6[0] == 'b' & casa6[1] == '1' & casa6[2] == 'B'){board[1] = p_a[1];} //b1B
        if(casa6[0] == 'b' & casa6[1] == '1' & casa6[2] == 'R'){board[1] = p_a[2];} //b1R
        if(casa6[0] == 'b' & casa6[1] == '2' & casa6[2] == 'K'){board[4] = p_a[0];} //b2K
        if(casa6[0] == 'b' & casa6[1] == '2' & casa6[2] == 'B'){board[4] = p_a[1];} //b2B
        if(casa6[0] == 'b' & casa6[1] == '2' & casa6[2] == 'R'){board[4] = p_a[2];} //b2R
        if(casa6[0] == 'b' & casa6[1] == '3' & casa6[2] == 'K'){board[7] = p_a[0];} //b3K
        if(casa6[0] == 'b' & casa6[1] == '3' & casa6[2] == 'B'){board[7] = p_a[1];} //b3B
        if(casa6[0] == 'b' & casa6[1] == '3' & casa6[2] == 'R'){board[7] = p_a[2];} //b3R
        if(casa6[0] == 'c' & casa6[1] == '1' & casa6[2] == 'K'){board[2] = p_a[0];} //c1K
        if(casa6[0] == 'c' & casa6[1] == '1' & casa6[2] == 'B'){board[2] = p_a[1];} //c1B
        if(casa6[0] == 'c' & casa6[1] == '1' & casa6[2] == 'R'){board[2] = p_a[2];} //c1R
        if(casa6[0] == 'c' & casa6[1] == '2' & casa6[2] == 'K'){board[5] = p_a[0];} //c2K
        if(casa6[0] == 'c' & casa6[1] == '2' & casa6[2] == 'B'){board[5] = p_a[1];} //c2B
        if(casa6[0] == 'c' & casa6[1] == '2' & casa6[2] == 'R'){board[5] = p_a[2];} //c2R
        if(casa6[0] == 'c' & casa6[1] == '3' & casa6[2] == 'K'){board[8] = p_a[0];} //c3K
        if(casa6[0] == 'c' & casa6[1] == '3' & casa6[2] == 'B'){board[8] = p_a[1];} //c3B
        if(casa6[0] == 'c' & casa6[1] == '3' & casa6[2] == 'R'){board[8] = p_a[2];} //c3R
        //aqui acaba a cor branca
    }
    print_board();
    trio();
    
    }
    
    void jogadas(){
        printf("Para mover a peça de um lugar a outro é necessário digitar a posição inicial seguida da posição final,\npor exemplo, se em a2 tenho um cavalo, para move-lô para c1 devo digitar a2c1, basta digitar a posião inicial e final, não se preocupe com  peça,\nnote no entanto que movimentos inválidos não funcionarão,\nno próprio exemplo a2c1, se em a2 estivesse um bispo o comando a2c1 não funcionaria. ");
        int l;
        for(l = 0; l < 55; l++){
            printf("Essa é a jogada número %d, jogue : ", l+7);
            scanf("%s", &jogada);
            
            mov_cav();
            mov_bis();
            mov_tor();
            print_board();
            trio();
            if(l == 54){printf("Empate, cada jogador já executou 30 jogadas e ninguém venceu, o jogo acabou."); exit(0);}
        }
    
    
    }

//---------------------------------------------------------------------------------------
    print_board();
    seis_primeiras();
    jogadas();
    
    return (EXIT_SUCCESS);    
}

