#include "stack.h"
void InitializeStack(Stack *ps)
{
    ps->top=0;
}
void Push (StackEntry e, Stack *ps)
{
   ps->entry[ps->top++]=e;
}
void Pop  (StackEntry *pe, Stack *ps)
{
    ps->entry[--ps->top]=*pe;
}
int	StackEmpty (Stack *ps)
{
    if (ps->top==0)
        return 1;
    else
        return 0;
}
int	StackFull  (Stack *ps)
{
    if (ps->top==MAXSTACK)
        return 1;
    else
        return 0;
}
int StackTop	 (StackEntry *pe, Stack *ps)
{
    *pe=ps->entry[ps->top-1];
}
int	StackSize	 (Stack *ps)
{
    return ps->top;
}
void ClearStack	 (Stack *ps)
{
    ps->top=0;
}
void TraverseStack (Stack *ps, StackEntry *pf)
{
    for (int i=ps->top; i>0; i--){
        (*pf)=(ps->entry[i-1]);
}
}
