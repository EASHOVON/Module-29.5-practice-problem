#include <stdio.h>

int main(void){
    char alpha[101];
    scanf("%s",&alpha);
    for (int i = 0;i<strlen(alpha);i++){
        if(alpha[i]=='a' || alpha[i]=='e' || alpha[i]=='i' || alpha[i]=='o' || alpha[i]=='u'){
            printf("%d ",i);
        }
    }
    return 0;
}
