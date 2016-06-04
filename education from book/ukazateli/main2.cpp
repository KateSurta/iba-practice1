#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

char tracks[][80]={ "Ya ostavil svoe serce v Garvardskoy medicibskoi shkole",
                        "Nuark, nuark - gorod, polniy chudes",
                        "Tanec c mushlanom",
                        "Otcuda i do roddoma",
                        "Devchonka c ostrova Ivodzima",
         };
    
  void find_track(char search_for[])
  {
       int i;
       for(i=0; i<5; i++){
                if(strstr(track[i], search_for))
                printf("Pesniy nomer %i: '%s'\n", i, track[i]);
                }
       }
       
  int main(){
      char search_for[80];
      printf("Iskat: ");
      fgets(search_for,80,stdin);
      search_for[strlen(search_for)-1]='\0';
      find_track(search_for);
      system("PAUSE");
      return 0;      
}
