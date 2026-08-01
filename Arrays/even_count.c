#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for (int i=0; i<n; i++) {
        if (arr[i]%2==0){
            count ++;
        }
    }
    printf("%d", count);

    return 0;
}
