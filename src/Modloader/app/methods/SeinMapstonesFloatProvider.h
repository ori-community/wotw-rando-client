#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMapstonesFloatProvider.h>

namespace app::classes::SeinMapstonesFloatProvider {
    IL2CPP_REGISTER_METHOD(0x008A2960, float, GetFloatValue, app::SeinMapstonesFloatProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinMapstonesFloatProvider* this_ptr)
} // namespace app::classes::SeinMapstonesFloatProvider
