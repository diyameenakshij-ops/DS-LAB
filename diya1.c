#include <stdio.h>
#include <string.h>

int main() {
char arr[100];
int n, i, j;
int found = 0;
 printf("Enter a string or character array: ");
 fgets(arr, sizeof(arr), stdin); 
 n = strlen(arr);
if (n > 0 && arr[n - 1] == '\n') {
 arr[n - 1] = '\0';
 n--;
 }
 for (i = n - 1; i >= 0; i--) {
 for (j = i - 1; j >= 0; j--) {
 if (arr[i] == arr[j]) {
    printf("The last repeated character is: '%c'\n", arr[i]);
    found = 1;
    break; 
    }
    }
    if (found) {
      break;
      }
      }
      if (!found) {
        printf("No repeated characters found in the array.\n");
        }
        return 0;
        }



