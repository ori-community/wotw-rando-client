#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HealthBarPositioning.h>

namespace app::classes::HealthBarPositioning {
    IL2CPP_REGISTER_METHOD(0x010A0B60, void, OnEnable, (app::HealthBarPositioning * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A0B70, void, UpdatePosition, (app::HealthBarPositioning * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HealthBarPositioning * this_ptr))
} // namespace app::classes::HealthBarPositioning
