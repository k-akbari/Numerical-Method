#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define TOL 0.001

double f(double x){
    return 10-x*x;
}

void secantMethod(double x1,double x2){

    double f1 = f(x1);
    double f2 = f(x2);

    double x = (x1*f2-x2*f1)/(f2-f1);
    double f = func(x);
    x1 = x2;
    x2 = x;

    if(fabs(f) < TOL){
        printf("\nThe final solution is x = %lf",x);
        return;
    }

    if(f1*f2 >0){
         printf("\nInitial gues are wrong!!");
         return;
    }

    printf("\n%f %f %f %f %f %f",x1,x2,x,f1,f2,f);
    secantMethod(x2,x1);
}

int main(){
    secantMethod(-2,5);
}
