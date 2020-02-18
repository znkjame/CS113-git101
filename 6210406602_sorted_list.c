//6210406602 Thammasorn-Yimsawat
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next,*prev;
} node;
void inserttolist(node **head, node **tail,int input)
{
    node *temp,*select=*head,*select_prev;
    temp = (node *)malloc(sizeof(node));
    if(*head==NULL)
    {
        *head = *tail = temp;
        (*head)->data = input;
        (*head)->next = NULL;
        (*head)->prev = NULL;
    }
    else
    {
        for(; select; select=select->next)
        {
            temp = (node *)malloc(sizeof(node));
            if(input<(select->data)&& select==*head)
            {
                temp->data = input;
                temp->next = select;
                select->prev=temp;
                *head=temp;
                break;
            }
            else if(input<(select->data))
            {
                select_prev = select->prev;
                temp->data = input;
                temp->next = select;
                temp->prev = select_prev;
                select_prev->next = temp;
                select->prev = temp;
                break;
            }
            else if(input>(select->data) && select!=*tail)
            {
                continue;
            }
            else if(input>(select->data) && select==*tail)
            {
                temp->data = input;
                temp->prev = select;
                temp->next = select->next;
                select->next = temp;
                *tail = temp;
                break;
            }
        }
    }
}

int main()
{
    node *head=NULL,*tail=NULL,*tmp;
    int input;

    while (scanf("%d", &input) == 1) {
    if (input <= -1)
    break;
        inserttolist(&head,&tail,input);
    }
    for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
}