#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinBreathRemainingValueProvider.h>

namespace app::classes::SeinBreathRemainingValueProvider {
    IL2CPP_REGISTER_METHOD(0x00DA2DB0, float, GetFloatValue, app::SeinBreathRemainingValueProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinBreathRemainingValueProvider* this_ptr)
} // namespace app::classes::SeinBreathRemainingValueProvider
