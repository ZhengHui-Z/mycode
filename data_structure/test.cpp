#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>

using namespace std;

typedef struct Node
{
    int data;
    //struct Node *next;
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
	LinkList a;
	a = (LinkList)malloc(sizeof(Node));
	a->data = 123;
	cout<<"addr = "<< (int *)a <<endl;
	cout<<"data = "<< a->data <<endl;

	free(a);

	return 0;
}