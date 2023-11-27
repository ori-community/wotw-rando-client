#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/seed/items/input.h>
#include <magic_enum.hpp>

namespace randomizer::seed::items {
    void Input::grant() {
        input::set_action(action, true);
        input::set_action(action, false);
    }

    std::string Input::to_string() const {
        return std::format("trigger input {}", magic_enum::enum_name(action));
    }
} // namespace randomizer::seed::items
