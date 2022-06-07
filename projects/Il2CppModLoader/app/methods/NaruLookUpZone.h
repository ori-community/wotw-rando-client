#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NaruLookUpZone {
    IL2CPP_REGISTER_METHOD(0x00885C60, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00885D30, bool, get_IsInside, ())
    IL2CPP_REGISTER_METHOD(0x00885FC0, void, Awake, (app::NaruLookUpZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886190, void, OnEnable, (app::NaruLookUpZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886250, void, OnDisable, (app::NaruLookUpZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886330, app::Rect, get_Bounds, (app::NaruLookUpZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NaruLookUpZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886340, void, cctor, ())
}
