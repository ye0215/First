���??                >  ?	                               ?��        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������?��   ?��               	   
               ?��   ?��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������R o o t   E n t r y                                               ��������                                gcZd?   @      D a t a                                                         
 ������������                                    ?��        0 T a b l e                                                            ����                                        .      W o r d D o c u m e n t                                           ������������                                       3                              	   
                                                         ?��          !   "   #   $   %   &   '   (   )   *   +   ,   -   .   /   0   1   2   3   4   5   6   7   8   9   :   ;   <   =   >   ?   @   A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   ?��W   X   Y   Z   [   d   ]   ^   _   `   a   b   c   ?��?��������������������������������������������������������������������������������������������������������������    ?          F  `? F            ck�e     a$$1$   CJ PJ KH mH	sH	nHtH                  $ A`?? $            ؞���k=�W[SO            8  ` ? 8            u??    a$ $ G$ ? 9r  CJ ? ` ?            u?w  c  d?  a$$G$ @&	$d   N?   �   %d   O?   �   &d   P?   �   'd   Q?   �   ? 9r   CJ OJ  QJ                                   	   G?  �z     �       �      T i m e s   N e w   R o m a n   -??       ?             �[SO  1?? ? �R<(             �_o�Ŗ�?  5?                    �    S y m b o l   3$? �* �Cx ?       � @  ��A r i a l   -?? 	? ��|?             ўSO  ?4? 	�* �Cx ?       � @  ��C o u r i e r   N e w   ;?              #include<stdio.h>
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

                                                                                                                                                                                      