// Remember this is written by the
// "new guy Bob down the hall".

// There are no typos here.

int main(int argc, char *argv[]){
    int a = 200;
    int b = 400;
    int c = 600;

    c += 100;
    if (b > 500)
        c += 10;
        a += 100;
    if (a > 400)
        b += 100;
    else
        if (c > 400) b+=30;
        else b += 20; c += 100;
    c += 100;

    printf("Final value of a is %d\n", a);
    printf("Final value of b is %d\n", b);
    printf("Final value of c is %d\n", c);
    return 0;
}
