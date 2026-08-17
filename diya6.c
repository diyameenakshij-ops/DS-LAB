#include <stdio.h>
#include <string.h>
int main() {
char arr[] = "abcdefbg"; 
int length = strlen(arr);
int seen[256] = {0}; 
int found = 0;
for (int i = 0; i < length; i++) {
unsigned char current_char = arr[i];
if (seen[current_char] == 1) {
printf("The first repeated character is: '%c'\n", current_char);
found = 1;
break; 
}
seen[current_char] = 1;
}
if (!found) {
printf("No repeated character found in the array.\n");
}
return 0;
}

