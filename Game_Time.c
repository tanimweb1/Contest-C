#include <stdio.h>

int main() {


    // bee 1046
    int s, end, d;

    scanf("%d %d", &s, &end);

    if(s < end){
        d = end - s;
    }
    else{
        d = (24 - s) + end;
    }

    printf("O JOGO DUROU %d HORA(S)\n", d);

    return 0;
}