#include <stdio.h>
#include <stdlib.h>


typedef struct Test Test;

struct Test
{
    int len;
    int array[];
};

int main(void)
{
    Test *T = (Test *) malloc(sizeof(Test) + 10 * sizeof(int));
    T->len = 10;

    for (int i = 0; i < T->len; ++i) {
        T->array[i] = i;
    }
    for (int i = 0; i < T->len; ++i) {
        printf("%d\n", T->array[i]);
    }
    free(T);

    return 0;
}

