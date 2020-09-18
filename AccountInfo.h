//
// Created by 10655 on 2020/9/18.
//

#ifndef CPPACCOUNTS_ACCOUNTINFO_H
#define CPPACCOUNTS_ACCOUNTINFO_H

#include <string>
#include <ostream>


class AccountInfo {
private:
    std::string _name;
    std::string _number;
public:
    AccountInfo(std::string name, std::string number);

    AccountInfo();

    friend std::ostream &operator<<(std::ostream &os, const AccountInfo &info);

    const std::string &getName() const;

    const std::string &getNumber() const;
};


#endif //CPPACCOUNTS_ACCOUNTINFO_H
