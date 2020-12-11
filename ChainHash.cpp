#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include "Member.h"
#include "ChainHash.h"

static int hash(int key, int size){
	return key % size;
}

static void SetNode(Node* n, const Member* x, const Node* next){
	n->data = *x;
	n->next = (__node*)next;
}

int Initialize(ChainHash* h, int size){
	int i;
	if ((h->table = (Node**)calloc(size, sizeof(Node*))) == NULL) {
		h->size = 0;
		return 0;
	}
	h->size = size;
	for (i = 0; i < size; i++)
		h->table[i] = NULL;
	return 1;
}

Node* Search(const ChainHash* h, const Member* x){
	int key = hash(x->no, h->size);
	Node* p = h->table[key];
	
	while (p != NULL) {
		if (p->data.no == x->no)
			return p;
		p = p->next;
	}
	return NULL;
}

int Add(ChainHash* h, const Member* x){
	int key = hash(x->no, h->size);
	Node* p = h->table[key];
	Node* temp;
	while (p != NULL) {
		if (p->data.no == x->no)
			return 1;
		p = p->next;
	}
	if ((temp = (Node*)calloc(1, sizeof(Node))) == NULL)
		return 2;
	SetNode(temp, x, h->table[key]);
	h->table[key] = temp;
	return 0;
}
