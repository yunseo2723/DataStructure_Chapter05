#include <stdio.h>
#include "stackS.h"

int top = -1;

//������ �������� Ȯ��
int isStackEmpty(void) {
	if (top == -1) return 1;
	else return 0;
}

//������ ��ȭ�������� Ȯ��
int isStackFull(void) {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

//������ top�� ���Ҹ� ����
void push(element item) {
	if (isStackFull()) {
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else stack[++top] = item;
}

//������ top���� ���� ����
element pop(void) {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}

//������ top ���� �˻�
element peek(void) {
	if (isStackEmpty()) {
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else return stack[top];
}

//���� ���� ���
void printStack(void) {
	int i;
	printf("\nStack [ ");
	for (i = 0; i <= top; i++)
		printf("%d ", stack[i]);
	printf("] ");
}