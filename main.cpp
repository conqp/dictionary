#include <iostream>
using std::cout;

#include "Dictionary.h"

int main()
{
    Dictionary englishToGerman;
    englishToGerman.add("this", "der");
    englishToGerman.add("this", "die");
    englishToGerman.add("this", "das");
    englishToGerman.add("car", "Auto");
    englishToGerman.add("car", "PKW");
    cout << englishToGerman;
    return 0;
}
