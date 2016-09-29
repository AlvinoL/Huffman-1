#include "frequencyCounter.h"

int arrayFrequency[256] = {0}; //array para guardar a frequencia, tamanho maximo da tabela ascii(256) 

void counter(char *fileName){ //fun�ao para contar caracteres passando arquivo como parametro
	FILE *file = fopen(fileName, "r"); //abre arquivo somente para leitura
	int aux; //auxiliar para guardar o caractere
	if(fileName == NULL) printf("Empty!\n"); //checka se o arquivo est� vazio
	else{
		while((aux=fgetc(file))){ //percorre os caracteres do arquivo
			    if(aux == EOF) break; //encerrar caso o arquivo esteja no fim
			    arrayFrequency[aux]+=1; //caso contr�rio adiciona 1 para a contagem daquele caracetere
		}
	}
	fclose(file); //fecha o arquivo
}

void printFrequency(int array[256]){ //imprime a tabela com a frequencia dos caracteres
	int i; // variavel auxiliar
	for(i=0; i < 256; i++){
		if(array[i] > 0) { //percorrendo o array
		      printf("Frequency -> %c: -- %dx\n", i, array[i]); // imprimindo tabela de frequencia
		}
	}
}

