// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("enter no. of elements: ");
    scanf("%d", &a);
    int arr[a];
    
    int sum = 0;
    for (int i=0; i<a; i++) {
        sum += arr[i];
    }
    printf("Sum: %d", sum);

    return 0;
}
