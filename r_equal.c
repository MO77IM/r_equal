#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double float_equal(double a, double b);
int main(void){
	double a,b;
	printf("Please input two real numbers:");
	scanf("%lf%lf", &a, &b);
	if(float_equal(a,b))
	  printf("a equals b!\n");
	else
	  printf("a doesn't equal b!\n");
	return 0;
}

double float_equal(double a, double b){
    return (fabs(a-b) < 1.0e-6)?true:false;
}
