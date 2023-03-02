#include <stdio.h>

// fox machines only!

typedef struct {
    char y;
    int x;
} chunk_t;

int main (int argc, char *argv[]){
    chunk_t chunk;
    int siz = sizeof(chunk);
    printf("size = %d\n", siz);
    return 0;
}
