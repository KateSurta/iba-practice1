#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
 int ar[10]={3,2,6,8,5,6,9,2,2,5};
 int sum2=0;

/* выводим все значения массива
     for (int i=0; i<10; i++){
         cout<<ar[i]<<endl;
         } 
    */
    
/* выводим значения массива в обратном порядке  
   for (int i=9; i>=0; i=i-1)
     { 
     cout<<ar[i]<<endl;
     }
 */
 
/* выводим каждый чётный элемент массива
   for (int i=1; i<10; i=i+2)
   { 
    cout<<ar[i]<<endl;
    }
*/


/* выводим индекс значения равного 2
 for (int i=0; i<10; i++)
   { 
    if (ar[i]==2) ar[i]- значение элемента массива
    cout<<i<<endl;  i-сам индекс
    }
  */  
  
  for (int i=0; i<10; i++){  
    if (ar[i]==2){
    sum2++;                
    
    }
     
}   
 cout<<sum2<<endl;
             
 system("PAUSE");
 return 0;
}
