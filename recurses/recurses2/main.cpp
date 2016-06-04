#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void f1(int x){	 
	 int ost=x%10;
     int rez=x/10;
     
     if(x!=0){	
     	/*vuvod v obratnom poryadke
		 cout<<ost<<endl;
		f1(rez);*/   
		
		/* vuvod v obichnom poryadke*/
		f1(rez);
		cout<<ost<<endl;   	
		}  
		     
	}

int main(int argc, char *argv[])
{
    f1(46578); 	   
    system("PAUSE");
    return EXIT_SUCCESS;
}
