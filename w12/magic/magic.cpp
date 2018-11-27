#include "magic.h"


void magic_diag(int m[][MAX], int N, int pos){
  int row, col;
  switch(pos){
  case BOTTOM:
      row = N-1;
      col = N/2;
      m[row][col]=1;
      for(int i=2;i<=N*N;i++){
        if(i%N==1)
            row = (row-1+N)%N;
        else{
            row = (row+1)%N;
            col = (col+1)%N;
        }
        m[row][col] = i;
      }
      break;
  case LEFT:

      break;
  }
}

void magic_knight(int m[][MAX], int N, int pos){
  int row, col;
  switch(pos){
  case BOTTOM:
      row = N-1;
      col = N/2;
      m[row][col]=1;
      for(int i=2;i<=N*N;i++){
        if(i%N==1)
            row = (row-1+N)%N;
        else{
            row = (row-2+N)%N;
            col = (col+1)%N;
        }
        m[row][col] = i;
      }
      break;
  case LEFT:

      break;
  }
}

void reset(int m[][MAX]){
  for(int i=0;i<MAX;i++){
    for(int j=0;j<MAX;j++)
      m[i][j] = 0;
  }
}

void prchar(char c, int N){
  for(int i=1;i<=N;i++) printf("%c", c);
}

void prmagic(int m[][MAX],int N){
  for(int i=0;i<N;i++){
    prchar('-', N*6); printf("-\n");
    for(int j=0;j<N;j++)
      printf("| %3d ", m[i][j]);
    printf("|\n");
  }
  prchar('-', N*6); printf("-\n");
}

void prmagicSum(int m[][MAX], int N){
  prchar(' ', (N-1)*6); printf("| %3d |\n", m[N-1][N]);
  prmagic(m,N);
}

void magic(int m[][MAX], int type, int N, int pos){
  if(type==1)
     magic_diag(m,N,pos);
  else
     magic_knight(m,N,pos);
}

void compSum(int m[][MAX], int N){
   for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        m[i][N] += m[i][j];
        m[N][j] += m[i][j];
        if(i==j) m[N][N] += m[i][j];
        if(i+j==N-1) m[N][N+1] += m[i][j];
      }
   }
}
