#include <stdio.h>

int bouncingBall(double h, double bounce, double window);

int main(void){
    double h = 3.0,
           bounce = 0.66,
           window = 1.5;
    printf("The bounce: %ld\n", bouncingBall(h, bounce, window));
    return 0;
};
int bouncingBall(double h, double bounce, double window){
    const int cond = h > 0 && (bounce > 0.0 && bounce < 1) && window < h;
    if(cond)
        return h < window ? -1 : 2 + bouncingBall((h * bounce), bounce, window);
    else
        return -1;
};