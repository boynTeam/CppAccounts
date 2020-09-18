//
// Created by 10655 on 2020/9/18.
//

#ifndef CPPACCOUNTS_RUNNER_H
#define CPPACCOUNTS_RUNNER_H

#include <iostream>
#include "Account.h"

class Runner {
private:
    std::ostream &os;
    std::istream &is;
public:
    Runner(std::ostream &os, std::istream &is, Account *account);

private:
    Account *account;

    void handleAdd();
    void handleQuery();
    void handleGetInfo();
    void handleList();
    void handleDelete();
    void handleError();
public:

    static void clearScreen();

    void printWelcome();

    static int getOperator();

    void handleOpt(int optCode);
};


#endif //CPPACCOUNTS_RUNNER_H
