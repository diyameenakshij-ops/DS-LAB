#include <stdio.h>

int main() {
int arr[] = {2, 3, 4, 5, 6, 1, 2, 3, 4};
int size = sizeof(arr) / sizeof(arr[0]);
printf("Elements that appear exactly once: \n");
for (int i = 0; i < size; i++) {
  int count = 0;
  for (int j = 0; j < size; j++) {
    if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}


