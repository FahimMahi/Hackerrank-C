#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char num[1001];
    int frequency[10] = {0};

    scanf("%s", num);

    // Counting the frequency of each digit
    for (int i = 0; num[i] != '\0'; i++) {
        if (isdigit(num[i])) { // Check if the character is a digit
            int digit = num[i] - '0'; // Convert character to integer
            frequency[digit]++; // Increment the frequency of the digit
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", frequency[i]);
    }
    printf("\n");

    return 0;
}
