#include "heap.h"

void init_heap() {
	H = malloc(sizeof(Heap));
	ROOT = NULL;
	SIZE = 0;
}

void insert(KEY k, DATA d) {
	MakeEntry(e,k,d)
	if(SIZE == 0) {
		ROOT = e;
	}
	else {
		MakeEntry(temp,0,0)
		temp = ROOT;
		while(1){
			if(LEFT(temp) == NULL) {
				PARENT(e) = temp;
				LEFT(temp) = e;
				break;
			}
			else if(RIGHT(temp) == NULL) {
				PARENT(e) = temp;
				RIGHT(temp) = e;
				break;
			}
			else {
				temp = LEFT(temp);
			}
		}
		MakeEntry(p,0,0)
		p = PARENT(e);
		while(p->key > e->key) {
			PARENT(e) = PARENT(p);
			if(p == LEFT(PARENT(p))){
				LEFT(PARENT(p)) = e;
			}
			else {
				RIGHT(PARENT(p)) = e;
			}
			if(e == LEFT(p)) {
				LEFT(e) = p;
			}
			else {
				RIGHT(e) = p;
			}
			PARENT(p) = e;
		}			
	}
	SIZE++;
}

entry* min(){
	if(SIZE == 0){
		puts("empty");
		exit(1);
	}
	MakeEntry(temp,0,0)
	temp = ROOT;
	printf("min : (%d, %c)\n", temp->key, temp->data);
	return temp;
}
/*
entry* removeMin() {
	if(isEmpty()) {
		puts("empty");
		exit(1);
	}
	MakeEntry(temp,NULL,NULL)
	MakeEntry(rep,NULL,NULL)
	temp = ROOT;
	rep = ROOT;
	printf("remove : (%d, %c)\n", temp->key, temp->data);
	
	while(1) {
		if(LEFT(rep) == NULL) {
			break;
		}
		else if(RIGHT(rep) == NULL) {
			rep = LEFT(rep);
			break;
		}
		else if(RIGTH(rep) != NULL && LEFT(LEFT(rep)) == NULL) {
			rep = RIGHT(rep);
			break;
		}
		else {
			rep = LEFT(rep);
			if (RIGHT(rep) != NULL) {
				rep = RIGHT(PARENT(rep));
			}
		}
	}
	if (rep == LEFT(PARENT(rep))) {
		LEFT(PARENT(rep)) = NULL;
	}
	else { 
		RIGHT(PARENT(rep)) = NULL:
	}
	LEFT(rep) = LEFT(ROOT);
	RIGHT(rep) = RIGHT(ROOT);
	PARENT(rep) = NULL;
	ROOT = rep;
	
	MakeEntry(bub,NULL,NULL)
	bub = ROOT;
	while(LEFT(bub) != NULL) {
		if(RIGHT(bub) != NULL) {
			if(bub->key > LEFT(bub)->key && bub->key > RIGHT(bub)) {
				if(LEFT(bub)->key < RIGHT(bub)->key) {
					if(RIGHT(LEFT(bub)) != NULL) {
						PARENT(RIGHT(LEFT(bub))) = bub;
						PARENT(LEFT(LEFT(bub)))	= bub;
						RIGHT(LEFT(bub)) = RIGHT(bub);
						LEFT(LEFT(bub)) = bub;
						if(bub == ROOT) {
							PARENT(LEFT(bub)) = NULL;
						}
							
		
*/

void print_heap(entry* e) {
	if(LEFT(e) != NULL) {
		print_heap(LEFT(e));
	}
	printf("(%d, %c) ", e->key, e->data);
	if(RIGHT(e) != NULL) {
		print_heap(RIGHT(e));
	}
}
	
