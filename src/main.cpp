#include "bloom-spv/wallet.h"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc > 1 && std::string(argv[1]) == "--help") {
        std::cerr << "bloom-spv [name]\n";
        return 0;
    }
    std::string name = argc > 1 ? argv[1] : "default";
    auto v = bloomspv::create_vault(name, "demo");
    std::cout << v.id << " " << v.accounts[0].address << "\n";
    return 0;
}
