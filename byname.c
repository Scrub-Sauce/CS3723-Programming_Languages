#include <stdio.h>

static int func(int a, int b, int x, int y) {
    int result = 0;
    for (a = x; a <= y; a++) {
            result += b;
        }
        return result;
    }

    int main(int argc, char *argv[]){
        int i = 0;
        int k = func(i, 3*i+2, 1, 3);
        printf("Result = %d\n", k);
        return 0;
    }
