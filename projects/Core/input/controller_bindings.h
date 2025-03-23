#pragma once

#include <Common/event_bus.h>
#include <Core/enums/actions.h>

namespace core::input {
    bool is_controller_pressed(Action action);
    std::string controller_action_to_string(Action action);

    void register_binding(Action action, std::vector<int> const& buttons, bool respects_modifiers);
    common::CollectingEventBus<bool, void>& refresh_controller_bindings_bus();
} // namespace randomizer::input
