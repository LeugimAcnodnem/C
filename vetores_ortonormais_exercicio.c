#include <stdio.h>
#include <stdlib.h> //essa biblioteca é necessária para alocação dinâmica
#include <math.h> //essa biblioteca será usada pra calcular a norma 

int main(){
    
    int dimensao, norma1 = 0, norma2 = 0, norma3 = 0, produto = 0;//aqui declaro as variaveis das normas dos vetores
    float norma1f = 0, norma2f = 0, norma3f = 0; // aqui as medias (pq vou tirar a raiz quadrada)
    
    
    scanf("%d\n", &dimensao);//pego a dimensão dos vetores que serão usados
    
    int *coordenadas1;//crio o espaço pras coordenadas do primeiro vetor
    coordenadas1 = (int*)malloc(sizeof(int)*dimensao);//declaro o espaço pras coordenadas de acordo com a dimensão pro primeiro vetor
    
    int *coordenadas2;//crio o espaço pras coordenadas do primeiro vetor
    coordenadas2 = (int*)malloc(sizeof(int)*dimensao);//declaro o espaço pras coordenadas de acordo com a dimensão pro primeiro vetor
    
    int *coordenadas3;//crio o espaço pras coordenadas do primeiro vetor
    coordenadas3 = (int*)malloc(sizeof(int)*dimensao);//declaro o espaço pras coordenadas de acordo com a dimensão pro primeiro vetor
    
   
    
    
    
    for(int i = 0; i < dimensao; i++){
        //recebendo as coordenadas do primeiro vetor
        scanf("%d ", &coordenadas1[i]); 
        if(coordenadas1 == NULL){exit(0);}//aqui é uma gaantia de erro, se não forem criadas as coordenadas o programa encerra
            
        norma1 += pow(coordenadas1[i],2);
        }//vetor 1 e previa da norma
    norma1f = norma1; norma1f = sqrt(norma1f); //aqui calcuçlo a norma final do vetor1
    
    
    for(int u = 0; u < dimensao; u++){
        //recebendo as coordenadas do primeiro vetor
        if(u == 0){scanf("\n%d ", &coordenadas2[u]);}
        if(u != 0 ){scanf("%d ", &coordenadas2[u]);}
        if(coordenadas2 == NULL){exit(0);}//aqui é uma gaantia de erro, se não forem criadas as coordenadas o programa encerra
            
        norma2 += pow(coordenadas2[u],2);
        }//vetor 1 e previa da norma
    norma2f = norma2; norma2f = sqrt(norma2f); //aqui calcuçlo a norma final do vetor2
    
    
    for(int h = 0; h < dimensao; h++){
        //recebendo as coordenadas do segundo vetor
        if(h == 0){scanf("\n%d ", &coordenadas3[h]);}
        if(h != 0 && h != dimensao-1){scanf("%d ", &coordenadas3[h]);}
        if(h == dimensao-1){scanf("%d", &coordenadas3[h]);}
        if(coordenadas3 == NULL){exit(0);}//aqui é uma gaantia de erro, se não forem criadas as coordenadas o programa encerra
    
        norma3 += pow(coordenadas3[h],2);}//vetor 2 e previa da norma
    norma3f = norma3; norma3f = sqrt(norma3f); //aqui calcuçlo a norma final do vetor3
    
    
    
    //agora faço o produto escalar dos 3 vetores
    for(int t = 0; t < dimensao; t++){produto += coordenadas1[t]*coordenadas2[t]*coordenadas3[t];}
    
    //verificar se as normas são iguais a 1 pros três vetores e se o produto escalar é 0
    if(produto == 0 && norma1f == 1.0 && norma2f == 1.0 && norma3f == 1.0){printf("sao ortonormais");}
    else{printf("nao sao ortonormais");}
    
    free(coordenadas1), free(coordenadas2), free(coordenadas3);
    coordenadas1 = NULL, coordenadas2 = NULL, coordenadas3 = NULL;
    
    return(0);
    
}
    