#include <stdio.h>
int main(void){
    int n;
    int min=1000000000;
    int max=-1000000000;
    int arr[1000001];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(min>arr[i]){
            min=arr[i];
        }if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}
