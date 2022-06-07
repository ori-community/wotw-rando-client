#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AudioStateZone {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Activated, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_Activated, (app::AudioStateZone * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00859150, void, Start, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00859DB0, void, OnDestroy, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00859E80, void, OnEnable, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00859F40, void, OnDisable, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085A010, bool, ContainsPoint, (app::AudioStateZone * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0085A3E0, void, ActivateZone, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085A590, void, DeactivateZone, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::SelectableCategory__Enum, get_Category, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085A740, void, ctor, (app::AudioStateZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085A950, void, cctor, ())
}
