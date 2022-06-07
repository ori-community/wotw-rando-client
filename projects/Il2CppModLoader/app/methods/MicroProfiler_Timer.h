#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MicroProfiler_Timer {
    IL2CPP_REGISTER_METHOD(0x031579B0, void, Start, (app::MicroProfiler_Timer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031579D0, int64_t, StopGetTimeInNanoSeconds, (app::MicroProfiler_Timer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03157AB0, void, ctor, (app::MicroProfiler_Timer * this_ptr))
}
