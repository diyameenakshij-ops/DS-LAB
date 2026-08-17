#include <stdio.h>

#define BLOCKS 2
#define ROWS   3
#define COLS   4
int main() {
int array[BLOCKS][ROWS][COLS] = {
{
{12, 34, 56, 78},
{23, 45, 67, 89},
{34, 56, 78, 90}
},
{
{11, 22, 33, 44},
{55, 66, 77, 88},
{99, 10, 20, 30}
}
};
int target;
int found = 0; 
printf("Enter the element to search: ");
scanf("%d", &target);
for (int i = 0; i < BLOCKS; i++) {
for (int j = 0; j < ROWS; j++) {
for (int k = 0; k < COLS; k++) {
if (array[i][j][k] == target) {
printf("Element %d found at position: Block %d, Row %d, Column %d\n", target, i, j, k);
found = 1; 
break; 
}
}
if (found) break; 
}
if (found) break; 
 }
if (!found) {
printf("Element %d not found in the 3D array.\n", target);
}
return 0;
}

