#include <stdio.h>
#include <time.h>
static int long numSteps=50000;

int main() {
   clock_t t;
   t=clock();
   double time=0;
   double pi=0;
   double delta_x=1.0/numSteps;
   double F_x[numSteps];

  	for(int i=0;i<numSteps;i++) {

		double x_i=(2*i+1)*delta_x/2.0;
		F_x[i]=(4.0/(1+(x_i*x_i)))*(delta_x);
	    }
	
	for (int i=0;i<numSteps ;i++) {
		pi += F_x[i];
            }
    t=clock()-t;
    time=((double)t)/CLOCKS_PER_SEC;
    printf("Pi=%f,duration:%f sec\n",pi,time); 
    return 0;
    }
   


          

