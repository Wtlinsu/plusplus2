#include <iostream>
using namespace std;

void increment(int &var) {
    var += 1;
}

void increment(int &var, int value) {
    var += value;
}

int main(void) {
    int var = 0;
    for(int i = 0; i < 10; i++)
        if(i % 2)
            increment(var);
        else
            increment(var, i);

    cout << var << endl;
    return 0;
}
//У моїй програмі я створив дві перевантажені функції increment. В обох функціях параметр var передається за посиланням (int &var), 
//тобто функція змінює саму змінну, а не її копію. Це дозволяє одразу змінювати значення змінної var з main().
//Якщо i парне — додається саме число i. Якщо непарне — додається 1. У результаті, змінна var змінюється 10 разів і стає рівною 25.
