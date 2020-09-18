
#include "Runner.h"


void Runner::clearScreen() {
    system("cls");
}

void Runner::printWelcome() {
    this->os << "Welcome! Please select operator" << std::endl;
    this->os << "1.Add number" << std::endl;
    this->os << "2.Query by number" << std::endl;
    this->os << "3.List number" << std::endl;
    this->os << "4.Get info" << std::endl;
    this->os << "5.Delete number" << std::endl;
    this->os << "Q.Quit" << std::endl;
}

int Runner::getOperator() {
    return std::cin.get();
}

void Runner::handleOpt(int optCode) {
    switch (optCode) {
        case '1':
            handleAdd();
            break;
        case '2':
            handleQuery();
            break;
        case '3':
            handleList();
            break;
        case '4':
            handleGetInfo();
            break;
        case '5':
            handleDelete();
            break;
        default:
            handleError();
            break;
    }
}

void Runner::handleAdd() {
    this->os << "Enter name and number:";
    std::string number;
    std::string name;
    this->is >> number >> name;
    this->account->append({name, number});
}

Runner::Runner(std::ostream &os, std::istream &is, Account *account) : os(os), is(is), account(account) {}

void Runner::handleQuery() {
    this->os << "Enter number:";
    std::string number;
    this->is >> number;
    auto ptr = this->account->query(number);
    if (ptr == nullptr) {
        this->os << "No number" << std::endl;
    } else {
        this->os << *ptr << std::endl;
    }
}

void Runner::handleGetInfo() {
    this->os << "Enter number:" << std::endl;
    std::string number;
    this->is >> number;
    auto ptr = this->account->query(number);
    if (ptr == nullptr) {
        this->os << "No number" << std::endl;
    } else {
        this->os << *ptr << std::endl;
    }
}

void Runner::handleList() {
    auto list = this->account->list();
    for (auto &info : list) {
        this->os << info << std::endl;
    }
}

void Runner::handleDelete() {
    this->os << "Enter number:";
    std::string number;
    this->is >> number;
    this->account->del(number);
}

void Runner::handleError() {
    this->os << "enter error" << std::endl;
}

