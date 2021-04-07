
#include <stdio.h>
#include <stdlib.h>

#define N 32765

int main(void) {
  int x, y, i=0, j=0, v[N];
  for(i=0; i<N;i++){
    v[i]=2*i;
    printf("%d ",v[i]);
  }
  printf("\nQual valor deseja buscar?\n");
  scanf("%d",&x);
  if(x<=v[N-1]){
    for(i=0; i<N;i++){
      printf("%d ",v[i]);
      j++;
      if (v[i]==x){
        printf("\nesta no vetor");
        printf("\nforam feitas %d procuras pelo item",j);
        return 0;
      }
    }
  }
  printf("\nnão esta no vetor");
  printf("\nforam feitas %d procuras pelo item",j);
  return 0;
}