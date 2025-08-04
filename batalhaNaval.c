#include<stdio.h>

#define linha 10
#define coluna 10
int main() 
{
    int tabuleiro[linha][coluna];

    printf("Tabuleiro Batalha Naval\n");


    printf("     A  B  C  D  E  F  G  H  I  J\n");
    for (int i = 0; i < 10; i++){
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++){
           
            
            tabuleiro[i][j] = 0;
            
             for(int k = 0; k < 3; k++){
            tabuleiro[k][k] =3;
        }
            for(int d = 2; d < 5 ; d++){
                tabuleiro[d][9-d]= 3;
            }

            tabuleiro[9][2] =3;
            tabuleiro[8][2] =3;
            tabuleiro[7][2] =3;

            tabuleiro[6][7] =3;
            tabuleiro[6][8] =3;
            tabuleiro[6][9] =3;
            
            

            
            printf("%3d", tabuleiro[i][j]);
        }
    
        printf("\n");
    }
    

    return 0;
}