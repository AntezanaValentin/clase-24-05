#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int list[n];
  for (int i = 0; i < n; i++) {
  list[i] = rand() % 100;
  printf("%d ", list[i]);
}
printf("\n");

return 0;
}
