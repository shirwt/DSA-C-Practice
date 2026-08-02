// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {34, 5, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, temp;
    int last = n-1;
    for (i=0; i<n/2; i++) {
        temp = arr[i];
        arr[i] = arr[last];
        arr[last] = temp;
        last--;
    }
    printf("Reversed array: \n");
    for (i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
