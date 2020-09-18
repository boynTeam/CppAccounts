//
// Created by 10655 on 2020/9/18.
//

#include "AccountInfo.h"

#include <utility>

AccountInfo::AccountInfo(std::string name, std::string number) : _name(std::move(name)), _number(std::move(number)) {}

std::ostream &operator<<(std::ostream &os, const AccountInfo &info) {
    os << "_name: " << info._name << " _number: " << info._number;
    return os;
}

AccountInfo::AccountInfo() {}

const std::string &AccountInfo::getName() const {
    return _name;
}

const std::string &AccountInfo::getNumber() const {
    return _number;
}
