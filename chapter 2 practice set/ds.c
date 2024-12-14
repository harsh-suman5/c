#include <stdio.h>

void main() {
    int i, loc, max, n, data[10];
    loc = 0;
    n = 10;
    
    printf("Enter 10 numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    
    max = data[0];
    
    for(i = 1; i < n; i++) {
        if (max < data[i]) {
            max = data[i];
            loc = i;
        }
    }
    
    printf("Maximum value: %d\n", max);
    printf("Location of maximum value: %d\n", loc);
}

