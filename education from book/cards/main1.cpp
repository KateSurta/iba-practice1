#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char card_name[3];
    int c =0;    
        while(card_name[0] !='X'){
			puts("Vvedite znachenie carty: ");
			scanf("%2s", card_name);
			int val=0;
				switch(card_name[0]){
					case 'K':
					case 'Q':
					case 'J':
					val=10;
				       break;
					case 'A':
					val=11;
				       break;
					case 'X':
				       continue;
               default: 
               val = atoi(card_name);
				
			if((val<1) || (val>10)){
				puts("Ya ne ponimau eto znachenie!");
            continue;
			}                               
    
}
		if((val>2) && (val<7)){
			c++;       
		} 	
		else if(val==10){
					c--;
                }
					printf("Tekuchiy schet: %i\n", c);
		}
		system("PAUSE");
    return 0;
    }
         
  

  

