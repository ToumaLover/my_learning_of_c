#include <stdio.h>
#include <stdlib.h>

struct data
{
    int d1;
};

struct link
{
    struct data d;
    struct link* next;
};

int main()
{
    struct link* head;
    struct link* p1,*p0;
    int i,n;

    scanf("%d",&n);

    //定义链表
    head = (struct link*)malloc(sizeof(struct link));
    head->next = (struct link*)malloc(sizeof(struct link));
    p1 = head->next;
    for(i=1;i<n-1;i++)
    {

        p1->next = (struct link*)malloc(sizeof(struct link));
        p1 = p1->next;
    }
    p1->next = NULL;

    //输入链表
    p1 = head;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p1->d.d1);
        p1 = p1->next;
    }

    //输出链表
    p1 = head;
    do
    {
        printf("%d\n",p1->d.d1);
        p1 = p1->next;
    }while(p1!=NULL);

    //消灭链表
    p1 = head;
    do
    {
        p0=p1;
        p1 = p1->next;
        free(p0);
    }while(p1!=NULL);

    return 0;
}

