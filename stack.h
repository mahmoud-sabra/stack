
#ifndef STACK
typedef int StackEntry;
#define MAXSTACK 50
typedef struct stack
{
    int top;
    StackEntry entry[MAXSTACK];
} Stack;
void InitializeStack(Stack *);
void Push (StackEntry, Stack *);
void Pop  (StackEntry *, Stack *);
int	StackEmpty (Stack *);
int	StackFull  (Stack *);
void StackTop	 (StackEntry *, Stack *);
int	StackSize	 (Stack *);
void ClearStack	 (Stack *);
void TraverseStack (Stack *, StackEntry *);

#endif // STACK
