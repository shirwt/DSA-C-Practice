

#include <stdio.h>

int main() {
    int arr[] = {1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int actual_diff=-1;
    int i, j;
    for(i=0; i<n-1; i++) {
        int diff = arr[i+1] - arr[i];
        
        for(j=0; j<n-1; j++) {
            int diff_2 = arr[j+1] - arr[j];
            if(diff == diff_2) {
                actual_diff = diff;
            }
        }
    }
    int miss;
    for (int i=0; i<n-1; i++) {
        if(arr[i+1] - arr[i] != actual_diff) {
             miss = arr[i+1] - actual_diff;
        }
    }
    
    printf("%d", miss);

    return 0;
}
