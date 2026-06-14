#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/UI__Class.h>
#include <Modloader/app/structs/AreaMapUI.h>

namespace core::api::game::ui {
    CORE_DLLEXPORT bool is_manually_shaking_resource_ui();

    CORE_DLLEXPORT app::UI__Class* get();
    CORE_DLLEXPORT app::AreaMapUI* area_map();

    CORE_DLLEXPORT bool area_map_open();
    CORE_DLLEXPORT bool world_map_open();
    CORE_DLLEXPORT bool menu_open();
    CORE_DLLEXPORT bool shop_open();

    CORE_DLLEXPORT void shake_spirit_light();
    CORE_DLLEXPORT void shake_keystone();
    CORE_DLLEXPORT void shake_ore();
} // namespace core::api::game::ui
