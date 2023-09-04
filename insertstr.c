#include <stdlib.h>
#include <string.h>
struct node{
  char *str
  struct node *next;
};
struct list {
  struct node *head;
};

//inserts a new string
void list_insert_str(struct list *list, const char *new_str) {
    // Allocate memory for the new node
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        exit(EXIT_FAILURE);
    }

    // Allocate memory for the new string
    char *new_str_copy = strdup(new_str);
    if (new_str_copy == NULL) {
        free(new_node); // Free the new_node if strdup fails
        exit(EXIT_FAILURE);    
    }

    // Initialize the new node
    new_node->str = new_str_copy;
    new_node->next = NULL;

    // Find the correct position to insert the new node
    struct node *current_node = list->head;
    struct node *prev_node = NULL;

    while (current_node != NULL && strcmp(current_node->str, new_str) < 0) {
        prev_node = current_node;
        current_node = current_node->next;
    }

    // Check if the new string is already in the list
    if (current_node != NULL && strcmp(current_node->str, new_str) == 0) {
        free(new_str_copy); // Free the duplicated string if it's a duplicate
        free(new_node);    // Free the new node
        return;
    }

    // Insert the new node
    if (prev_node == NULL) {
        // Insert at the beginning of the list
        new_node->next = list->head;
        list->head = new_node;
    } else {
        // Insert in the middle or at the end of the list
        new_node->next = current_node;
        prev_node->next = new_node;
    }
}
