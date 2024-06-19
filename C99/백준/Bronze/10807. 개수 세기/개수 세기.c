#include <stdio.h>
int main(void){
    int n,v;
    int sum=0;
    int arr[101];
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &v);
    for(int i=1; i<=n; i++){
        if(arr[i]==v){
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
