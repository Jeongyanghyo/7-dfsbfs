#pragma once

#include <stdbool.h>

#define MAX_QUEUE_SIZE 100

typedef struct {
    int data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} QueueType;

void init_queue(QueueType* q);
bool is_empty_queue(QueueType* q);
bool is_full_queue(QueueType* q);
void enqueue(QueueType* q, int item);
int dequeue(QueueType* q);
int peek_queue(QueueType* q);
