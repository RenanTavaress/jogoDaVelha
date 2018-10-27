#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define TAMANHO 3

int geraNumeroSecreto(void);


int main(){

	int i,j;
	int matriz[TAMANHO][TAMANHO];
	int computador;
	int posicaoComp[2];
	int jogador;
	int teste = 0;
	int x,y;

	srand((unsigned)time(NULL));
	computador = rand() %2;
	printf("O numero computador é %d\n",computador);
	if(computador == 1){
		jogador =0;
	} else {
		jogador = 1;
	}

	for(i=0; i< TAMANHO ; i++){
		for (j = 0; j < TAMANHO; j++){
			matriz[i][j] = 3;
			
		}
	}

	while(teste<100){
		
		i = rand() %3;
		j = rand() %3;
		if(matriz[i][j] != jogador && matriz[i][j] != computador){
			matriz[i][j] = computador;
			printf("A posiçao do computador foi [%d] [%d]\n",i,j );
			
		} else{
			continue;
		}
		for(i=0; i< TAMANHO ; i++){
			for (j = 0; j < TAMANHO; j++){
			
				printf("matriz[%d][%d] = %d\n",i,j,matriz[i][j] );
			}
		}
		

		printf("Escolha sua a Linha\n");
		scanf("%d",&x);
		printf("Escolha sua a Coluna\n");
		scanf("%d",&y);

		matriz[x][y] = jogador;
		for(i=0; i< TAMANHO ; i++){
			for (j = 0; j < TAMANHO; j++){
			
				printf("matriz[%d][%d] = %d\n",i,j,matriz[i][j] );
			}
		}
		printf("\n\n\n");

		printf(" jogador 1 venceu");


	}

}




/*int geraNumeroSecreto(void){
	srand((unsigned)time(NULL));
	int numeroX= 0;
	numeroX =  (rand() % 3);
	return numeroX;

}*/