#include<stdio.h>
int main(){
int array1[2][2],array2[2][2],product[2][2]={0},i,j,k;
clrscr();
printf("enter elements of first matrix (2*2):\n:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&array1[i][j]);
}
}
printf("enter elements of second matrix (2*2):\n:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&array2[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
for(k=0;k<2;k++)
product[i][j]=product[i][j]+array1[i][k]*array2[k][j];
}
}
printf("product of two martices:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d ",product[i][j]);
}
printf("\n");
}
return 0;
}
