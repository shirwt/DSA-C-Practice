#include <stdio.h>

int main() {
    int n, i, tar; 
    int freq = 0;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    
    if (n<=0) {
        printf("Invalid input");
        return 1;
    }
    
    int  arr[n];
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the no. that you want to find frequency of: ");
    scanf("%d", &tar);
    
    
    for (i=0; i<n; i++) {
        if (tar==arr[i]) {
            freq += 1;
        }
    }
    
    printf("The frequency of %d is %d.", tar, freq);
    
    
    return 0;
}
