#pragma once

#include <Common/event_bus.h>
#include <Core/enums/actions.h>
#include <Core/macros.h>

namespace core::input {
    CORE_DLLEXPORT bool is_controller_pressed(Action action);
    CORE_DLLEXPORT std::string controller_action_to_string(Action action);

    CORE_DLLEXPORT void register_binding(Action action, std::vector<int> const& buttons, bool respects_modifiers);
    CORE_DLLEXPORT common::CollectingEventBus<bool, void>& refresh_controller_bindings_bus();
} // namespace randomizer::input
