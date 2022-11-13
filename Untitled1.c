#include<stdio.h>
int main(){

    char name[100];
    int l = 0,count = 0;
    fgets(name,sizeof(name),stdin);
    while(name[l] != '\0'){
        if(name[l]=='a' || name[l]=='e' || name[l]=='i' || name[l]=='o' || name[l]=='u')
            count++;
            l++;
    };
    printf("total vowel is %d",count);
    return 0;
}
