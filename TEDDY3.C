#include<stdio.h>
#define M 3
#define N 3
void print(int array[M][N]){
int i,j;
for(i=0;i<M;i++){
for(j=0;j<N;j++)
printf("%d",array[i][j]);
printf("\n");
}
}
int main(){
int array[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}
};
clrscr();
print(array);
return 0;
}