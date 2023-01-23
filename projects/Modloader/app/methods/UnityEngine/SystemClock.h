#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DateTime.h>

namespace app::classes::UnityEngine::SystemClock {
    IL2CPP_REGISTER_METHOD(0x02C647A0, app::DateTime, get_now, ())
    IL2CPP_REGISTER_METHOD(0x02C64830, void, cctor, ())
} // namespace app::classes::UnityEngine::SystemClock
