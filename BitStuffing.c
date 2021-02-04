#include <stdio.h>
#include <string.h>
int main(){
char a[100];
char f[] = {'0','1','1','1','1','1','1','0','\0'};
int c=0;
printf("Enter the bits:\n");
scanf("%s",a);
printf("After bits Stuffing:\n");
printf("%s",f);
for(int i=0;i<strlen(a);i++){
    if(a[i]=='1'){
        c++;
    }
    else{
        c=0;
    }
    printf("%c",a[i]);
    if(c==5){
        printf("0");
        c=0;
    }
}
printf("%s",f);
return 0;
}