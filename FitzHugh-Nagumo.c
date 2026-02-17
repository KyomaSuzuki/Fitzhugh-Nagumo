//FitzHugh-Nagumo Model

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define dt 1e-4
#define a 0.7
#define b 0.8
#define c 10.0

double dvdt(double v , double w, double i){
    return c*((-v*v*v/3)+v-w+i);
}

double dwdt(double v,double w){
    return v-b*w+a;
}

int main(int argc,char **argv){
    double t,v,w,i;
    int j,steps;

    steps=(int)(100/dt);

    //初期条件
    t=0.0;
    v=0.0;
    w=0.0;
    scanf("%lf",&i);

    for(j=0;j<steps;j++){

        v=v+dvdt(v,w,i)*dt;
        w=w+dwdt(v,w)*dt;
        t=t+dt;

        printf("%f %f %f\n",t,v,w);
    }
}