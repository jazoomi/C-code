#include <stdlib.h>
struct node {
  int value;
  struct node *next;
};
struct list {
  struct node *head;
};
// changes all elements in a list via given function
void list_apply_function(struct list *list, int (*fn)(int)) {
  struct node *current = list->head; 
  while (current !- NULL) {
    current->value = fn(current->value);
    current = current->next;
  }
}
