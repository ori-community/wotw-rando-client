#pragma once

#include <Core/macros.h>
#include <Common/event_bus.h>

namespace core::api::game::debug_menu {
    enum class DebugEvent {
        RenderDebugVisuals,
    };

    CORE_DLLEXPORT void notify_debug_was_active_this_session();
    CORE_DLLEXPORT void set_debug_enabled(bool enable);
    CORE_DLLEXPORT bool is_debug_enabled();
    CORE_DLLEXPORT bool was_debug_active_this_session();
    CORE_DLLEXPORT void set_should_prevent_cheats(bool prevent);
    CORE_DLLEXPORT bool should_prevent_cheats();
    CORE_DLLEXPORT common::EventBus<void, DebugEvent>& event_bus();
}
