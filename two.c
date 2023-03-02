#include <stdio.h>
#include <math.h>

typedef struct TWO {
    int num:4; // num has exactly 4 bits available
} two_t;

int main(int argc, char *argv[]){
    int i;
    two_t two;          // any instance of two_t above
    int min = 99999;    // Any big number will do
    int max = -99999;    // any small number will do

    for (i = -999; i <= 999; i++){
        two.num = i;  //careful! doesn't always fit
        if (two.num < min) min = two.num;
        if (two.num > max) max = two.num;
    }

    printf("min = %d max = %d\n", min, max);
}
