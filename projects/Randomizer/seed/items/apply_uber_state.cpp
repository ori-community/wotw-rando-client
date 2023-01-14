#include <seed/items/apply_uber_state.h>

namespace randomizer::seed::items {
    void ApplyUberState::grant() {
        state.apply();
    }
} // namespace randomizer::seed::items
