#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityHealthProvider.h>

namespace app::classes::EntityHealthProvider {
    IL2CPP_REGISTER_METHOD(0x00C91C30, void, OnValidate, app::EntityHealthProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C91D10, void, Awake, app::EntityHealthProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C91E80, float, GetFloatValue, app::EntityHealthProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EntityHealthProvider* this_ptr)
} // namespace app::classes::EntityHealthProvider
