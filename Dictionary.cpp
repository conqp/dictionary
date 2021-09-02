//
// Created by rne on 30.08.21.
//

#include "Dictionary.h"

#include <map>
using std::map;

#include <ostream>
using std::ostream;

#include <stdexcept>
using std::out_of_range;

#include <string>
using std::string;

#include <set>
using std::set;

Dictionary::Dictionary()
    : entries(map<string, set<string>>())
{
}

void Dictionary::add(string const &key, string const &value)
{
    try {
        entries.at(key).insert(value);
    } catch (out_of_range const &) {
        entries.insert({key, {value}});
    }
}

set<string> const & Dictionary::get(string const &key) const
{
    return entries.at(key);
}

ostream &operator<<(ostream &out, Dictionary const &dictionary)
{
    for (auto const &[key, values] : dictionary.entries) {
        for (auto const &value : values)
            out << key << " -> " << value << "\n";
    }

    return out;
}
