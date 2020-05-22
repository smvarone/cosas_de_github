#include <iostream>
#include "funciones.cpp"

using namespace std;

float y = 7.5;
float vy = 20.0;
float t = 0.0;
float dt = 0.01;

int main(){
    while(t < 2.13){
        cout << t <<","<< y << endl;
        t += dt;
        y += 7.5 + rungeKutta(t,dt,y,vy)*t - (9.8*pow(t,2))/2;
        vy = rungeKutta(t,dt,y,vy);
    }
    return 0;
}
