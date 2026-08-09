//reversing array using an extra array
#include <stdio.h>
int reverse(int arr[], int n, int arr_2[])
{
    int i;
    
    for(i=n-1; i>=0; i--) {
        arr_2[n-1-i] = arr[i];
    }
    return 0;
}
int main() {
    
    int n;
    
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
     int arr_2[n];
    
    reverse(arr,n,arr_2);
    
     for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    for(i=0; i<n; i++) {
        printf("%d ", arr_2[i]);
    }

    return 0;
}
