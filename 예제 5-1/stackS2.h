#pragma once
#define STACK_SIZE 100
typedef int element;

typedef struct {
	element stack[STACK_SIZE];
	int top;
} StackType;

StackType* createStack();
int isStackEmpty(StackType* S);
int isStackFull(StackType* S);
void push(StackType* S, element item);
element pop(StackType* S);
element peek(StackType* S);
void printStack(StackType* S);