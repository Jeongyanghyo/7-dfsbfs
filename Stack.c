#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void init_stack(StackType* s) {
    s->top = -1;
}

int is_empty(StackType* s) {
    return (s->top == -1);
}

int is_full(StackType* s) {
    return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s, int item) {
    if (is_full(s)) {
        fprintf(stderr, "Stack is full\n");
        return;
    }
    s->data[++(s->top)] = item;
}

int pop(StackType* s) {
    if (is_empty(s)) {
        fprintf(stderr, "Stack is empty\n");
        exit(1);
    }
    return s->data[(s->top)--];
}

int peek(StackType* s) {
    if (is_empty(s)) {
        fprintf(stderr, "Stack is empty\n");
        exit(1);
    }
    return s->data[s->top];
}
