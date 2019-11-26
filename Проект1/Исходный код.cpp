#include<iostream>;
#include<cmath>
using namespace std;
     
int main(){

	int Y, x;
	
	cout << " Enter the value of x " << endl;
   start:
	cin >> x;
//Y = (3 * x) + 1;
	if (x <= -5){
		Y = (3 * x) + 1;
		cout << "The value of Y Q1 : " << Y << endl;
	}
	else if(x > -5 && x <= 3) {
		  
		 Y = pow(x, 3);
		 cout << "The value of Y Q2 = " << Y << endl;
		
	}
	else if (x > 3 && x < 10){
		Y = -x;
		cout << "The value of Y Q3 = " << Y << endl;

	}
	else if (x == 10 ){
		Y = 2 * x;
		cout << "The value of Y Q4 = " << Y << endl;
	}
	else{
		cout << " The value of x is incorrect, try again !!" << endl;

	}
	

	

	system("pause");

	return 0;
}