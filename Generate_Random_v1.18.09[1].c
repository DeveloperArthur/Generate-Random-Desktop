#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// programa que gera numeros aleatorios
void gerarNumeros();

int main(){
	
	gerarNumeros();
	
}

void gerarNumeros(){
	system("color 1C");
    int vet[10], num;	
    srand(time(NULL));
	
    //coloca os numeros aleatorios em um vetor	
    for (int i=0; i < 10; i++){
      vet[i] = rand() % 60;
    }
    
    //verifica se algum numero foi repetido e gera de novo
    for (int j=0; j < 10; j++){
    	if (vet[j] == vet[j+1]){
    		gerarNumeros();
		}
	}
    printf("\n");
    printf("Numeros gerados: \n\n");
    for (int k=0; k < 10; k++){
    		printf("%i ", vet[k]);
    	}
    
    printf("\n\nGerar novamente(1)\n\nConcluir(0)\n\n");
    scanf("%i",&num);
   
    if(num==1){
    	gerarNumeros();
	}else if(num==0) {
		exit;
	}
    
}
