#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


extern int arrayFrequency[256]; //variavel global para todos os arquivos que referenciam o array
								//guarda o valor da frequencia
void counter(char *fileName);   //fun�ao para contar caracteres

void printFrequency(int array[256]); // fun�ao para imprimir a frequencia dos caracteres

