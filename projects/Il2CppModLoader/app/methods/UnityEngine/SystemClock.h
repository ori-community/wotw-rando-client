#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::SystemClock {
    IL2CPP_REGISTER_METHOD(0x02C647A0, app::DateTime, get_now, ())
    IL2CPP_REGISTER_METHOD(0x02C64830, void, cctor, ())
}
