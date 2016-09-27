#pragma once
#include "frequencyCounter.h"

typedef struct node Node;
struct node{
  unsigned char n_character;
  int n_frequency; 
  Node *Next;
  Node *p_left;
  Node *p_right;
};

Node* createPriorityQueue();

int isEmpty(Node *node);

void printPriorityQueue(Node *node);

/* Insere no come�o da piorityQueue */
Node* insert(Node *node, unsigned char character, int frequency);

/* Insere o n� com merge na PiorityQueue */
Node *insertTreeNode(Node *queue, Node *queueNode);



