#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 50

typedef struct GraphType{
  int n;
  int adj_mat[MAX_VERTICES][MAX_VERTICES];
}GraphType;

void init(GraphType* g)    //그래프 초기화
{
  g->n = 0;
  for(int r=0; r<MAX_VERTICES; r++){
    for(int c=0; c<MAX_VERTICES; c++){
      g->adj_mat[r][c] = 0;
    }
  }
}

void insert_vertex(GraphType*g, int v)
{
  if((g->n)+1 > MAX_VERTICES){
    fprintf(stderr, "그래프 정점의 개수 초과");
    return ;
  }
  g->n++;

}

void insert_edge(GraphType* g, int start, int end)
{
  if(start >= g->n || end >= g->n){
    fprintf(stderr, "정점번호 오류");
    return;
  }
  g->adj_mat[start][end] = 1;
  g->adj_mat[start][end] = 1;

}

