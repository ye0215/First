���??                >  ?	                               ?��        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������?��   ?��               	   
         
 ������������                                    ?��        0 T a b l e                                                            ����                                        .      W o r d D o c u m e n t                                           ������������                                       3                              	   
         
#include<stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

int get_lenth_of_list( struct Node *head )
{
struct Node  *temp = &top;
Int i;
while(top->next != NULL)
{
i++;
}
i++;
}

struct Node *build_list( int value )
{
    struct Node *top = (struct Node *)malloc( sizeof( struct Node ) );
    top->value = value;
    
    if(top != NULL)
        return top;
    else
        return NULL;
}

int destroy_list(struct Node *top)
{
list *freeNode;
while (NULL != top){
freeNode = top;
top =top-> next;
free(freeNode);
Printf(���ͷ�%d��㡱��freeNode);
}

int insert_node(struct Node **top, int new_value)
{
    if (NULL == h)
    {
        return FALSE;
    }
    Node* node = (Node*) malloc(sizeof(Node) / sizeof(char));
    if (NULL == node)
    {
        return FALSE;
    }
    node->data = data;
    node->next = h->next;   
    h->next = node;
    return TRUE;

}

void print_list(struct Node *top)
{
   
}


int main(void)
{
    struct Node *top = build_list(2);

    insert_node(&top, 4);
    insert_node(&top, 1);
    insert_node(&top, 7);
    insert_node(&top, 2);

    print_list(top);
    printf("%d\n", get_lenth_of_list(top));  
    destroy_list(top);

    return 0;
}

                                                                                                                                                                                      