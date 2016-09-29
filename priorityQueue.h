#pragma once
#include "frequencyCounter.h"
/* Definindo a estrutura Node */
typedef struct node Node;
struct node{    
  unsigned char n_character; // guardará o caractere
  int n_frequency;  // guardará a frequencia do caractere
  Node *Next; // ponteiro apontando para proximo
  Node *p_left; // ponteiro esquerdo da árvore
  Node *p_right; //ponteiro direito da árvore
};

Node* createPriorityQueue(); // cria uma fila de prioridade

int isEmpty(Node *node); // verifica se o nó está vazio

void printPriorityQueue(Node *node); // imprime a fila de prioridade

/* Insere um Node na piorityQueue */
Node* insert(Node *node, unsigned char character, int frequency);

/* Insere o nó com merge na PiorityQueue */
Node *insertTreeNode(Node *queue, Node *queueNode);



