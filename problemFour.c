#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int arr[n],revArr[n],output[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n;i++){
        revArr[i]=arr[n-1-i];
    }

    for (int i = 0; i < n;i++){
        if(arr[i]-revArr[i]<0){
            output[i]=revArr[i]-arr[i];
        }
        else{
            output[i]=arr[i]-revArr[i];
        }
    }

    for (int i = 0; i < n;i++){
        printf("%d ",output[i]);
    }

    printf("\n");
    return 0;
}


