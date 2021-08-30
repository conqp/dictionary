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

    for (auto const & german : englishToGerman.get("this"))
        cout << "this -> " << german << "\n";

    for (auto const & german : englishToGerman.get("car"))
        cout << "car -> " << german << "\n";

    return 0;
}
