#include <iostream>
#include <stdbool.h>

using namespace std;
float vichislenie(float pervoe_slagaemoe, char oper, float vtoroe_slagaemoe)
{
    float rezult;
        if (oper=='+') {
		rezult = pervoe_slagaemoe + vtoroe_slagaemoe;
        return rezult;    
		
    }
    else{
		if (oper=='-') {
		rezult = pervoe_slagaemoe - vtoroe_slagaemoe;
        return rezult;
        }
		else {	
			if (oper=='*') {
		      rezult = pervoe_slagaemoe * vtoroe_slagaemoe;
              return rezult;
            }
			else{
				if (oper=='/'){
				        
					rezult = pervoe_slagaemoe / vtoroe_slagaemoe;                    					
			        return rezult;     
				}
			}
		}
	}		
}	

bool verify2(float pervoe_slagaemoe, char oper, float vtoroe_slagaemoe)
{             
    if (oper =='/' && vtoroe_slagaemoe==0)
		return false;
		else { 
          return true;
        }  
}  
        
        	
int main()

{   float a=15;
    float b=7;
    char c='/';        
		if(verify2(a,c,b)==false){
			cout<<"na nol delit nelzya"<<endl; 
		}
			else{
				float d;       	
				d=vichislenie(a, c, b);	
				cout<<d<<endl;
			}
	      
    
		
		
    system("PAUSE");
    return EXIT_SUCCESS;

}
