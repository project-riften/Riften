#include "discord.hpp"
#include <iostream>
#include <fstream>

namespace riften  {

void test_json() {
    std::ifstream f("twitter.json");
    json data = json::parse(f);
    std::cout << uint64_t(data["search_metadata"]["count"]) << " results." << std::endl;
}

} // namespace riften