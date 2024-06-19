#include <stdio.h>
int main(void){
    int n,x;
    int arr[10001];
    scanf("%d %d", &n, &x);
    for(int i=1; i<=n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i]<x)
            printf("%d ", arr[i]);
    }
    return 0;
}
