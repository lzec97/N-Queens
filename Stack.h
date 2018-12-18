#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <malloc.h>
#define Table_MaxSize 20


//Stack Definition
typedef int ElemType;

typedef struct linknode
{
    ElemType data;
    struct linknode * next;
} LinkStNode;

void InitStack(LinkStNode * &s)
{
    s = (LinkStNode *)malloc(sizeof(LinkStNode));
    s->next = NULL;
}

void DestroyStack(LinkStNode * &s)
{
    LinkStNode * pre = s;
    LinkStNode *p = s->next;
    while (p != NULL)
    {
        free(pre);
        pre = p;
        p = pre->next;
    }
    free(pre);
}

bool StackEmpty(LinkStNode *s)
{
    return (s->next == NULL);
}

void Push(LinkStNode * &s, ElemType e)
{
    LinkStNode *p;
    p = (LinkStNode *)malloc(sizeof(LinkStNode));
    p->data = e;
    p->next = s->next;
    s->next = p;
}

bool Pop(LinkStNode * &s, ElemType e)
{
    LinkStNode *p;
    if (s->next == NULL)
        return false;
    p = s->next;
    e = p->data;
    s->next = p->next;
    free(p);
    return true;
}

bool Pop_1(LinkStNode * &s)
{
    LinkStNode *p;
    if (s->next == NULL)
        return false;
    p = s->next;
    s->next = p->next;
    free(p);
    return true;
}

bool GetTop(LinkStNode *s, ElemType e)
{
    if (s->next == NULL)
        return false;
    e = s->next->data;
    return true;
}
#endif // STACK_H_INCLUDED
