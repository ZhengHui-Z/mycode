#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>

using namespace std;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node
{
	int data;
	struct Node *next;
}Node;

typedef struct Node *LinkList;

// 初始化顺序线性表
Status InitList(LinkList *L){
	*L=(LinkList)malloc(sizeof(Node));
	if(*L)
		return ERROR;
	(*L)->next = NULL;
	return OK;
}

int main(int argc, char const *argv[])
{
	
	LinkList L;
	ElemType e;
	Status i;
	int j,k;
	int test = 36;
	printf("%d\n", &test);


	return 0;
}