#include <stdio.h>

// ---------- HELPER FUNCTIONS ----------

void old_swap(int a, int b) { 

  // Function does not function as it should as it passes by-value
  // meaning original variable will not be swapped
  int temp;

  temp = a;
  
  a = b;
  b = temp;
}

void new_swap(int *a, int *b) {
  
  // Function works as variables are passed by their address
  // meaning original variables will be swapped through pointers
  int temp = *a;
  
  *a = *b;
  *b = temp;

}

int main() {

  // ---------- E1 ----------
  int a = 5;
  int *x = &a;
  
  printf("Address of int variable a is %p\n", x);
  printf("Value of int variable a is %d\n", *x);
  printf("\n\n");

  // ---------- E2 ----------

  int b = 1;
  int c = 2;
  
  printf("First attempt of trying to swap\n\n"); 
  printf("value of b: %d\n", b);
  printf("value of c: %d\n\n\n", c);

  old_swap(b,c);

  printf("value of b: %d\n", b);
  printf("value of c: %d\n\n\n", c);
 
  // ---------- E3 ----------
  
  printf("Second attempt of trying to swap\n\n");
  printf("value of b: %d\n", b);
  printf("value of c: %d\n\n\n", c);

  new_swap(&b,&c);

  printf("value of b: %d\n", b);
  printf("value of c: %d\n\n\n", c);
   
  return 0;

}
