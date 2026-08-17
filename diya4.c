#include <stdio.h>

int main() {
int arr[] = {4, 2, 8, 2, 3, 4, 4, 9, 1};
int n = sizeof(arr) / sizeof(arr[0]);
int most_repeated_element = arr[0];
int max_count = 0;
for (int i = 0; i < n; i++) {
int current_count = 0;
for (int j = 0; j < n; j++) {
if (arr[i] == arr[j]) {
current_count++;
}
}
if (current_count > max_count) {
  max_count = current_count;
  most_repeated_element = arr[i];
  }
  }
  printf("The most repeated number is: %d\n", most_repeated_element);
  printf("It appears %d times.\n", max_count);
  return 0;
}

