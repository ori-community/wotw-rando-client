#pragma once

#include <Core/macros.h>

namespace core::settings {
    CORE_DLLEXPORT bool burrow_mouse_control();
    CORE_DLLEXPORT bool grapple_mouse_control();
    CORE_DLLEXPORT bool water_dash_mouse_control();
    CORE_DLLEXPORT bool invert_swim();

    CORE_DLLEXPORT bool autoaim();
    CORE_DLLEXPORT bool show_secrets();

    CORE_DLLEXPORT float map_icon_transparency();
} // namespace core::settings
