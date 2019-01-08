#ifndef _mystack_h
#define _mystack_h

// Int stack
typedef struct {
    int *n;
    size_t n_size;
    size_t n_count;
} my_stack;

// Char stack
typedef struct {
    char *ch;
    size_t ch_size;
    size_t ch_count;
} ch_stack;

/* Numbers stack functions */
void my_stack_init(my_stack* stack, size_t size);
void my_stack_done(my_stack* stack);

void my_stack_push(my_stack* stack, int value);
int my_stack_pull(my_stack* stack);

void my_stack_clean(my_stack* stack);
int my_stack_count(my_stack* stack);

int my_stack_top(my_stack* stack);
int my_stack_is_empty(my_stack* stack);
int my_stack_is_full(my_stack* stack);

/* Char stack functions */
void char_stack_init(ch_stack* stack, size_t size);
void char_stack_done(ch_stack* stack);

void char_stack_push(ch_stack* stack, char value);
char char_stack_pull(ch_stack* stack);

void char_stack_clean(ch_stack* stack);
int char_stack_count(ch_stack* stack);

char char_stack_get_deep(ch_stack* stack, int index);

int char_stack_top(ch_stack* stack);
int char_stack_is_empty(ch_stack* stack);
int char_stack_is_full(ch_stack* stack);

#endif
