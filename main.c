#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3,4};
	Complex b = {5,12};


	Complex(*fn_ptr1[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double(*fn_ptr2[2])(Complex)= {magnitude, phase};

	for(int i=0; i<4; i++){
		func(*fn_ptr1[i], a, b);
	}
	for(int j=0; j<2; j++){
		func_2(*fn_ptr2[j], a);
		func_2(*fn_ptr2[j], b);
	}      	
	return 0;
}

