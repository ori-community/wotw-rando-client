#pragma once

#include <Common/event_bus.h>
#include <Core/enums/actions.h>

namespace randomizer::input {
    enum class InputValue {
        Released,
        Pressed,
    };

    template <typename T, typename... Identifiers>
    using InputEventBus = common::EventBusImplementation<void, T, Identifiers..., InputValue>;

    template <typename... Identifiers>
    using SingleInputEventBus = common::EventBusImplementation<void, void, Identifiers..., InputValue>;

    void set_action(Action action, bool value);
    std::string action_to_string(Action action);

    /**
     * \brief Input bus fires the Before event when pressing an action and After when releasing
     * \return
     */
    InputEventBus<Action>& input_bus();

    /**
     * \brief Input bus fires the Before event when pressing an action and After when releasing
     * \return
     */
    SingleInputEventBus<Action>& single_input_bus();

    void refresh_control_scheme();
} // namespace randomizer::input
