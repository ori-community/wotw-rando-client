#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightPlatform.h>

namespace app::classes::LightPlatform {
    IL2CPP_REGISTER_METHOD(0x0114E660, void, OnEnable, (app::LightPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114E720, void, OnDisable, (app::LightPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LightPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114E7E0, void, cctor, ())
} // namespace app::classes::LightPlatform
