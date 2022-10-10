#include <stdio.h>
#include <stdlib.h>
int count = 0;
struct node
{
    int data;
    struct node *next;
};
// void insertbeginning(struct node **head_ref)
// {
//     int val;
//     scanf("%d", &val);
//     struct node *newnode;
//     newnode = malloc(sizeof(struct node));
//     newnode->data = val;
//     newnode->next = *head_ref;
//     (*head_ref) = newnode;
// }
void insertend(struct node **head_ref)
{
    int val;
    scanf("%d", &val);
    struct node *newnode, *ptr;
    newnode = malloc(sizeof(struct node));
    newnode->data = val;
    ptr = *head_ref;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->next = NULL;
    (*head_ref)->data++;
}
// void insertafter(struct node *prev)
// {
//     int val;
//     scanf("%d", &val);
//     struct node *newnode, *temp;
//     newnode = malloc(sizeof(struct node));
//     newnode->data = val;
//     temp = prev->next;
//     prev->next = newnode;
//     newnode->next = temp;
// }
void deletenode(struct node **head_ref, int pos)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    struct node *ptr;
    ptr = (*head_ref);
    for (int i = 1; i < pos; i++)
    {
        ptr = ptr->next;
    }
    temp = ptr->next->next;
    free(ptr->next);
    ptr->next = temp;
    (*head_ref)->data--;
}
void printlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 0;
    // insertbeginning(&head);
    // insertbeginning(&head);
    insertend(&head);
    insertend(&head);
    insertend(&head);
    insertend(&head);
    // insertafter(head->next->next);
    insertend(&head);
    insertend(&head);
    printlist(head);
    printf("\n");
    deletenode(&head, 3);
    printlist(head);
    return 0;
}