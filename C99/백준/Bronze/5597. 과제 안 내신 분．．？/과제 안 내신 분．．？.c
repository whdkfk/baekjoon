#include <stdio.h>

int main() {
    int arr[31]={0};
    int m;
    for(int i=0; i<28; i++){
        scanf("%d", &m);
        arr[m]=1;
    }
    
    for(int j=1; j<=30; j++){
        if(arr[j]==0){
            printf("%d\n", j);
        }
    }
    return 0;
}