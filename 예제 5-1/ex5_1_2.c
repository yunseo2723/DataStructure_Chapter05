#include <stdio.h>
#include "stackS2.h"

int main(void) {
	StackType* S1 = createStack();
	StackType* S2 = createStack();
	element item;
	printf("\n** ���� ���� ���� **\n");
	printf("\n\nS1 ���� ���");
	printStack(S1);
	printf("\n\nS2 ���� ���");
	printStack(S2);
	printf("\n\nS1 push ����");
	push(S1,1); printStack(S1);
	push(S1,2); printStack(S1);
	push(S1,3); printStack(S1);
	printf("\n\nS2 push ����");
	push(S2, 4); printStack(S2);
	push(S2, 5); printStack(S2);
	push(S2, 6); printStack(S2);

	item = peek(S1); printf("\n\nS1�� S2 ���� ���"); printStack(S1);
	printf("S1 peek => %d", item);

	item = peek(S2); printStack(S2);
	printf("S2 peek => %d", item);

	printf("\t\n\n S1 pop ����");
	item = pop(S1); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S1); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S1); printStack(S1);
	printf("\tpop  => %d", item);

	printf("\t\n\n S2 pop ����");
	item = pop(S2); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S2); printStack(S1);
	printf("\tpop  => %d", item);

	item = pop(S2); printStack(S1);
	printf("\tpop  => %d\n", item);

	getchar(); return 0;
}