#include <stdio.h>
#include <stdlib.h>
//prints the sum of all arguments
int main(int argc, char *argv[]) {

  int sum;
  sum = 0;
  for (int counter = 1; argv[counter] != NULL; ++counter) {
  sum += atoi(argv[counter]); //atoi converts string to integer
  }
  return printf("%d", sum);
}
