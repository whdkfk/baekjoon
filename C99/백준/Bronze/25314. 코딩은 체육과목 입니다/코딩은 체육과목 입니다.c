#include <stdio.h>
int main(void){
    int n;
    int sum=0;
    scanf("%d", &n);
    sum=n/4;
    for(int i=1; i<=sum; i++){
        printf("long ");
    }
    printf("int");
    return 0;
}
