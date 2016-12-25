#include "Heap.h"

typedef struct PQ{
	int size;
	Heap queue;
}PQ;

void PQInit(PQ*);
void insert(Key,Data);
Entry min(PQ*);
Entry removeMin(PQ*);
int size(PQ*);
boolean isEmptry(PQ*);
