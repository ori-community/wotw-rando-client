#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScaleBasedOnFloatProvider.h>

namespace app::classes::ScaleBasedOnFloatProvider {
    IL2CPP_REGISTER_METHOD(0x00933AA0, void, Awake, (app::ScaleBasedOnFloatProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933B10, void, FixedUpdate, (app::ScaleBasedOnFloatProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScaleBasedOnFloatProvider * this_ptr))
} // namespace app::classes::ScaleBasedOnFloatProvider
