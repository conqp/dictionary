//
// Created by rne on 30.08.21.
//

#pragma once

#include <map>
#include <ostream>
#include <set>
#include <string>

class Dictionary {
private:
    std::map<std::string, std::set<std::string>> entries;
public:
    Dictionary();
    void add(std::string const &key, std::string const &value);
    std::set<std::string> const & get(std::string const &key) const;

    friend std::ostream& operator<<(std::ostream& out, Dictionary const &dictionary);
};


