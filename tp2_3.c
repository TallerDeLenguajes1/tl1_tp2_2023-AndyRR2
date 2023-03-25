#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
int i,j;
int mt[N][M], *col;
srand(time(NULL));
col=&mt[0][0];
for(i = 0;i<N; i++)
{
  for(j = 0;j<M; j++)
  {
   *col=1+rand()%100;
   printf("%d ",*col);
   col++;
  }
  col=&mt[i][j];
  printf("\n");
}
printf("%d",mt[2][2]);
printf("%d",mt[2][3]);

    return(0);
}