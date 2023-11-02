#include <iostream>
#include <math.h>

using namespace std;

double ds(double x){
    double y;
    if (x<-3) y= 1;
    else if (x<-1) y = -sqrt(4-pow((x+1),2));
    else if (x<2) y = -2;
    else y = x-4;
        
    return y;
}

int main(){
   for (double x = -5; x <= 5; x++){
      
       cout << "x = " << x; 
       cout <<"\ty =" << ds(x) << endl;
   }
    
    return 0;
}