#include "helpful.c"
#include "helpful.h"
#include "priorityQueue.c"
#include "priorityQueue.h"
#include "frequencyCounter.h"
#include "frequencyCounter.c"
//#include "huffman.h"



int main(){

	counter("teste.txt");
	printFrequency(arrayFrequency);

	Node* p_queue = createPriorityQueue();
	Node* tree = create_empty_tree();

	int i;
	for(i = 0; i < 256; i++){
		if(arrayFrequency[i] > 0) {
			p_queue = insert(p_queue, i, arrayFrequency[i]);
			printf("Fila: ");
			printPriorityQueue(p_queue);
		}
	}
    printf("\n");

	printf("\nImprimindo a Arvore:\n\n");
	tree = buildTree(p_queue);
	printPriorityQueue(p_queue);
	printf("\n");
    printf("%d\n\n\n", tree->n_frequency);
    printf("Pre Order:\n");
    printPreOrder(tree);
    printf("\nFim da execucao.");

	return 0;
}

