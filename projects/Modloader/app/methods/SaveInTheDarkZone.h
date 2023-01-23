#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SaveInTheDarkZone.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SaveInTheDarkZone {
    IL2CPP_REGISTER_METHOD(0x00C2F630, void, Awake, (app::SaveInTheDarkZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2F6C0, void, OnDestroy, (app::SaveInTheDarkZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2F740, bool, IsInside, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SaveInTheDarkZone * this_ptr))
} // namespace app::classes::SaveInTheDarkZone
