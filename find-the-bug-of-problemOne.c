#include <stdio.h>
#include <string.h>

void myStrrev(char *str){
    int i, len, temp;
    len = strlen(str);
    for(i=0;i<len/2;i++){
        temp = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}
int main() {
    char a[100], b[100],jogfol[101];
    scanf("%s %s", &a,&b);
    myStrrev(a);
    myStrrev(b);
    int i=0,j=0,k=0,hate=0;
    while(i<strlen(a) && j<strlen(b)){
        int sum = (a[i]-'0')+(b[j]-'0')+hate;
        jogfol[k]=(sum%10)+'0';
        hate = sum/10;
        i++;
        j++;
        k++;
     }

    while(i<strlen(a)){
    int sum = (a[i]-'0')+hate;
        jogfol[k]=(sum%10)+'0';
        hate = sum/10;
        i++;
        k++;
    }
    while(j<strlen(b)){
        int sum =(b[j]-'0')+hate;
        jogfol[k]=(sum%10)+'0';
        hate = sum/10;
        j++;
        k++;
    }
    if(hate!=0){
        jogfol[k]=hate+'0';
        k++;
    }
    jogfol[k]='\0';
    myStrrev(jogfol);
    printf("%s",jogfol);
    return 0;
}
