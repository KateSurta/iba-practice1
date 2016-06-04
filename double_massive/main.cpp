#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
 int ar[2][3]= {{2,2,5},
                {3,8,7}};
 int i=0;
 int j=0;
 int sum2=0;
  /* выводим все значения массива
  for (int i=0; i<2; i++){      
      for (int j=0; j<3; j++) {        
         cout<<ar[i][j]<<"\t";                 
         }
            cout<<endl;
      }
      
    */  
    
 /*  ыводим все значения массива при помощи цикла while 
 int i=0;  
 while(i<2){
                while(j<3){           
                  cout<<ar[i][j]<<"\t"; 
                  j=j+1;                 
                } 
      j=0;          
      i=i+1;
      cout<<endl;
     }               
 */
 
 /* вывод в обратном порядке
 for (int i=1; i>=0; i--){      
      for (int j=2; j>=0; j--) {        
         cout<<ar[i][j]<<"\t";                 
         }
            cout<<endl;
      }
      
 */     
/*   вывод в обратном порядке при помощи цикла while 
    int i=1;
    int j=2;
   while(i>=0){
                while(j>=0){           
                  cout<<ar[i][j]<<"\t"; 
                  j=j-1;                 
                } 
      j=2;          
      i=i-1;
      cout<<endl;
     }           
      
 */
 
 /* вывод каждого четного значения 
 for (int i=0; i<2; i=i+1){      
      for (int j=1; j<3; j=j+2) {        
         cout<<ar[i][j]<<"\t";                 
         }
            cout<<endl;
      }
 
  */  
  /* вывод каждого четного значения при помощи цикла while 
  int i=0;
  int j=1;
  while(i<2){
                while(j<3){           
                  cout<<ar[i][j]<<"\t"; 
                  j=j+2;                 
                } 
      j=1;          
      i=i+1;
      cout<<endl;
     }
  */  
  
/* выводим все двойки
   for (int i=0; i<2; i=i+1){      
      for (int j=0; j<3; j=j+1) { 
          if (ar[i][j]==2){       
         cout<<i;         
         cout<<j;
         cout<<endl;
          } 
                         
         }
            
      } 
      
*/  

/*    выводим все двойки при помощи цикла while 
 int i=0;
 int j=0;
while(i<2){
                while(j<3){
                          if (ar[i][j]==2){
                             cout<<i;         
                             cout<<j;
                             cout<<endl;                        
                             }
                  j=j+1;                 
                } 
      j=0;          
      i=i+1;     
     }
 */    
  
  /* вывод кол-ва двоек 
  for (int i=0; i<2; i=i+1){      
      for (int j=0; j<3; j=j+1) { 
          if (ar[i][j]==2){ 
          sum2++;                            
        
          } 
                         
      }
             
   } 
  cout<<sum2<<endl;
 */ 
  while(i<2){
                while(j<3){
                          if (ar[i][j]==2){
                               sum2++;                       
                             }
                  j=j+1;                 
                } 
      j=0;          
      i=i+1;     
     }
     cout<<sum2<<endl;
  
            
 system("PAUSE");
 return 0;
}
