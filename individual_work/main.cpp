#include <cstdlib>
#include <iostream>

using namespace std;

int poz_max(float ar[10]){
    float max;
    max = ar[0]; 
    int poz = 0;       
        for (int i = 0; i < 10; i++)
        {          
               
            if (ar[i] >= max) 
            {
                max = ar[i]; 
                poz = i+1;                           
              
            }
        }
   return poz;     
}

float search_second_element(float ar[10]){
        float max;
        int max1;        
        max1= poz_max(ar)-1; 
        float max_value = ar[max1];      
        max = ar[0];
            for (int i = 0; i < 10; i++)
            {  
				if( ar[i] != max_value){                
					if (ar[i] >= max){
						max = ar[i];                 
					}            
				}
            }
			return max;
}

float search_third_element(float ar[10]){      
                
        int poz_max1= poz_max(ar)-1; 
        float value_max1 = ar[poz_max1]; 
        float value_max2 = search_second_element(ar);   
        float value_max3 = ar[0];
            for (int i = 0; i < 10; i++)
            {  
				if( ar[i] != value_max1 && ar[i] != value_max2 ){                   
                                   
					if (ar[i] >= value_max3){
						value_max3 = ar[i]; 
                                        
					} 
                               
				}
				 
            }
			return value_max3;
}

float poz_min(float ar[10]){
        float min;
        min = ar[0];                
        for (int i = 0; i < 10; i++)
        {          
               
			if (ar[i] <= min)
			{
				min = ar[i];                                          
              
			}
		}
   return min;  
}





int main(int argc, char *argv[])
{
    float ar[10];
    for (int i = 0; i < 10; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> ar[i];
        }    
      char c;       
      int d;
      float z;
      float w;
      float a;
      cout<< "Vvedite bukbu operacii"<<endl;
      cin>>c;
      if(c ='l'){
           d = poz_max(ar);
           cout <<"poz = " <<d<< " max_prizok"<<endl;
		}
		else{
			if(c ='n'){           
				z = poz_min(ar);
				cout <<"min prizok "<<z<<"m"<<endl;
			}
		
			else{
				if(c='v'){      
					w=search_second_element(ar);
					cout<<"vtoroe mesto "<<w<< "m "<<endl;
			    }
		
					else{
						if(c='k'){     
						a=search_third_element(ar);
						cout<<"tretie mesto "<<a<< "m "<<endl;
					}
				}
				
			}
		}
		system("PAUSE");
	}		
    
    

