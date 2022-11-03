#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnscaledTime {
    IL2CPP_REGISTER_METHOD(0x010F26B0, float, get_deltaTime, ())
    IL2CPP_REGISTER_METHOD(0x010F2600, float, get_fixedDeltaTime, ())
} // namespace app::classes::UnscaledTime
