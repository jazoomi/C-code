#include <stdlib.h>
#include "list.h"

struct node {
  int value; 
  struct node *next;
};
struct list {
  struct node *head;
};

//duplicates a list
struct list* list_duplicate(struct list *old_list) {
    struct list *list_banana = malloc(sizeof(struct list));
    list_banana->head = NULL;

    struct node* current = old_list->head;
    struct node* current_new = NULL;

    while (current != NULL) {
        struct node* n = malloc(sizeof(struct node));
        n->value = current->value;
        n->next = NULL;

        if (current_new == NULL) {
            list_banana->head = n;
        } else {
            current_new->next = n;
        }

        current_new = n;
        current = current->next;
    }

    return list_banana;
}
