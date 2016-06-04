#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{ char card_name[3];
  puts ( "Vvedite nazvanie carty: ");
  scanf("%2s", card_name);
  int val=0;
  if(card_name[0]=='K'){
  val=10;                      
  } else if(card_name[0]=='Q'){
  val=10;
  }else if(card_name[0]=='J'){
  val=10;
  } else if(card_name[0]=='A'){
  val=11;
  }else{
  val=atoi(card_name);
  }
  if(val>2 && val<7)
  puts("Schetchik uvelichilsya");     
  else if(val==10){
  puts("Schetchik umenshilsya");         
  }                   
                      
                                     
    system("PAUSE");
    return 0;
}
