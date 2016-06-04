#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
	/*В словах, имеющих нечетное количество символов, первый символ делаем заглавным*/
	char str[255];
	cout << "Vvedite stroku " << endl;
	cin.getline(str, 255);
	cout << "Vasha stroka: " << str << endl;
	int a = 0;
	int b = 0;
	int z = 0;
	int size;
	size = strlen(str);
	for (int i = 0;i < strlen(str) + 1;i++) {
		if (str[i] == ' ' || i == strlen(str)) {
			b = i - 1;
			z = (b - a) + 1;			
				for (int j = a; j <= b;j++) {					
					cout << str[j];					
				}
				cout << endl;
				cout << z << endl;				
				a = i + 1;
			}		
			
		}

}
