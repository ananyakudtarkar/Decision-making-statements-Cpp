// Check whether a character is a vowel or a consonant.

#include <iostream>
using namespace std;

int main() {
	char a;
	cout<<"Enter a character: ";
	cin>>a;
    
	if (a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
    	cout<<a<<" is a vowel.";
	}
	else{
    	cout<<a<<" is a consonant.";
	}
    
	return 0;
}


/*
OUTPUT:
Enter a character: v
v is a consonant.
*/
