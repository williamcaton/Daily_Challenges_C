#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int n=10000;

    void fun(){
        printf("Hello world!\n");
    }
    void timer(int n,void fun()){
        //nanosleep((const struct timespec[]){{0, (n*1000000)}}, NULL);
        usleep(n * 1000);
        fun();
    }
    timer(n,fun);
    return 0;
}
