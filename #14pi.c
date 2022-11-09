#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    double in=0,out=0,check=0;
    for (int i=0;i<10000000;i++){
        double x = (double)rand() / (double)RAND_MAX,y = (double)rand() / (double)RAND_MAX,r=0.5;
        x=x-0.5;
        y=y-0.5;
        check=check+y+x;
        if (x*x+y*y>r*r){
            out++;
        }
        else{
            if (x*x+y*y<r*r){
                in++;
            }
        }
    }
    //in/out+in=pi/4
    printf("%f %f %f\n",in,out,check);
    printf("%f",(4*in/(in+out)));
    return 0;
}
