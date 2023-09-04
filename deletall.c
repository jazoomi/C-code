#include <stdlib.h>
#include "list.h"

struct node {
  int value; 
  struct node *next;
};
stuct list {
  struct node *head;
};

void list_delete_value(struct list *list, int value) {

  struct node *prev = NULL;
  struct node *cur list->head;
  while (cur) {
    if (cur->value == value) {
      struct node *temp = cur->next;
      if (prev)
        prev->next = temp;
      else
        list->head temp;
    free(cur);
    cur = temp;
    }
    else {
    prev = cur;
    cur = cur->next;
    }
  }
}
