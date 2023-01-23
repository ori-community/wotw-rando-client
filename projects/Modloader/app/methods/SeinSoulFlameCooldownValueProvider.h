#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinSoulFlameCooldownValueProvider.h>

namespace app::classes::SeinSoulFlameCooldownValueProvider {
    IL2CPP_REGISTER_METHOD(0x005DFC40, float, GetFloatValue, (app::SeinSoulFlameCooldownValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinSoulFlameCooldownValueProvider * this_ptr))
} // namespace app::classes::SeinSoulFlameCooldownValueProvider
