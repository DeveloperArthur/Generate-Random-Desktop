#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// programa que gera numeros aleatorios
void gerarNumeros();

int vet[10], num=0;
int main(){
	system("color 1C");
	printf("\nBem vindo ao Generate Random\n\n");
	printf("1-Gerar Numeros\n\n");
	printf("2-Sair\n\n");
	scanf("%i", &num);
	if(num == 2){
		system("cls");
		printf("\nFim do programa\n\n\n\n\n\n\n\n\n\n\n");
		printf("Generate Random foi criado por Arthur dos Santos Almeida. 24/09/2018\n\n");
		system("pause");
		exit(0);
	}else if(num != 1 && num != 2){
		system("cls");
		printf("\nPor favor, digite um numero valido\n");
		printf("\n");
		system("pause");
		system("cls");
		main();
	}else if(num == 1){
		gerarNumeros();
	}
	
	
}

void gerarNumeros(){
	int op=0;
	system("cls");
	
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
	
	//printa os numeros gerados
    printf("\nNumeros gerados: \n\n");
    for (int k=0; k < 10; k++){
    	printf("%i ", vet[k]);
    }
    
    printf("\n\n\n\n1-Gerar novamente\n\n");
    printf("2-Sair\n\n");
   	
   	scanf("%i", &op);
   	
    if(op == 1){
    	system("cls");
    	gerarNumeros();
	}else if(op == 2){
		system("cls");
		printf("\nFim do programa\n\n\n\n\n\n\n\n\n\n\n");
		printf("Generate Random foi criado por Arthur dos Santos Almeida. 24/09/2018\n\n");
		system("pause");
		exit(0);
	}else if(op != 1 && op != 2){
		system("cls");
		printf("\nFim do programa\n\n\n\n\n\n\n\n\n\n\n");
		printf("Generate Random foi criado por Arthur dos Santos Almeida. 24/09/2018\n\n");
		system("pause");
		exit(0);
	}
    
}

