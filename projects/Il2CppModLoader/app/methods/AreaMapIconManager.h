#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AreaMapIconManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::AreaMapIconManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050D8B0, app::MessageProvider *, GetCurrentFilterMessageProvider, (app::AreaMapIconManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050D920, void, ShowAreaIcons, (app::AreaMapIconManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050DC30, bool, IsIconShownByFilter, (app::WorldMapIconType__Enum icon, app::AreaMapIconFilter__Enum filter))
    IL2CPP_REGISTER_METHOD(0x0050DCE0, void, UpdateLabelState, (app::AreaMapIconManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050DF70, app::GameObject *, GetIcon, (app::AreaMapIconManager * this_ptr, app::WorldMapIconType__Enum icon_type))
    IL2CPP_REGISTER_METHOD(0x0050E8C0, void, HideNonTeleportIcons, (app::AreaMapIconManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AreaMapIconManager * this_ptr))
}
