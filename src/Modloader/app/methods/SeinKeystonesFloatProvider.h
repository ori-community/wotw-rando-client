#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinKeystonesFloatProvider.h>

namespace app::classes::SeinKeystonesFloatProvider {
    IL2CPP_REGISTER_METHOD(0x01020A90, float, GetFloatValue, app::SeinKeystonesFloatProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinKeystonesFloatProvider* this_ptr)
} // namespace app::classes::SeinKeystonesFloatProvider
