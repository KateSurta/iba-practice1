#include <iostream>
#include <stdbool.h>

using namespace std;

void vivod_massiva(int ar[10]){   
    for (int i=0; i<10; i++){ 
           cout<<ar[i]<<endl;    
        }  
        cout<<endl;       
    }
 /*int vivod_massiva1(int ar[10]){
	int i=0;
		while(i<10){
			cout<<ar[i]<<endl;
			i=i+1;                 
		}               
	}
*/
void vivod_massiva2(int ar[10]){   
	for (int i=9; i>=0; i--){ 
		cout<<ar[i]<<endl;    
    } 
    cout<<endl;        
}

/*int vivod_massiva3(int ar[10]){
    int i=9;
		while(i<=0){
			cout<<ar[i]<<endl;
			i=i-1;                 
        }               
	}
*/

void vivod_chetnogo(int ar[10]){   
	for (int i=1; i<10; i=i+2){ 
		cout<<ar[i]<<endl;
    }
    cout<<endl;
}


/*int vivod_chetnogo1(int ar[10]){
	int i=1;
		while(i<10){
			cout<<ar[i]<<endl;
			i=i+2;                 
        }               
	}
*/

 void vivod_index(int ar[10]){   
		for (int i=0; i<10; i=i+1){ 
			if (ar[i]==2) 
				cout<<i<<endl;
   
		}
    cout<<endl;
	}


/*int vivod_index1(int ar[10]){
	int i=0;
		while(i<10){
			if( ar[i]==2)
				cout<<i<<endl;
				i=i+1;                 
		}	               
	}
*/
int sum1; 
int vivod_sum_dv(int ar[10]){      
		for (int i=0; i<10; i++){  
			if (ar[i]==2){
			sum1++;                  
		}   
    }  
    return sum1; 
}


/*int vivod_sum_dv2(int ar[10]){
		int i=0;
		int sum1=0;
			while(i<10){
				if( ar[i]==2)
				sum1++;     
				i=i+1;
			}      
	cout<<sum1<<endl; 
}
 */

int main(){
    
    int ar[10]={3,2,6,8,5,6,9,2,2,5};     
    vivod_massiva(ar);
/*  vivod_massiva1(ar); */
    vivod_massiva2(ar);
/*  vivod_massiva3(ar); */
    vivod_chetnogo(ar);
/*  vivod_chetnogo1*/
    vivod_index(ar);
/*  vivod_index1 */
		int d;
		d=vivod_sum_dv(ar);
		cout<<d<<endl;
/*  vivod_sum_dv2(ar);    */  
       
    system("PAUSE");
    return 0;
}
