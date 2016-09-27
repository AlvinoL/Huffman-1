#include "frequencyCounter.h"

int arrayFrequency[256] = {0};

void counter(char *fileName){
	FILE *file = fopen(fileName, "r");
	int aux; //auxiliar para guardar o caractere
	if(fileName == NULL) printf("Empty!\n");
	else{
		while((aux=fgetc(file))){
			    if(aux == EOF) break; //encerrar caso o arquivo esteja no fim
			    arrayFrequency[aux]+=1; //caso contrário adiciona 1 para a contagem daquele caracetere
		}
	}
	fclose(file);
}

void printFrequency(int array[256]){
	int i;
	for(i=0; i < 256; i++){
		if(array[i] > 0) {
		      printf("Frequency -> %c: -- %dx\n", i, array[i]);
		}
	}
}

