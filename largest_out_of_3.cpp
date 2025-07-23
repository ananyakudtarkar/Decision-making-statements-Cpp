// To find the largest among three numbers (nested if-else)
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout<<"Enter 3 numbers: ";
	cin>>a;
	cin>>b;
	cin>>c;
    
	if(a > b){
    	if(a>c){
        	cout<<a<<" is the largest number.";
    	}
    	else {
        	cout<<c<<" is the largest number.";
    	}
	}
	else if(b>c){
    	cout<<b<<" is the largest number.";
	}
	else{
    	cout<<c<<" is the largest number.";
	}
	return 0;
}

/*
OUTPUT:
Enter 3 numbers: 10 15 13
15 is the largest number.
*/
