#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strsort(const char ** strarray, int n) {
}

void print_array(const char ** strarray, int n) {
  for (int i =0 ; i < n; i++) {
    printf("%d: %s\n", i, strarray[i]);
  }
}

int main(void) {
  const char * array1[8] = {"zucchini", "cake", "bread", "grapes", "french fries", "apples", "diced peaches", "eggplant"};
  strsort(array1,8);
  print_array(array1,8);

  return 0;
}
