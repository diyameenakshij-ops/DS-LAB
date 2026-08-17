#include <stdio.h>
void reverse(int arr[], int start, int end) {
while (start < end) {
int temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end--;
}
}
void leftRotate(int arr[], int size, int k) {
    if (size == 0) return;
    k = k % size; 
    reverse(arr, 0, k - 1);
    reverse(arr, k, size - 1);
    reverse(arr, 0, size - 1);
}
void rightRotate(int arr[], int size, int k) {
   if (size == 0) return;
   k = k % size; 
   reverse(arr, 0, size - 1);
   reverse(arr, 0, k - 1);
   reverse(arr, k, size - 1);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
int arr1[] = {1, 2, 3, 4, 5, 6, 7};
int size = sizeof(arr1) / sizeof(arr1[0]);
int k = 3;
int arr2[] = {1, 2, 3, 4, 5, 6, 7};
printf("Original Array: ");
printArray(arr1, size);
leftRotate(arr1, size, k);
printf("Left Rotated by %d positions:  ", k);
printArray(arr1, size);
rightRotate(arr2, size, k);
printf("Right Rotated by %d positions: ", k);
printArray(arr2, size);
return 0;
}

