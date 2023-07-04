#include <stdio.h>
#include "stackS2.h"

int top = -1;

//스택 생성
StackType* createStack() {
	StackType* S;
	S = (StackType*)malloc(sizeof(StackType));
	S->top = -1;
	return S;
}

//스택이 공백인지 확인
int isStackEmpty(StackType* S) {
	if (S->top == -1) return 1;
	else return 0;
}

//스택이 포화상태인지 확인
int isStackFull(StackType* S) {
	if (S->top == STACK_SIZE - 1) return 1;
	else return 0;
}

//스택의 top에 원소를 삽입
void push(StackType* S, element item) {
	if (isStackFull(S)) {
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else S->stack[++S->top] = item;
}

//스택의 top에서 원소 삭제
element pop(StackType* S) {
	if (isStackEmpty(S)) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return S->stack[S->top--];
}

//스택의 top 원소 검색
element peek(StackType* S) {
	if (isStackEmpty(S)) {
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else return S->stack[S->top];
}

//스택 원소 출력
void printStack(StackType* S) {
	int i;
	printf("\nStack [ ");
	for (i = 0; i <= S->top; i++)
		printf("%d ", S->stack[i]);
	printf("] ");
}