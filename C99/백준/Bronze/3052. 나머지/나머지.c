#include <stdio.h>
int main(void){
    int sum=0;
    int num=0;
    int arr[1001];
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        arr[i]=arr[i]%42;
    }
    for(int i=0; i<10; i++){
        sum=0;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j])
                sum++;
        }
        if(sum==0)
            num++;
    }
    printf("%d", num);
    return 0;
}
