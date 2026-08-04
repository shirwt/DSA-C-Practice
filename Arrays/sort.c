#include <stdio.h>

int main() {
    int arr[] = {4,2, 6};
    int sorted = 1;

    for (int i=0; i<3; i++) {
        if (arr[i] <= arr[i-1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted) 
        printf("Sorted");
    else 
        printf("Not sorted");
    
    return 0;
}
