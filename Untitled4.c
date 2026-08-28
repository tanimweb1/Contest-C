#include<stdio.h>
int main(){


char ab,ac,bc;
scanf("%c %c %c",&ab,&ac,&bc);

int A = 0,B=0,C=0;

if(ab == '<' && ac =='<')
    printf("A\n");

else if(ab == '>' && bc =='<')
    printf("B\n");
else
printf("C/n");
return 0;
}


