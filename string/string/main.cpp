#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


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
				z = (b - a)+1;
				if (z % 2 != 0) {			
					for (int j = a; j <= b;j++) {
						if (j == a) {
							cout << (char)toupper(str[j]);
						}
						else {
							cout << str[j];
						}
					}
					cout << endl;
				}
				a = i + 1;				
			}
			
		}




		/*ищем слова полиндромы
	char str[255];
	int slovo=0;	
	cout << "Vvedite stroku "<<endl;	
	cin.getline(str, 255);
	cout << "Vasha stroka: " << str << endl;
	int a = 0;
	int b = 0;
	bool polindrom=true;
	int size;
	size = strlen(str);
	cout << "Polindromy: " << endl;
	for (int i = 0;i < strlen(str)+1;i++) {			
		if (str[i] == ' ' || i==strlen(str)) {
			b = i - 1;			
			for (int j = 0; j <= (b - a);j++) {
				if (str[a + j] != str[b - j])
					polindrom = false;
			}
			if (polindrom == true) {
				for (int j = a; j <= b;j++) {					
					cout<< str[j];
				}	
				cout << endl;
			}			
			a = i+1;
			polindrom = true;
		}
				
	}
*/
		/* ищем кол-во слов в строке
		for (int i = 0;i<strlen(str);i++) {
			if (str[i] == ' ') {
				slovo++;
			}
		}
		slovo++;
		cout << "Kolichestvo slov v stroke " << slovo<<endl;
		*/
		system("PAUSE");
		return EXIT_SUCCESS;
}




