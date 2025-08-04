#include<stdio.h>

#define linha 10
#define coluna 10
#define AGUA 0
#define NAVIO 3

int main() {   

int tabuleiro[linha][coluna];  


for (int i = 0; i < linha; i++){ 
    for (int j = 0; j < coluna; j++){  
    tabuleiro[i][j] = AGUA;} 
}
for(int k = 0; k < 3; k++){        
    tabuleiro[k][k] = NAVIO;}

for(int d = 2; d < 5 ; d++){       
     tabuleiro[d][9-d]= NAVIO;}
 
     tabuleiro[9][2] = NAVIO;    
     tabuleiro[8][2] = NAVIO;    
     tabuleiro[7][2] = NAVIO;    
     tabuleiro[6][7] = NAVIO;    
     tabuleiro[6][8] = NAVIO;    
     tabuleiro[6][9] = NAVIO;    

printf("Tabuleiro Batalha Naval\n");

printf("     A  B  C  D  E  F  G  H  I  J\n");    
     for (int i = 0; i < linha; i++){        
        printf("%2d ", i + 1);       
        for (int j = 0; j < coluna; j++){            
            printf("%3d", tabuleiro[i][j]);        
        }       
         printf("\n");    
        }       
        
        return 0;
    }