// SWITCH-CASE


#include <iostream>
using namespace std;

int main() {
	int choice;
	cout<<"Which continent is your country located in?"<<endl;
	cout<<"1. Asia"<<endl<<"2. Africa"<<endl<<"3. Europe"<<endl<<"4. Oceania"<<endl<<"5. North America"<<endl<<"6. South America"<<endl<<"7. Antarctica"<<endl;
	cin>>choice;
    
	switch(choice){
    	case 1:
    	cout<<"Your continent is Aisa";
    	break;
    	case 2:
    	cout<<"Your continent is Africa";
    	break;
    	case 3:
    	cout<<"Your continent is Europe";
    	break;
    	case 4:
    	cout<<"Your continent is Oceania";
    	break;
    	case 5:
    	cout<<"Your continent is North America";
    	break;
    	case 6:
    	cout<<"Your continent is South America";
    	break;
    	case 7:
    	cout<<"Your continent is Antarctica";
    	break;
    	default:
    	cout<<"Please enter one of the choices only.";
    	break;
	}
    
    
	return 0;
}




/*
OUTPUT:
Which continent is your country located in?
1. Asia
2. Africa
3. Europe
4. Oceania
5. North America
6. South America
7. Antarctica
3
Your continent is Europe

=== Code Execution Successful ===
*/
