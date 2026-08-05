#include <stdio.h>

int main() {
    int arr[] = {3,9,1,5,56};
    int target;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the element: ");
    scanf("%d", &target);

    for (int i=0; i<n; i++) {
        if (arr[i] == target) {
            printf("%d", i);
            return 1;
        }
        
    }
    printf("not found");

    return 0;
}

