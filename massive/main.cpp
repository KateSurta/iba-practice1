#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
 int ar[10]={3,2,6,8,5,6,9,2,2,5};
 int sum2=0;
 int i=0;

/* выводим все значения массива
     for (int i=0; i<10; i++){
         cout<<ar[i]<<endl;
         } 
    */
 
/* используем цикл while для вывода значений массива 
    int i = 0;
    while(i<10){
                cout<<ar[i]<<endl;
                i=i+1;
                }               
*/   
    
/* выводим значения массива в обратном порядке  
   for (int i=9; i>=0; i=i-1)
     { 
     cout<<ar[i]<<endl;
     }
 */
    
 /*  используем цикл while для вывода значений массива в обратном порядке
     int i=9;
    while(i>=0){
                cout<<ar[i]<<endl;
                i=i-1;
                }   
 */
 
 
/* выводим каждый чётный элемент массива
   for (int i=1; i<10; i=i+2)
   { 
    cout<<ar[i]<<endl;
    }
*/

/* используем цикл while для вывода чётных значений массива 
   int i=1;
  while(i<10){
     cout<<ar[i]<<endl;
     i=i+2;
     }  
*/

/* выводим индекс значения равного 2
 for (int i=0; i<10; i++)
   { 
    if (ar[i]==2) ar[i]- значение элемента массива
    cout<<i<<endl;  i-сам индекс
    }
  */
  
 /* с применение while выводим индекс значения равного 2
   int=0;  
   while(i<10){
     if( ar[i]==2)
     cout<<i<<endl;
     i=i+1;
     }  
 */ 
    
 /* выводим количество двоек в массиве
  for (int i=0; i<10; i++){  
    if (ar[i]==2){
    sum2++;   переменная для записи кол-ва             
    
    }
     
}   
 cout<<sum2<<endl;
 */
 while(i<10){
     if( ar[i]==2)
     sum2++;     
     i=i+1;
     }  
 cout<<sum2<<endl;   

             
 system("PAUSE");
 return 0;
}
