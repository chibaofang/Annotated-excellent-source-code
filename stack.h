/* a stack interface model*/

#define STACK_TYPE int

void push(STACK_TYPE value);  /*push*/
void pop(STACK_TYPE value);   /*pop*/
STACK_TYPE top(void);
int is_empty(void);
int is_full();
