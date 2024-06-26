#include "stack.h"

#include <stdio.h>

int main() {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    if (isEmpty(&stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    printf("After pushing elements:\n");

    char *s = traverseStack(&stack);
    printf("%s\n", s);

    pop(&stack);

    printf("After popping an element:\n");
    traverseStack(&stack);

    Node* searchResult = searchByValue(&stack, 20);
    if (searchResult != NULL) {
        printf("Element with value 20 found.\n");
    } else {
        printf("Element with value 20 not found.\n");
    }

    Node* topElement = getTop(&stack);
    if (topElement != NULL) {
        printf("Top element: %d\n", topElement->data);
    }

    return 0;
}


