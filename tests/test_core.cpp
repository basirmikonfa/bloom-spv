#include "bloom-spv/wallet.h"

#include <iostream>

#define CHECK(cond)                                                          \
    do {                                                                     \
        if (!(cond)) {                                                       \
            std::cerr << "fail: " #cond "\n";                                \
            return 1;                                                        \
        }                                                                    \
    } while (0)

int main() {
    auto v = bloomspv::create_vault("test", "pw");
    CHECK(v.name == "test");
    CHECK(v.accounts.size() == 1);
    bloomspv::add_account(v, "A");
    bloomspv::add_account(v, "B");
    CHECK(v.accounts.size() == 3);
    CHECK(v.accounts[0].address != v.accounts[1].address);
    CHECK(!bloomspv::coin().empty());
    std::cout << "ok\n";
    return 0;
}
