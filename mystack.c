#include <stdlib.h>
#include "mystack.h"

/* Numbers stack functions */
void my_stack_init(my_stack* stack, size_t size)
{
    stack->n_size = size;
    stack->n_count = 0;
    stack->n = calloc(stack->n_size, sizeof(int));
}

void my_stack_done(my_stack* stack)
{
    stack->n_size = 0;
    stack->n_count = 0;
    free(stack->n);
}

void my_stack_clean(my_stack* stack)
{
    stack->n_count = 0;
}

int my_stack_count(my_stack* stack)
{
    return stack->n_count;
}

void my_stack_push(my_stack* stack, int value)
{
    if (stack->n_count >= stack->n_size) {
        return;
    }
    stack->n[stack->n_count++] = value;
}

int my_stack_pull(my_stack* stack)
{
    if (stack->n_count == 0) {
        return -1;
    }
    return stack->n[--stack->n_count];
}

int my_stack_top(my_stack* stack)
{
    if (stack->n_count == 0) {
        return -1;
    }
    return stack->n[stack->n_count];
}

int my_stack_is_empty(my_stack* stack)
{
    return stack->n_count == 0;
}

int my_stack_is_full(my_stack* stack)
{
    return stack->n_count >= stack->n_size;
}

/* Char stack functions */
void char_stack_init(ch_stack* stack, size_t size)
{
    stack->ch_size = size;
    stack->ch_count = 0;
    stack->ch = calloc(stack->ch_size, sizeof(char));
}

void char_stack_done(ch_stack* stack)
{
    stack->ch_size = 0;
    stack->ch_count = 0;
    free(stack->ch);
}

void char_stack_clean(ch_stack* stack)
{
    stack->ch_count = 0;
}

int char_stack_count(ch_stack* stack)
{
    return stack->ch_count;
}

void char_stack_push(ch_stack* stack, char value)
{
    if (stack->ch_count >= stack->ch_size) {
        return;
    }
    stack->ch[stack->ch_count++] = value;
}

char char_stack_pull(ch_stack* stack)
{
    if (stack->ch_count == 0) {
        return -1;
    }
    return stack->ch[--stack->ch_count];
}

char char_stack_get_deep(ch_stack* stack, int index)
{
    if (stack->ch_count == 0 || index < 0 || stack->ch_count < index) {
        return -1;
    }
    return stack->ch[index];
}

int char_stack_top(ch_stack* stack)
{
    if (stack->ch_count == 0) {
        return -1;
    }
    return stack->ch[stack->ch_count];
}

int char_stack_is_empty(ch_stack* stack)
{
    return stack->ch_count == 0;
}

int char_stack_is_full(ch_stack* stack)
{
    return stack->ch_count >= stack->ch_size;
}