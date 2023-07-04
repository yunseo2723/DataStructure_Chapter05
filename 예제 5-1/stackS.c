#include <stdio.h>
#include "stackS.h"

int top = -1;

//스택이 공백인지 확인
int isStackEmpty(void) {
	if (top == -1) return 1;
	else return 0;
}

//스택이 포화상태인지 확인
int isStackFull(void) {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

//스택의 top에 원소를 삽입
void push(element item) {
	if (isStackFull()) {
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else stack[++top] = item;
}

//스택의 top에서 원소 삭제
element pop(void) {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}

//스택의 top 원소 검색
element peek(void) {
	if (isStackEmpty()) {
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else return stack[top];
}

//스택 원소 출력
void printStack(void) {
	int i;
	printf("\nStack [ ");
	for (i = 0; i <= top; i++)
		printf("%d ", stack[i]);
	printf("] ");
}