#include <Core/enums\actions.h>
#include <Core/enums\buttons.h>
#include <Randomizer/macros.h>

#include <vector>

namespace randomizer {
    namespace input {
        using rando_input_callback = void (*)(Action action, bool pressed);

        // The methods below will only work for Action::OpenRandoWheel and higher.

        void add_on_pressed_callback(Action action, rando_input_callback callback);
        void add_on_released_callback(Action action, rando_input_callback callback);
    } // namespace input
} // namespace randomizer

RANDOMIZER_C_DLLEXPORT bool set_action_pressed(Action action);
RANDOMIZER_C_DLLEXPORT bool set_action_released(Action action);
