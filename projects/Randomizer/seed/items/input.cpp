#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/seed/items/input.h>

namespace randomizer::seed::items {
    void Input::grant() {
        input::set_action(action, true);
        input::set_action(action, false);
    }
} // namespace randomizer::seed::items
