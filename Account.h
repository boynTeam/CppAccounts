//
// Created by 10655 on 2020/9/18.
//

#ifndef CPPACCOUNTS_ACCOUNT_H
#define CPPACCOUNTS_ACCOUNT_H

#include <unordered_map>
#include <vector>
#include "AccountInfo.h"

class Account {
private:
    std::vector<AccountInfo> infoList;

    int queryIndex(std::string);

public:
    void append(const AccountInfo &info);

    std::shared_ptr<AccountInfo> query(std::string);

    std::vector<AccountInfo> list();

    void del(std::string);
};


#endif //CPPACCOUNTS_ACCOUNT_H
