#include <stdlib.h>
//returns a dynamiccally allocated array
int *dynamic_array(int n) {
  int arr malloc(n* sizeof(int));
  for (int i=0; i<n; i++){ 
    *(arr +i) =i;
  }
  return arr;
}
