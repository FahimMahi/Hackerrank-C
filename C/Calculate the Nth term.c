#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int a, int b, int c, int n) {
  if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
    else
        return find_nth_term(a, b, c, n-1) +
               find_nth_term(a, b, c, n-2) +
               find_nth_term(a, b, c, n-3);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(a, b, c, n);
 
    printf("%d", ans); 
    return 0;
}