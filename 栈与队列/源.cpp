#define  _CRT_SECURE_NO_WARNINGS 1
//
//
#include <stdio.h>
//
////˳��ջʵ�ֽ���ת��
//#define STACKSIZE 50
//#define FALSE 0
//#define TRUE 1
//typedef int DataType;
////ջ�Ĵ洢�ṹ
//typedef struct
//{
//	DataType data[STACKSIZE];
//	int top;
//}SeqStack;
//
////��ʼ��˳��ջ
//void InitStack(SeqStack& S)
//{
//	S.top = -1;
//}
//
////��ջ
//int Push(SeqStack& S, DataType x)
//{
//	if (S.top == STACKSIZE - 1)
//		return FALSE;
//	else
//	{
//		S.top++;
//		S.data[S.top] = x;
//		return TRUE;
//	}
//}
//
////��ջ
//int Pop(SeqStack& S, DataType& X)
//{
//	if (S.top == -1)
//	{
//		return FALSE;
//	}
//	else
//	{
//		X = S.data[S.top];
//		S.top--;
//		return TRUE;
//	}
//}
//
////�ж�ջ�Ƿ�Ϊ��
//
//int StackEmpty(SeqStack& S)
//{
//	if (S.top == -1)
//	{
//		return TRUE;
//	}
//	else
//	{
//		return FALSE;
//	}
//}
//
////��ȡջ��Ԫ�ص�ֵ
//int GetTop(SeqStack& S, DataType& x)
//{
//	if (S.top == -1)
//	{
//		return FALSE;
//	}
//	else
//	{
//		x = S.data[S.top];
//		return TRUE;
//	}
//}
//
//int main()
//{
//	SeqStack S;
//	InitStack(S);
//	int n, b = 0, x, a;
//	printf("-------------------------------------------------------\n");
//	printf("            �������ת����ʮ�������� \n");
//	scanf_s("%d", &n);
//	printf("            ��������Ҫת���Ľ��ƣ�\n");
//	printf("         ��1����������     ��2�����˽���    \n");
//	printf("         ��3����ʮ������   ��4�����˳�\n");
//	scanf_s("%d", &x);
//	switch (x)
//	{
//	case 1:b = 2; break;
//	case 2:b = 8; break;
//	case 3:b = 16; break;
//	case 4:   break;
//	default:break;
//	}
//	while (n)
//	{
//		int i = n % b;
//		Push(S, i);
//		n = n / b;
//	}
//	printf("���ת��Ϊ:");
//	while (!StackEmpty(S))
//	{
//		Pop(S, a);
//		printf("%d", a);
//	}
//	return 0;
//}




////
//typedef int DataType;
//#define FALSE 0
//#define TRUE 1
//
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}StackNode;
//
//typedef StackNode* LinkList;
////��ʼ��
//
//
////��ջ
//int Push(LinkList& top, DataType x)
//{
//	StackNode* s;
//	s = new StackNode;
//	if (s == NULL) return FALSE;
//	s->data = x;
//	s->next = top->next;
//	top->next = s;
//	return TRUE;
//}
//
////��ջ
//
//int Pop(LinkList& top, DataType& x)
//{
//	StackNode* s;
//	s = top->next;
//	if (s == NULL)
//	{
//		return FALSE;
//	}
//	x = s->data;
//	top->next = s->next;
//	delete s;
//	return TRUE;
//}
//
////չʾϵͳ�˵�
//
//void  showMenn()
//{
//	printf("------------------------------------------------\n");
//	printf("            ��ӭʹ�ý���ת��ϵͳ\n ");
//	printf("\t         ��1��ת���ɶ�����\n");
//	printf("\t         ��2��ת���ɰ˽���\n");
//	printf("\t         ��3��ת����ʮ������\n");
//	printf("\t         ��4���˳�\n");
//	printf("------------------------------------------------\n");
//}
//
//
//
//int main()
//{
//	LinkList s;
//	
//	int n,x,N,a;
//	DataType restNumber;
//	showMenn();
//	printf("��������Ҫת��������\n");
//	scanf("%d", &n);
//	printf("��ѡ����Ҫת���Ľ��ƣ�\n");
//	scanf("%d", &x);
//	switch (x)
//	{
//	case 1:N = 2;
//	case 2:N = 8;
//	case 3:N = 16;
//	case 4:break;
//	default:printf("�����������������"); break;
//	}
//	while (n)
//	{
//		restNumber = n% N;
//		Push(s, restNumber);
//		n/ N;
//	}
//	while (Pop)
//	{
//		Pop(s, a);
//		printf("%d", a);
//	}
//	return 0;
//}



////��ʽջ�Ľṹ�����Ͷ���
//typedef int DataType;
//#define FALSE 0
//#define TRUE 1
//typedef struct node {
//	DataType stack;
//	struct node* pnext;
//}LinkList;
//
//
//typedef struct stack
//{
//	LinkList* pTop;
//	LinkList* pBottom;
//}LinkStack;
//
//
////��ʼ��
//int InitLinkStack(LinkStack* S)
//{
//	S->pTop = new LinkList;
//	if (!S->pTop)
//	{
//		printf("��̬�ڴ����ʧ�ܣ�\n");
//		return FALSE;
//	}
//	S->pBottom = S->pTop;
//	S->pBottom->pnext = NULL;
//	return TRUE;
//}
//
//
////�ж�ջ�Ƿ�Ϊ��
//
//int isEmpty(LinkStack* S)
//{
//	if (S->pBottom == S->pTop)
//	{
//		return TRUE;
//	}
//	else
//		return FALSE;
//}
//
////��ջ��ѹջ����
//int pushLinkStack(LinkStack* S, DataType element)
//{
//	LinkList* pNew;
//	pNew = new LinkList;
//	pNew->stack = element;
//	pNew->pnext = S->pTop;
//	S->pTop = pNew;
//	return TRUE;
//}
//
////��ʽջ�ĵ�ջ����
//int popLinkStack(LinkStack* S, DataType* element)
//{
//	LinkList* pFree;
//	if (isEmpty(S))
//	{
//		printf("ջΪ�գ��޷�������ջ\n");
//		return FALSE;
//	}
//	pFree = S->pTop;
//	*element = pFree->stack;
//	S->pTop = S->pTop->pnext;
//	delete pFree;
//	return TRUE;
//}
//
//
//void  showMenn()
//{
//	printf("------------------------------------------------\n");
//	printf("            ��ӭʹ�ý���ת��ϵͳ\n ");
//	printf("\t         ��1��ת���ɶ�����\n");
//	printf("\t         ��2��ת���ɰ˽���\n");
//	printf("\t         ��3��ת����ʮ������\n");
//	printf("\t         ��4���˳�\n");
//	printf("------------------------------------------------\n");
//}
//
//void transform(DataType number, LinkStack* S, int N)
//{
//	DataType restNumber;
//	while (number)
//	{
//		restNumber = number % N;
//		pushLinkStack(S, restNumber);
//		number = number / N;
//	}
//}
//
//
//int main()
//{
//	LinkStack S;
//	InitLinkStack(&S);
//	return 0;
//}



//
//typedef int DataType;
//#define TRUE 1
//#define FALSE 0
//
////��ջ
//typedef struct stacknode
//{
//	DataType data;
//	struct stacknode* next;
//}stacknode,*LinkStack;
//
////��ʼ��
//void InitLinkStack(LinkStack& L)
//{
//	L = NULL;
//}
//
//
////�ж�ջ�Ƿ�Ϊ��
//int emptyLinkStack(LinkStack L)
//{
//	if (L == NULL)
//	{
//		return FALSE;
//	}
//	else
//	{
//		return TRUE;
//	}
//}
//
//
////��ջ
//void pushLinkStack(LinkStack& L, DataType  e)
//{
//	LinkStack p;
//	p = new stacknode;
//	p->data = e;
//	p->next = L;
//	L = p;
//}
//
//
////��ջ
//
//void popLinkStack(LinkStack& L, DataType &e)
//{
//	LinkStack p;
//	p = L;
//	e = L->data;
//	L = L->next;
//	delete(p);
//}
//
//
//
//void numberConbersionL(int N, int x)
//{
//	LinkStack L;
//	int n;
//	InitLinkStack(L);
//	while (N)
//	{
//		n = N % x;
//		pushLinkStack(L, n);
//		N = N /x;
//	}
//
//	while (emptyLinkStack(L))
//	{
//		popLinkStack(L,n);
//		switch (n) {
//		case 0:case 1:case 2:case 3: case 4:case 5:
//		case 6:case 7:case 8:case 9:printf("%d", n); break;
//		case 10:printf("A"); break;
//		case 11:printf("B"); break;
//		case 12:printf("C"); break;
//		case 13:printf("D"); break;
//		case 14:printf("E"); break;
//		case 15:printf("F"); break;
//		defalt:break
//		}
//	}
//}
//
//void  showMenn()
//{
//	printf("------------------------------------------------\n");
//	printf("            ��ӭʹ�ý���ת��ϵͳ\n ");
//	printf("\t         ��1��ת���ɶ�����\n");
//	printf("\t         ��2��ת���ɰ˽���\n");
//	printf("\t         ��3��ת����ʮ������\n");
//	printf("\t         ��4���˳�\n");
//	printf("------------------------------------------------\n");
//}
//
//
//int main()
//{
//	int N, x,y;
//	showMenn();
//	printf("��������Ҫת�����Ƶ����֣�\n");
//	scanf("%d", &N);
//	printf("��ѡ����Ҫת���Ľ��ƣ�\n");
//	scanf("%d", &x);
//	switch (x)
//	{
//	case 1:y = 2;
//	case 2:y = 8;
//	case 3:y = 16;
//	case 4:break;
//	}
//	printf("ת���������Ϊ��\n");
//	numberConbersionL(N, y);
//	return 0;
//
//}
//

/*
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct {
    int data[MAXSIZE];
    int front, rear;
} SqQueue;

int InitQueue(SqQueue* Q) {
    Q->front = Q->rear = 0;
    return 1;
}

int EnQueue(SqQueue* Q, int x) {
    if ((Q->rear + 1) % MAXSIZE == Q->front % MAXSIZE) {
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    return 1;
}

int DeQueue(SqQueue* Q, int* x) {
    if (Q->front == Q->rear) {
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    return 1;
}

void print_yh_triangle(int n) {
    SqQueue Q;
    InitQueue(&Q);
    int i, j;
    for (i = 1; i <= n; i++) {
        EnQueue(&Q, 1); // ��һ��Ϊ1
        for (j = 1; j <= i; j++) {
            int x;
            DeQueue(&Q, &x);
            if (j == i) {
                printf("%d\n", x);
            }
            else {
                printf("%d ", x);
            }

            int y = 1;
            if (!DeQueue(&Q, &x)) {
                EnQueue(&Q, y); // ���һ��Ϊ1
            }
            else {
                y += x;
            }

            EnQueue(&Q, y);
        }
    }
}

int main() 
{
    int N;
    printf("��������Ҫ��ӡ��������ǵ�������\n");
    scanf("%d", &N);
    print_yh_triangle(N);
    return 0;
}
*/



#ifndef LINKQUEUE_H
#define LINKQUEUE_H
#include <iostream>
#include <assert.h>
using namespace std;
template <class T> class LinkQueueNode {
public:
	T data;
	LinkQueueNode<T>* link;
	LinkQueueNode(T& value) :data(value), link(NULL) {}
};

template <class T> class LinkQueue {
	LinkQueueNode<T>* front;
	LinkQueueNode<T>* back;

public:
	LinkQueue() :front(NULL), back(NULL) {}
	void EnQueue(T element);
	T DelQueue();
	T& GetFront();
	void MakeEmpty();
	bool IsEmpty();
};
template <class T> void LinkQueue<T>::EnQueue(T value)
{
	LinkQueueNode<T>* add = new LinkQueueNode<T>(value);
	if (back == NULL)
	{
		front = back = add;
	}
	else
	{
		back->link = add;
		back = back->link;
	}
}
template <class T> T LinkQueue<T>::DelQueue()
{
	assert(!IsEmpty());
	LinkQueueNode<T>* old = front;
	T data = old->data;
	front = front->link;
	if (back == old)
		back = NULL;
	delete old;
	return
		data;
}
template <class T> T& LinkQueue<T>::GetFront()
{
	assert(!IsEmpty());
	return front->data;
}
template <class T> void LinkQueue<T>::MakeEmpty()
{
	while (!this->IsEmpty()) {
		this->DelQueue();
	}
}

template <class T> bool  LinkQueue<T>::IsEmpty()
{
	return front == NULL;
}
#endif

template<class T> void evaluate(LinkQueue<T>& ori, LinkQueue<T>& target) {
	ori.MakeEmpty();
	while (!target.IsEmpty()) {
		ori.EnQueue(target.DelQueue());
	}
}

int main() {
	cout << "������������ǽ���i(i>2):";
	int num;
	cin >> num;
	LinkQueue<int> ori;
	ori.EnQueue(1);
	ori.EnQueue(1);
	LinkQueue<int> next;
	for (int i = 0; i < num - 2; i++) {
		next.EnQueue(1);
		while (!ori.IsEmpty()) {
			int i = ori.DelQueue();
			if (!ori.IsEmpty())
				next.EnQueue(i + ori.GetFront());
			if (ori.IsEmpty())
				next.EnQueue(i);
		}
		evaluate(ori, next);
	}
	cout << "������ǵ�" << num << "����������:" << endl;
	while (!ori.IsEmpty()) {
		cout << ori.DelQueue() << " ";
	}
	cout << endl;
	return 0;
}