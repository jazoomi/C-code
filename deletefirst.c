#include <stdlib.h>
struct node{ 
  int value;
  struct noode *next;
};
struct list{
  struct node *head;
};
//delet's first elemnt in list. return -1 if empty
int list_delete_first (struct list *list) {
  if (list->head == NULL) {
    return -1;
  }
  
  struct node *node_to_delete list->head; 
  int value_to_return = node_to_delete->value;
  
  list->head node_to_delete->next; 
  free (node_to_delete);
  
  return value_to_return;
  }
