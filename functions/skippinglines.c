#include <stdio.h>
int main() {
 void skipLines(int);
 printf("Sing a song of Swan Mendes\n");
 skipLines(4);
 printf("A pocket full of rye\n");
} 
void skipLines(int n) {
 for (int h = 1; h <= n; h++)
 printf("\n");
} 
