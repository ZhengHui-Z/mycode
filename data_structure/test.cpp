#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>

using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}Node;
typedef struct Node *LinkList;
int main(int argc, char const *argv[])
{
	///普通指针
	/*int *test;
	int i = 12;
	test = &i;
	*test = 666;
	cout<<"test = "<<test<<endl;
	cout<<"&i = "<<&i<<endl;*/
	///结构体指针
	LinkList a,b;
	a = (LinkList)malloc(sizeof(Node));
	b = (LinkList)malloc(sizeof(Node));
	a->data = 123;
	b->data = 234;
	a->next = b;
	cout<<"addr = "<< (int *)a <<endl;
	cout<<"data = "<< a->data <<endl;
	cout<<"sizeof = "<<sizeof(Node)<<endl;
	cout<<"a->next->data = "<<a->next->data<<endl;

	free(a);
	free(b);

	return 0;
}