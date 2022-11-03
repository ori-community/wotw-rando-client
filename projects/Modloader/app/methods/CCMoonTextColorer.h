#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CCMoonTextColorer {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Color__Array*, get_Colors, (app::CCMoonTextColorer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Colors, (app::CCMoonTextColorer * this_ptr, app::Color__Array* value))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_Count, (app::CCMoonTextColorer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_Count, (app::CCMoonTextColorer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0315B950, void, Modify, (app::CCMoonTextColorer * this_ptr, app::CCText* text))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CCMoonTextColorer * this_ptr))
} // namespace app::classes::CCMoonTextColorer
