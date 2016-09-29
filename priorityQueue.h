#pragma once
#include "frequencyCounter.h"
/* Definindo a estrutura Node */
typedef struct node Node;
struct node{    
  unsigned char n_character; // guardar� o caractere
  int n_frequency;  // guardar� a frequencia do caractere
  Node *Next; // ponteiro apontando para proximo
  Node *p_left; // ponteiro esquerdo da �rvore
  Node *p_right; //ponteiro direito da �rvore
};

Node* createPriorityQueue(); // cria uma fila de prioridade

int isEmpty(Node *node); // verifica se o n� est� vazio

void printPriorityQueue(Node *node); // imprime a fila de prioridade

/* Insere um Node na piorityQueue */
Node* insert(Node *node, unsigned char character, int frequency);

/* Insere o n� com merge na PiorityQueue */
Node *insertTreeNode(Node *queue, Node *queueNode);



