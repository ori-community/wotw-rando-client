#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinPetrifiedFogRemainingDurationValueProvider.h>

namespace app::classes::SeinPetrifiedFogRemainingDurationValueProvider {
    IL2CPP_REGISTER_METHOD(0x008B0590, float, GetFloatValue, (app::SeinPetrifiedFogRemainingDurationValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinPetrifiedFogRemainingDurationValueProvider * this_ptr))
} // namespace app::classes::SeinPetrifiedFogRemainingDurationValueProvider
