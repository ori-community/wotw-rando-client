#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnscaledTime {
    IL2CPP_REGISTER_METHOD(0x010F26B0, float, get_deltaTime, ())
    IL2CPP_REGISTER_METHOD(0x010F2600, float, get_fixedDeltaTime, ())
}
