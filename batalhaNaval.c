#include<stdio.h>

#define linha 10
#define coluna 10
#define AGUA 0
#define NAVIO 3
#define ACERTO 5
int main() {   

int tabuleiro[linha][coluna];
 

// Implementação do tabuleiro 
for (int i = 0; i < linha; i++){ 
    for (int j = 0; j < coluna; j++){  
    tabuleiro[i][j] = AGUA;} 
}
//implementação de alguns navios
for(int k = 0; k < 3; k++){        
    tabuleiro[k][k] = NAVIO;}

for(int d = 2; d < 5 ; d++){       
     tabuleiro[d][9-d]= NAVIO;}
 
for(int i = 7; i < 10; i++){
    tabuleiro[i][2] = NAVIO; 
}     
 for(int i = 7; i < 10; i++){
     tabuleiro[6][i] = NAVIO; 
}        
// implementação de um ataque em cruz       
for(int i =3; i < 8; i++ ){    
    tabuleiro[i][5] = ACERTO;    
    for(int j = 3; j < 8; j++){        
    tabuleiro[5][j] = ACERTO;    
}
}



printf("Tabuleiro Batalha Naval\n");

printf("     0  1  2  3  4  5  6  7  8  9\n");    
     for (int i = 0; i < linha; i++){        
        printf("%2d ", i );       
        for (int j = 0; j < coluna; j++){            
            printf("%3d", tabuleiro[i][j]);        
        }       
         printf("\n");    
        }       
        
        return 0;
    }
