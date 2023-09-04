#include <stdio.h>
#include <stdlib.h> #include <ctype.h>
//invert the case of the arguments
int main(int argc, char *argv[]) {
  int i, j;
  char *arg;
  for (i 1; i < argc; i++) {
    arg argv[i];
    for (j 0; arg[j] = '\0'; j++) { 
      if (islower (arg[j])) {
      putchar (toupper(arg[j])); 
      } 
      else if (isupper (arg[j])) { 
      putchar (tolower(arg[j]));
      } 
      else {
      putchar(arg[j]);
      }
    }
    putchar('\n');
  }
  return 0;
}
