#include <Randomizer/randomizer.h>
#include <Randomizer/seed/items/skip_state.h>

namespace randomizer::seed::items {
    void SkipState::grant() {
        game_seed().skip_next(state);
    }
} // namespace randomizer::seed::items
