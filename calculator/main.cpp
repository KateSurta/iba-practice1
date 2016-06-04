#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ 
	float a;
	float b;
	float c;
	char d;	
	cout<<"Vvedite chisla i operaciu"<<endl;
    cin>>a;
    cin>>d;
    cin>>b;
              
	if (d=='+') {
		c = a+b;
		cout<< "Result= " <<c<<endl;
    }
    else{
		if (d=='-') {
			c = a-b;
			cout<< "Result= " <<c<<endl;
        }
		else {	
			if (d=='*') {
				c= a * b;
				cout<< "Result= " <<c<<endl;
            }
			else{
				if (d=='/'){
					if(d==0)
						cout<< "Na nol delit neljia";        
					else {            
						c = a / b;
						cout<< "Result= " <<c<<endl;
					}
				}
				else {
					cout<< "Vvedite verniy operator";
				}
			}
		}
	}		
    getch();
 
}

