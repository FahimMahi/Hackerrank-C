#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k){
    int MAND=0,MOR=0,MXOR=0;
    for (int a=1; a<n; a++){
        for (int b=a+1; b<=n; b++){
            int and = a&b;
            if((and>MAND) && (and<k)){
                MAND=and;
            }
            int or = a|b;
            if((or>MOR) && (or<k)){
                MOR=or;
            }
            int xor = a^b;
            if((xor>MXOR) && (xor<k)){
                MXOR=xor;
            }
        }
    }
    printf("%d \n",MAND);
    printf("%d \n",MOR);
    printf("%d \n",MXOR);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
