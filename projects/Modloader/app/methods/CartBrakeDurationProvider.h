#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartBrakeDurationProvider.h>

namespace app::classes::CartBrakeDurationProvider {
    IL2CPP_REGISTER_METHOD(0x00B338F0, float, GetFloatValue, app::CartBrakeDurationProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CartBrakeDurationProvider* this_ptr)
} // namespace app::classes::CartBrakeDurationProvider
