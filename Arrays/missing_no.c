#include <stdio.h>

int main() {
    int arr[] = {2,4, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int diff = arr[1] - arr[0];
    int miss;
    for (int i=0; i<n-1; i++) {
        if(arr[i+1] - arr[i] != diff) {
             miss = arr[i+1] - diff;
        }
    }
    
    printf("%d", miss);

    return 0;
}

// halfway done
