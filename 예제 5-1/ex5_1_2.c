#include <stdio.h>
#include "stackS2.h"

int main(void) {
	StackType* S1 = createStack();
	StackType* S2 = createStack();
	element item;
	printf("\n** 순차 스택 연산 **\n");
	printf("\n\nS1 스택 출력");
	printStack(S1);
	printf("\n\nS2 스택 출력");
	printStack(S2);
	printf("\n\nS1 push 연산");
	push(S1,1); printStack(S1);
	push(S1,2); printStack(S1);
	push(S1,3); printStack(S1);
	printf("\n\nS2 push 연산");
	push(S2, 4); printStack(S2);
	push(S2, 5); printStack(S2);
	push(S2, 6); printStack(S2);

	item = peek(S1); printf("\n\nS1과 S2 스택 출력"); printStack(S1);
	printf("S1 peek => %d", item);

	item = peek(S2); printStack(S2);
	printf("S2 peek => %d", item);

	printf("\t\n\n S1 pop 연산");
	item = pop(S1); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S1); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S1); printStack(S1);
	printf("\tpop  => %d", item);

	printf("\t\n\n S2 pop 연산");
	item = pop(S2); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S2); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S2); printStack(S1);
	printf("\tpop  => %d\n", item);

	getchar(); return 0;
}