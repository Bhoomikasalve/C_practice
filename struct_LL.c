#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int value;
    struct lnode *next;
};

struct list {
  struct lnode *head;
  struct lnode *tail;
};


void list_add(lst, value)
    struct list *lst;
    int value;
{
    struct lnode *new = (struct lnode *)malloc(sizeof(struct lnode));
    new->value = value;
    new->next = NULL;
    if(lst->head == NULL) lst->head = new;
    if(lst->tail != NULL) lst->tail->next = new;
    new->value = value;
    new->next = NULL;
    lst->tail = new;  
  
}

struct lnode * list_find(lst, value)
    struct list *lst;
    int value;
{
  struct lnode* curr;
  for(curr = lst->head; curr != NULL; curr=curr->next){
    if(curr->value == value) return curr;
  }
  return NULL;
}


int main()
{
    void list_add();
    void list_dump();
    struct lnode * list_find();

    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    mynode = list_find(&mylist, 42);
    if ( mynode == NULL ) {
        printf("Did not find 42\n");
    } else {
        printf("Looked for 42, found %d\n", mynode->value);
    }

    mynode = list_find(&mylist, 30);
    if ( mynode == NULL || mynode->value != 30) {
        printf("Did not find 30\n");
    } else {
        printf("Found 30\n");
    }

    list_add(&mylist, 40);
    list_dump(&mylist);
    
return 0;
}

void list_dump(lst)
    struct list *lst;
{
    struct lnode *cur;
    printf("\nDump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        printf("  %d\n", cur->value);
    }
}