#pragma once

#include <Core/macros.h>

namespace core::api::game::debug_menu {
    CORE_DLLEXPORT void set_debug_enabled(bool enable);
    CORE_DLLEXPORT bool is_debug_enabled();
    CORE_DLLEXPORT void set_should_prevent_cheats(bool prevent);
    CORE_DLLEXPORT bool should_prevent_cheats();
}
