#include "helpful.c"
#include "helpful.h"
#include "priorityQueue.c"
#include "priorityQueue.h"
#include "frequencyCounter.h"
#include "frequencyCounter.c"
//#include "huffman.h"



int main(){

	counter("teste.txt"); // chamando a funçao para contar caracteres do arquivo teste.txt
	printFrequency(arrayFrequency); // imprimindo a frequencia passando o array que contem as frequencias

	Node* p_queue = createPriorityQueue(); // p_queue recebe a lista criada [vazia]
	Node* tree = create_empty_tree(); // tree recebe a árvore criada [vazia]

	int i;
	for(i = 0; i < 256; i++){ // percorrendo o array das frequencias e imprimindo 
		if(arrayFrequency[i] > 0) { 
			p_queue = insert(p_queue, i, arrayFrequency[i]); // cabeça da lista recebe a inserção
			printf("Fila: "); // descrição
			printPriorityQueue(p_queue); // imprime o estado atual da lista
		}
	}
    printf("\n");

	printf("\nImprimindo a Arvore:\n\n"); 
	tree = buildTree(p_queue); // tree aponta para a raiz da arvore (buildTree() chama merge() para os 2 primeiros nodes da fila)
	printPriorityQueue(p_queue); // imprime o estado atual da fila 
	printf("\n");
    // printf("%d\n\n\n", tree->n_frequency);
    printf("Pre Order:\n"); 
    printPreOrder(tree); //imprime arvore em pre ordem
    printf("\nFim da execucao.");

	return 0;
}

