#include <stdio.h>

int main() {
    int arr[] = {1, 0, 6, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    int i;
    for (i=1; i<n; i++) {
        
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}
