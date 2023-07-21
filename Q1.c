#include <stdio.h>

int main(){
    int count = 0;
    char str[100];
    char *ptr;
    printf("Enter string: ");
    scanf("%s",str);

    ptr = str;


    while(*ptr != '\0'){
        if((int)*ptr == 32){
            continue;
        }
        count++;
        ptr++;
    }
    printf("Length of the string is %d",count);

}