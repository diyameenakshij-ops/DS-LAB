#include <stdio.h>
#include <string.h>

int main() {
char arr[] = "abcdefgha"; 
int n = strlen(arr);
int found = 0;
for (int i = n - 1; i >= 0; i--) {
for (int j = i - 1; j >= 0; j--) {
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
   printf("No repeated characters found.\n");
   }
   return 0;
   }

