#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char ch,s[128],sen[128];
    scanf("%c\n%s\n%[^\n]%*c", &ch,&s,&sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
