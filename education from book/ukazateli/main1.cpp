#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    char cards[] ="JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    system("PAUSE");
    return 0;
}
