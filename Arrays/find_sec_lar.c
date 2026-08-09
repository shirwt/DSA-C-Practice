



#include <stdio.h>

int main() {
    int arr[] = {7,5,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    if (n==1) {
        printf("%d\n", arr[0]);
        printf("There's only one element");
        return 1;
    }
    
    int lar = arr[0];
    int sec_lar = arr[0];
    int i;
    for(i=1; i<n; i++) {
        if (sec_lar==lar) {
            sec_lar=arr[i];
        }
    }
    for(i=0; i<n; i++) {
        if (lar < arr[i]) {
            sec_lar = lar;
            lar = arr[i];
        }
    }
    for(i=0; i<n; i++) {
        if (sec_lar < arr[i] && lar > arr[i]) {
            sec_lar = arr[i];
        }
    }

    if (lar == sec_lar) {
        printf("There's no second largest number");
    } else {
        printf("Second largest number: %d", sec_lar);
    }

return 0;

}
