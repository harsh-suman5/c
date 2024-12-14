#include <stdio.h>

int main(){
    int i;
    double sub=1;
    for(i=1;i<=50;i++){
        printf("%d ", i);
        sub=sub/i;
    }
    printf("\nthe sum of given number: %lld",sub);
    return 0;
}