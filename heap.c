// You MUST run this on the fox machines (not on the hen of other machines)

// gcc -Wall heap.c -o heap
// ./heap

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int thousand = 1000;

static void funny(double param) {
    int three = 3;
    int *q = &three;
    void *ptr1 = malloc(100);
    void *ptr2 = (void *) "xyz";
    void *ptr3 = (void *) &three;
    static long hundred = 100;
    char *abc = "abcdef";
    char *xyz = strdup(abc);

    printf("global thousand is at %p\n", &thousand);
    printf("param is at %p\n", &param);
    printf("char *abc is at %p which points to %p\n", &abc, abc);
    printf("char *xyz is at %p which points to %p\n", &xyz, xyz);
    printf("local var three is at %p\n", &three);
    printf("local var q is at %p which points to %p\n", &q, q);
    printf("static var hundred is at %p\n", hundred);
    printf("void *ptr1 is at %p which points to %p\n", &ptr1, ptr1);
    printf("void *ptr2 is at %p which points to %p\n", &ptr2, ptr2);
    printf("void *ptr3 is at %p which points to %p\n", &ptr3, ptr3);
    printf("function funny is at %p\n", &funny);
}

int main(int argc, char *argv[]){
    funny(55);
    return 0;
}
