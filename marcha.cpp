#include <iostream>
#include <random>
#include <stdlib.h>

int main(){
  
  int x [1000] = {};
  int y [1000] = {};
   
  int i;
  int j;
  float r;
  float pi = 3.14;
  float delta = 1;
  
  srand48(42);

  x[1] = 0; y[1] = 0;

  for (i=0;i<1000;i++){  
    r = drand48();
    if(r <= 2*cos(pi)){
      x[i] = x[i-1]+r;
      y[i] = y[i-1]+r;
      std::cout << x[i] << " " << y[i] <<std::endl;  
       }
     
  }
  
  return 0;
}