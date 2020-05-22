#include <iostream>
#include <math.h>
using namespace std;

float dx(float x, float t){
    return x - 9.8*t;
}

float rungeKutta(float t,  float dt, float y, float dy) 
{ 
    float k1, k2, k3, k4, k5; 
  
    k1 = dt*dx(dy,t); 
    k2 = dt*dx(dy + 0.5*k1, t + 0.5*dt); 
    k3 = dt*dx(dy + 0.5*k2, t + 0.5*dt); 
    k4 = dt*dx(dy + k3,t + dt); 
    
    y = (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
  
    return y; 
} 