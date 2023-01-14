#include <Randomizer/seed/items/call.h>

namespace randomizer::seed::items {
    void Call::grant() {
        func();
    }
} // namespace randomizer::seed::items
