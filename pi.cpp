#include <iostream> 
#include <math.h>
using namespace std; 
// Calculate the approximate value for PI

int main(){
	
	cout.setf(ios::fixed); // Display in fixed point notation. For example, display 1e-1 as 0.1
	cout.setf(ios::showpoint); // Always display the decimal numbers 
	cout.precision(3); // Display exactly 3 decimal numbers 
	
	// initialize the inputs 
	int n = 1;
        float apprix = 0;	

	while(n >= 0){
	
	cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl; 
       cin >> n; 
	if(n >= 0){       
	// use the Leibniz formula to approximate the value to pi
	for(float x = n;x >= 0;x--){
		
		apprix = apprix + 4.0 * (pow(-1,x)/(2*x + 1)); 
	
	}
	cout << "The approximate value of pi using "<< n+1 <<" term is: " << apprix << endl;
	apprix = 0;
	}

	else{
		return 0; 
	}

	}

}
