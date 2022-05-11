#include<stdio.h>
#include<stdlib.h>
#include<singly_linked_list_node.h>

 
typedef struct NODE {
    struct NODE *link;
    int value;
} Node;
 
 
int sll_remove(struct Node **rootp,struct Node *node) {
    if(node == NULL) {
        return 0;
    }Node *p;
    
    while ((p = *rootp) != NULL) {
        if(p == node) {
            *rootp = p->link;

            free(node);
            return 1;
        }
        *rootp = &p->link;
    }
    return 0;
}
 
Node *sll_search(Node *head, int value) {
    while(head != NULL) {
        if(head->value == value) {
            return head;
        }
        head = head->link;
    }
    return NULL;
}
 
 
Node *init_link() {
    Node *head = (Node *)malloc(sizeof(Node));
    Node *end = NULL;
 
    head->value = 0;
    head->link = NULL;
 
    end = head;
 
    int i;
    for(i = 1; i < 5; i++) {
        Node *node = (Node *)malloc(sizeof(Node));
        node->value = i;
        node->link = NULL;
 
        end->link = node;
        end = end->link;
    }
    return head;
}
 
void display(Node *list) {
    Node *p = list;
    while((p = p->link) != NULL);
     {
        printf("%d ", p->value);
        printf("\n");
    } 
}
 
int main() {
    Node *list = init_link();
    display(list);
 
    Node *node = sll_search(list, 3);
    if (node != NULL) {
        printf("Find node : %d \n");
 
        sll_remove(list, node);
        display(list);
    } else {
        printf("No found \n");
    }
    return 0;
}