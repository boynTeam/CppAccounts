//
// Created by 10655 on 2020/9/18.
//

#include "Account.h"

void Account::append(const AccountInfo &info) {
    this->infoList.push_back(info);
}

std::shared_ptr<AccountInfo> Account::query(std::string number) {
    auto begin = this->infoList.begin();
    while (begin != this->infoList.end()) {
        if (begin->getNumber() == number) {
            return std::make_shared<AccountInfo>(*begin);
        }
        begin++;
    }
    return nullptr;
}

std::vector<AccountInfo> Account::list() {
    return std::vector<AccountInfo>(this->infoList);
}

void Account::del(std::string number) {
    auto begin = this->infoList.begin();
    while (begin != this->infoList.end()) {
        if (begin->getNumber() == number) {
            this->infoList.erase(begin);
        }
        begin++;
    }
}
