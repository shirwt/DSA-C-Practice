#include <stdio.h>

int main() {
    //int arr[] = {1, 0, 6, 2, 8};
    int m;
    printf("Enter the no. of elements: ");
    scanf("%d", &m);
    if (m<=0) {
        printf("Invalid input");
        return 1;
    }
    int arr[m];
    int i;
    for (i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    
    for (i=1; i<m; i++) {
        
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("\nSmallest number in the array: %d", min);
    
    
    return 0;
}
