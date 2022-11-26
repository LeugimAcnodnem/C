#include <stdio.h>
#include <math.h>
struct duda {int primos_distantes[100]; int aparecem[100];} duda;
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
// A função pra printar os fatores primos dado um número n
void primos(int n) 
{ 
    // printa a quantidade de 2s que dividem n
    int dois = 0; //essa variável conta a quantidade de 2s que são fatores, adiciona conforma o while roda
    while (n%2 == 0) 
    { 
        n = n/2; 
        dois += 1;
    } 
    if(dois != 0){printf("%d %d ", 2, dois); duda.primos_distantes[0] = 2; duda.aparecem[0] = dois;} //aqui eu printo os 2s e sua quantidade
    //adiciona no struct "duda" esse fator na posição 0 e o número de ocorrências em aparecem
   
    
    
    
    // aqui n é ímpar, vai testando de dois em dois até a raiz de n a partir de 3, ouse ja, pega todos os impares exceto 1
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        int u = 0; //essa variável conta os primos ímpares no mesmo esquema dos 2s e vai adicionando no while
        while (n%i == 0) 
        { 
            
            u +=1;
            n = n/i; 
        } 
       if(u != 0 && duda.primos_distantes[0] != 2){printf("%d %d ", i, u); duda.primos_distantes[i-3] = i; duda.aparecem[i-3] = u;} //adiciona no struct "duda" esse fator na posição i-3 porque aqui i começa no 3 e seria ímpar o número; e registra quantas vezes em "aparecem" na mesma posição
       if(u != 0 && duda.primos_distantes[0] == 2){printf("%d %d ", i, u); duda.primos_distantes[i-2] = i; duda.aparecem[i-2] = u;} //adiciona no struct "duda" esse fator na posição i-2 porque aqui i começa no 3 e seria par o número; e registra quantas vezes em "aparecem" na mesma posição
       if(u == 0){continue;}
        
    } 
    
    // essa condição é pra quando houver um fator primo maior do que 2, ai por consequencia o maior fator da fatoração será ele, e único, ai printa que aparece uma vez
    if (n > 2){ printf ("%d 1", n); duda.primos_distantes[n] = n; duda.aparecem[n] = 1;}//adiciona no struct "duda" esse fator e registra quantas vezes em "aparecem" na mesma posição
} 

    
    //algoritmo para encontrar o MMC dos dois numeros dados
    int mmc(int a, int b){
    int mmc, max, passo;
    //o algoritmo pega o maior dos dois números dados e define o maior como max e verifica se o resto da divisão de max pelos dois número sé zero, se simai é múltiplo comum,
    // caso contrário vai adicionando várias vezes o maior número até que seja múltiplo do outro número também (pelo requisito do resto d divisão pelos dois números ser 0)
    if(a > b)
      max = passo = a;
    else
      max = passo = b;

    while(1) {
        if(max%a == 0 && max%b == 0) {
            mmc = max;
            break;}
        max += passo;}

    return mmc;}
    // aqui acaba o algoritmo do MDC
    
    
    //aqui começa o algoritmo para calculo do MDC
    //ele é recursivo e vai retornando o resto da divisão de b por a até que o resto é 0 e ai b e a tem divisor comum que é o retornado (b ai)
    int mdc(int a, int b){
    if (a == 0)
        return b;
    return mdc(b % a, a);}
    //aqui acaba o algoritmo para o calculo do MDC
    
    
    
    primos(num1);
    printf("\n");
    primos(num2);
    printf("\n");
    //printando mdc e mmc
    printf("%d\n%d", mdc(num1, num2), mmc(num1, num2));
    
    return 0;
}