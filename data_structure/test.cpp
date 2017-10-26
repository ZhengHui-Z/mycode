#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>

using namespace std;

typedef struct Node
{
	int data;
}Node;

int main(int argc, char const *argv[])
{
	
	int *test;
	int i = 12;
	test = &i;
	*test = 666;
	int *addr;
	addr = (int *)6618700;
	printf("%d\n", (*test));
	printf("i1 = %d\n", i);
	printf("i2 = %d\n", (int *)&i);
	printf("addr = %d\n",*addr);

	Node *a;
	//*a = malloc(sizeof(Node))
	a->data = 123;
	printf("Node_addr = %d\n",&(a->data));
	printf("Node = %d\n",(*a).data );


	return 0;
}