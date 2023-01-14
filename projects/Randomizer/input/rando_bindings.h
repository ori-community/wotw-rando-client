#include <Common/event_bus.h>
#include <Core/enums/actions.h>
#include <Core/enums/buttons.h>

#include <Randomizer/macros.h>

#include <vector>

namespace randomizer::input {
    void set_action(Action action, bool value);

    common::TimedEventBus<Action>& input_bus();
    common::TimedMultiEventBus<Action>& single_input_bus();
} // namespace randomizer::input
