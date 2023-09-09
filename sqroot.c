#include "sqroot.h"

double  a_itx = 0;
unsigned short counter = 0;


long double _PWR_(unsigned short c){
    register double r = 1.0;

    while (c !=0){
        r *= 10;
        --c;
    }

    return r;
}

double sqroot(double number){
    a_itx = 0;
    counter = 0;

    while (counter < C_PR){
        if (a_itx * a_itx > number){
            a_itx -= 1/(_PWR_(counter));
            counter += 1;
        }else{
            a_itx += 1/(_PWR_(counter));
        }
    }

    return a_itx;
}
