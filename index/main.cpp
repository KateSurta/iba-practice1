#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ 
	float a;
	float b;
	float c;
	char d;
	float *p1;
	float *p2;
	p1=&a;
	p2=&b;
	
	cout<<"Vvedite chisla i operaciu"<<endl;
    cin>>a;
    cin>>d;
    cin>>b;
              
	if (d=='+') {
		c = *p1+*p2;
		cout<< "Result= " <<c<<endl;
    }
    else{
		if (d=='-') {
			c = *p1-*p2;
			cout<< "Result= " <<c<<endl;
        }
		else {	
			if (d=='*') {
				c= *p1 * *p2;
				cout<< "Result= " <<c<<endl;
            }
			else{
				if (d=='/'){
					if(*p2==0)
						cout<< "Na nol delit neljia";        
					else {            
						c = *p1 / *p2;
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

