#pragma once

#include <Common/event_bus.h>
#include <Core/enums/actions.h>


namespace randomizer::input {
    namespace events {
        struct ActionPressed {};
        struct ActionReleased {};

        using bus_t = common::DiscriminatingEventBus<
            Action,
            ActionPressed,
            ActionReleased
        >;
    }

    void set_action(Action action, bool value);
    void trigger_action(Action action);
    std::string action_to_string(Action action);

    events::bus_t& event_bus();

    void refresh_control_scheme();
} // namespace randomizer::input
