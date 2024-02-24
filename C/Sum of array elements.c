#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[1000];
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}
