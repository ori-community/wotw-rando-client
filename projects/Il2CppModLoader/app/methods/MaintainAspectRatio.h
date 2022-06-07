#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MaintainAspectRatio {
    IL2CPP_REGISTER_METHOD(0x009F76F0, void, Awake, (app::MaintainAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F7780, void, LateUpdate, (app::MaintainAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MaintainAspectRatio * this_ptr))
}
