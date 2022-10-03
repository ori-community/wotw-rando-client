#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AreaMapLegend {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::AreaMapLegend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050EB70, void, Toggle, (app::AreaMapLegend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050EB90, void, Show, (app::AreaMapLegend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050EDE0, void, Hide, (app::AreaMapLegend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050F030, void, HideSilently, (app::AreaMapLegend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, IsVisible, (app::AreaMapLegend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AreaMapLegend * this_ptr))
} // namespace app::classes::AreaMapLegend
