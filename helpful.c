#include "helpful.h"


Node* create_empty_tree() { //criando uma arvore vazia
	return NULL;
}

void printPreOrder(Node *bt){ //fun�ao para imprimir a arvore em pre ordem
	if(!isEmpty(bt)){ //enquanto for diferente de vazio, imprime em pre ordem, recursivamente
		printf("Character: %c -- Frequency: %d\n", bt->n_character, bt->n_frequency);
		printPreOrder(bt->p_left); //chamando recursivamente para a arvore da esquerda
		printPreOrder(bt->p_right); // chamando recursivamente para a arvore da direita
	}
}

Node *buildTree(Node *list){ //funcao para converter a lista em �rvore, imprimindo o estado atual
	/* merge enquanto lista possuir elemento */
	while(list->Next != NULL){ 
			list = merge(list); //chamando a fun�ao merge para lista
			printf("\nEstado atual da lista:\n");
			printPriorityQueue(list); // imprimindo o estado da lista para cada iteracao
		}
	return list;
}

Node *merge(Node* queue){ // fun�ao de merge nos n�s da lista
	/* estabelecendo defini��es para o novo n� criado */
	Node *newNode = (Node*) malloc(sizeof(Node)); //alocando memoria para o node
	newNode->p_left = queue; // recebe o primeiro n� da lista
	newNode->p_right = queue->Next; // recebe o segundo n� da lista

	/* ap�s retirada dos 2 primeiros elementos, queue aponta para o terceiro */
	if(newNode->p_right->Next != NULL)
		queue = newNode->p_right->Next;
	else
		queue = newNode;

	newNode->p_left->Next = NULL; //setando null para p_left do novo n� 
	newNode->p_right->Next = NULL; //setando null para p_right do novo n�
	newNode->n_character = '*'; // adicionando o caractere identificador '*'
	/* n� pai recebe a soma da frequencia dos filhos */
	newNode->n_frequency = newNode->p_left->n_frequency + newNode->p_right->n_frequency;

	/*inserindo novamente na fila, j� */
	queue = insertTreeNode(queue, newNode);

	return queue;
}
