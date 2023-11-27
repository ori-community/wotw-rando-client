#include <Randomizer/seed/items/call.h>

namespace randomizer::seed::items {
    void Call::grant() {
        func();
    }

    std::string Call::to_string() const {
        return std::format("call function '{}'", description);
    }
} // namespace randomizer::seed::items
