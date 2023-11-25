#include <seed/items/apply_uber_state.h>

namespace randomizer::seed::items {
    void ApplyUberState::grant() {
        state.apply();
    }

    std::string ApplyUberState::to_string() {
        return std::format("apply state [{}, {}]", state.group_int(), state.state());
    }
} // namespace randomizer::seed::items
