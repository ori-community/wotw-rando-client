#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinearPathVariedSpeed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LinearPathVariedSpeed {
    IL2CPP_REGISTER_METHOD(0x00FA76D0, app::Vector3, LocalToWorld, app::LinearPathVariedSpeed* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00FA83A0, void, ctor, app::LinearPathVariedSpeed* this_ptr)
} // namespace app::classes::LinearPathVariedSpeed
