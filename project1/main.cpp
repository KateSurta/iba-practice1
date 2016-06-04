#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   float massa;
   cout<<"Vvedite massu gruza"<<endl;
   cin>>massa;       
   if (massa<1)
   cout<<"Tovar perevozit samolet kukuruznik"<<endl;
   else 
   {if ((massa>=1) &&  (massa<2.5))
   cout<<"Tovar perevozit samolet AH-12"<<endl;
      
   else 
   {if ((massa>=2.5) && (massa<7))
   cout<<"Tovar perevozit samolet Ruslan"<<endl;
   
   else 
   cout<<"Rasdelite grus na neskolko reisov";
}
}
   getch();
   return 0;
}
