#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MicroProfiler_Timer.h>

namespace app::classes::MicroProfiler_Timer {
    IL2CPP_REGISTER_METHOD(0x031579B0, void, Start, app::MicroProfiler_Timer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031579D0, int64_t, StopGetTimeInNanoSeconds, app::MicroProfiler_Timer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03157AB0, void, ctor, app::MicroProfiler_Timer* this_ptr)
} // namespace app::classes::MicroProfiler_Timer
