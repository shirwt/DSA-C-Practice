//not completed yet
#include <stdio.h>

int main() {
    int arr[] = {6,5,3,7};
    
    for(int i=0; i<4; i++) {
        if (!(arr[i] < arr[i+1])) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        break;
    }
    for(int i=0;i<4; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
