#include <stdlib.h>
struct node{
  int value;
  struct node *next;
};
struct list{
  struct node *head;
};

void list_free(struct list *list) {
  struct node *current list->head; 
  while(current != NULL) {
    struct node *temp current; current = current->next;
    free(temp);
  } 
  free(list);
}
