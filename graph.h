#pragma once
#define MAX_VERTICES 100
typedef struct {
	int n;
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphMatType;

#include <stdio.h>
#include <stdlib.h>

#include "graph.h"

extern GraphMatType* create_mat_graph();
extern void destroy_mat_graph(GraphMatType* g);
extern void init_mat_graph(GraphMatType* g);
extern void insert_vertex_mat_graph(GraphMatType* g, int v);
extern void insert_edge_mat_graph(GraphMatType* g, int s, int e);
extern void print_adj_mat(GraphMatType* g);
extern void runUserInterface(GraphMatType* root);
extern void DFS(GraphMatType* g, int start, int target, int* count);
extern void BFS(GraphMatType* g, int start, int target, int* count);