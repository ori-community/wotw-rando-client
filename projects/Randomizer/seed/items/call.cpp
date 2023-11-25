#include <Randomizer/seed/items/call.h>

namespace randomizer::seed::items {
    void Call::grant() {
        func();
    }

    std::string Call::to_string() {
        return std::format("call function");
    }
} // namespace randomizer::seed::items
