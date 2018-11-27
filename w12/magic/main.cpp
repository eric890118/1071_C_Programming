#include "magic.h"

int main(){
  int m[MAX][MAX]={0};
  int N;

  printf("Enter N: ");
  scanf("%d",&N);
  for(int pos=1;pos<=4;pos++){
    for(int type=1;type<=2;type++) {
      reset(m);
      magic(m,type,N,pos);
      prmagic(m,N);
      printf("\n");
      compSum(m,N);
      prmagicSum(m,N+1);
      printf("\n\n");
    }
  }
}
