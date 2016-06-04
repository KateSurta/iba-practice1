#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int f1(int x){
	 int ost=x%10;	 
	 int rez=x/10;
	 if(x!=0)	  	  	   
     return ost+f1(rez); 	    
    }

int main(int argc, char *argv[])
{
     
    int a=f1(98546);
	cout<<a<<endl;   
     system("PAUSE");
    return EXIT_SUCCESS;
}
