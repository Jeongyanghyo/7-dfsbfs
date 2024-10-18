#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void init_queue(QueueType* q) {
    q->front = 0;
    q->rear = 0;
}

bool is_empty_queue(QueueType* q) {
    return q->front == q->rear;
}

bool is_full_queue(QueueType* q) {
    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

void enqueue(QueueType* q, int item) {
    if (is_full_queue(q)) {
        fprintf(stderr, "Queue is full\n");
        exit(1);
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

int dequeue(QueueType* q) {
    if (is_empty_queue(q)) {
        fprintf(stderr, "Å½»ö ½ÇÆÐ\n");
        exit(1);
    }
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

int peek_queue(QueueType* q) {
    if (is_empty_queue(q)) {
        fprintf(stderr, "Queue is empty\n");
        exit(1);
    }
    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}
