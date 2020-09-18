#include <iostream>
#include "Account.h"
#include "Runner.h"


int main() {
    auto ac = Account();
    Runner runner = Runner(std::cout, std::cin, &ac);
    while (true) {
        Runner::clearScreen();
        runner.printWelcome();
        char opt = Runner::getOperator();
        if (opt=='q' || opt == 'Q') {
            break;
        }
        runner.handleOpt(opt);
    }
    return 0;
}
