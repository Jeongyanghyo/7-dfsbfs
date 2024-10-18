#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"
#include "graph.h"

int main() {

	GraphMatType* g;

	g = create_mat_graph();
	init_mat_graph(g);

	insert_vertex_mat_graph(g, 0);
	insert_vertex_mat_graph(g, 1);
	insert_vertex_mat_graph(g, 2);
	insert_vertex_mat_graph(g, 3);
	insert_vertex_mat_graph(g, 4);
	insert_vertex_mat_graph(g, 5);
	insert_vertex_mat_graph(g, 6);
	insert_vertex_mat_graph(g, 7);
	insert_vertex_mat_graph(g, 8);
	insert_vertex_mat_graph(g, 9);
	insert_vertex_mat_graph(g, 10);

    insert_edge_mat_graph(g, 0, 2);
    insert_edge_mat_graph(g, 0, 4);
    insert_edge_mat_graph(g, 0, 5);
    insert_edge_mat_graph(g, 0, 6);
	insert_edge_mat_graph(g, 0, 9);

    insert_edge_mat_graph(g, 1, 4);
    insert_edge_mat_graph(g, 1, 7);
    insert_edge_mat_graph(g, 1, 10);
	insert_edge_mat_graph(g, 1, 5);

    insert_edge_mat_graph(g, 2, 3);
    insert_edge_mat_graph(g, 2, 4);

    insert_edge_mat_graph(g, 3, 4);
    insert_edge_mat_graph(g, 3, 5);

    insert_edge_mat_graph(g, 4, 5);
    insert_edge_mat_graph(g, 4, 6);
    insert_edge_mat_graph(g, 4, 7);

    insert_edge_mat_graph(g, 6, 7);
    insert_edge_mat_graph(g, 6, 8);

    insert_edge_mat_graph(g, 7, 10);

    insert_edge_mat_graph(g, 8, 9);
	insert_edge_mat_graph(g, 8, 10);
	runUserInterface(g);

	destroy_mat_graph(g);





}