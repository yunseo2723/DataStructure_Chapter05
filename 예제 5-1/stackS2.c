#include <stdio.h>
#include "stackS2.h"

int top = -1;

//���� ����
StackType* createStack() {
	StackType* S;
	S = (StackType*)malloc(sizeof(StackType));
	S->top = -1;
	return S;
}

//������ �������� Ȯ��
int isStackEmpty(StackType* S) {
	if (S->top == -1) return 1;
	else return 0;
}

//������ ��ȭ�������� Ȯ��
int isStackFull(StackType* S) {
	if (S->top == STACK_SIZE - 1) return 1;
	else return 0;
}

//������ top�� ���Ҹ� ����
void push(StackType* S, element item) {
	if (isStackFull(S)) {
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else S->stack[++S->top] = item;
}

//������ top���� ���� ����
element pop(StackType* S) {
	if (isStackEmpty(S)) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return S->stack[S->top--];
}

//������ top ���� �˻�
element peek(StackType* S) {
	if (isStackEmpty(S)) {
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else return S->stack[S->top];
}

//���� ���� ���
void printStack(StackType* S) {
	int i;
	printf("\nStack [ ");
	for (i = 0; i <= S->top; i++)
		printf("%d ", S->stack[i]);
	printf("] ");
}