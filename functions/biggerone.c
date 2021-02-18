#include <stdio.h>
int main() {
 int n1, n2;
 int max(int, int);
 printf("Enter two whole numbers: ");
 scanf("%d %d", &n1, &n2);
 printf("The bigger is %d\n", max(n1, n2));
} 
int max(int a, int b) {
 if (a > b) 
 return a;
 else
 return b;
} 