#include <stdio.h>

int main() {
int arr[] = {1,4,2,2};
int n = sizeof(arr)/sizeof(arr[0]);
int max=arr[0];
int i;
for(i=0; i < n; i++) {
    arr[i];
    if (max < arr[i]) {
        max = arr[i];
    }
}
printf("%d", max);
    return 0;
}
