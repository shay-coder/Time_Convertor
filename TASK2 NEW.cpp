#include <iostream>
using namespace std;
 int main() {

	int number;
	cout    <<"INPUT ANY NUMBER IN SECONDS :\n";
	cin     >> number;

	float num_hours1   = number / (float)3600;
		
	int num_hours2     = (int) num_hours1;
	
	float point1       = num_hours1 - num_hours2;
	
	float num_mins1    =  point1 * 60;
	
	float num_mins2    = (int) num_mins1;
	
	float point2       =  num_mins1 - num_mins2; 
	
	float num_sec      =  point2 * 60;
	
	int numsec2		   =  (int)num_sec;
	
	
	cout << "HOURS: "  << num_hours2<<"\n"  << "MINS: "<< num_mins2 <<"\n"<<"SEC: " << numsec2 ; 
	
	
	return 0;
}
