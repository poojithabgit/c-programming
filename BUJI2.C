#include<stdio.h>
int main(){
int i;
FILE *file;
char*lines[]={"hello wooeld!","this is poojitha","siet college","ai&ds branch","tumakuru"};
file = fopen("lines.txt","w");
if(file ==NULL){
printf("error opning the file.\n");
return 1;
}
for(i=0;i<3;i++){
fprintf(file,"%s\n",lines[i]);
}
fclose(file);
printf("lines written to files successfully.\n");
return 0;
}
