#ifndef BIGINTEGER_H
#define BIGINTEGER_H

typedef struct node {
    int val;
    struct node *next;
} ListNode;

typedef struct BigInteger {
    struct node *head;
    int length;
    int sign;
} BI;

ListNode* newNode(int data);
void display(BI b);
ListNode* makeCopy(ListNode *head);
ListNode* reverse(ListNode *head);
int length(ListNode *head);
int compare(ListNode *l1,ListNode *l2);
ListNode* addList(ListNode *l1,ListNode *l2);
void freeList(ListNode *head);
ListNode* delZero(ListNode *head);
BI initialise(char *str);
BI sub(BI a,BI b);
BI add(BI a,BI b);
BI mul(BI a,BI b);
BI div(BI a,BI b);
BI mod(BI a,BI b);

#endif