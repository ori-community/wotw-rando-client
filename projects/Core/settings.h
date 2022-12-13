#pragma once

#include <Core/macros.h>

namespace core::settings {
    CORE_DLLEXPORT void reload();

    CORE_DLLEXPORT bool burrow_mouse_control();
    CORE_DLLEXPORT bool grapple_mouse_control();
    CORE_DLLEXPORT bool water_dash_mouse_control();
    CORE_DLLEXPORT bool invert_swim();

    CORE_DLLEXPORT bool autoaim();
    CORE_DLLEXPORT bool show_secrets();

    CORE_DLLEXPORT float map_icon_transparency();

    CORE_DLLEXPORT float camera_shake_intensity();

    CORE_DLLEXPORT bool shriek_is_shrek();
} // namespace core::settings
