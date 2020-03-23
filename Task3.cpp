#include <iostream>
using namespace std;
 int main()
 {
 
 	double Height, rem_height, inch_height, weight, ideal_body_weight;
 	
 	cout << "ENTER YOUR HEIGHT (in feet):";
 	
	cin  >>  Height;
 	
	rem_height = Height - 5;            // subracting height of person with 
 	
	inch_height = rem_height * 12;   // converting remaining height into inches
 	
	weight = inch_height * 5;        // calculating weight by multiplying height in inches with 5 pounds
 	
	ideal_body_weight = weight + 110;  // adding reamining body weight with default weight (110 pounds)
 	
	cout << "YOUR IBM IN POUNDS IS: " << ideal_body_weight;
 	
	return 0;
 	
 }
