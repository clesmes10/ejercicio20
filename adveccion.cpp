#include <iostream>
using namespace std;


void d(double *u, double xmin, double deltax, int n);
void im(double *u, double xmin, double deltax, int n);

void d(double *u, double xmin, double deltax, int n){
  double x;
  int i;
  for(i=0; i<n; ++i){
    x = xmin +i;
      if(x > 0.75 && x <=1.25){
	u[i] = 1.0;
      }else{
	u[i]=0.0;
      }
  }
}
void im(double*u, double xmin, double deltax, int n){
  double x;
    int i;
  for(i=0; i<n; ++i){
    x = xmin + i;
    d(u, xmin, deltax, n);
    cout << x << " " << u[i] << endl;
  }
}
int main(){
  double C = 1.0;
  double T = 0.5;
  double deltax = 0.1;
  double deltat = 0.01;
  double *u;
  double xmin = 0.0;
  double xmax = 2.0;
  int numerox = (xmax-xmin)/(deltax+1);
  u = new double[numerox];
  d(u, xmin, deltax, numerox);
  im(u, xmin, deltax, numerox);
  return 0;
}

  
      
 
      
  
