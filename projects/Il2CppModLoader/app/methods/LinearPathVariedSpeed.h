#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LinearPathVariedSpeed {
    IL2CPP_REGISTER_METHOD(0x00FA76D0, app::Vector3, LocalToWorld, (app::LinearPathVariedSpeed * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00FA83A0, void, ctor, (app::LinearPathVariedSpeed * this_ptr))
}
