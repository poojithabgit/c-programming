#include<stdio.h>
int main(){
int array[3][3],i,j,max;
clrscr();
printf("enter elements of the matrix (3*3):\n:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&array[i][j]);
}
}
max=array[0][0];
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(array[i][j]>max){
max=array[i][j];
}
}
}
printf("maximum elements:%d\n",max);
return 0;
}









