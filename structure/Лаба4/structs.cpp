#include <cstdlib>
#include <iostream>
using namespace std;

struct User {
      string fio;
      int age;
      int kolichestvo_prohodov;
      } ;

int main(int argc, char *argv[])
{
    User var1;
    var1.fio="Ivanov";
    var1.age=21;
    cout<<var1.fio<<var1.age<<endl;
    User a[10];
    //i++;
    a[8].kolichestvo_prohodov++;
    User *p;
    p=&var1;
    cout<<p->fio<<endl;
    
    
     system("PAUSE");
    return EXIT_SUCCESS;
}
