#include <stdio.h>
#include <string.h>
int main(void){
    int a,l=0;
    char b[1000];
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        scanf("%s", b);
        l = strlen(b);
        printf("%c%c\n",b[0],b[l-1]);
    }
}