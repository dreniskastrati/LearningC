#include <stdio.h>

void swap(int *a, int *b) {

  // Function works as variables are passed by their address
  // meaning original variables will be swapped through pointers
  int temp = *a;

  *a = *b;
  *b = temp;

}

int main() {
  
  int a = 5;

  int b = 10;

  printf("value of a: %d\n", a);
  printf("value of b: %d\n\n", b);

  swap(&a, &b);
  
  printf("value of a: %d\n", a);
  printf("value of b: %d\n", b);

  return 0;
}
