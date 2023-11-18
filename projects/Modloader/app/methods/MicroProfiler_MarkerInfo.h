#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Boxed.h>

namespace app::classes::MicroProfiler_MarkerInfo {
    IL2CPP_REGISTER_METHOD(0x0024A2C0, void, Begin, (app::MicroProfiler_MarkerInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A2D0, void, End, (app::MicroProfiler_MarkerInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A2E0, void, Continue, (app::MicroProfiler_MarkerInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A2F0, void, Reset, (app::MicroProfiler_MarkerInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A300, bool, get_WasBegun, (app::MicroProfiler_MarkerInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A310, bool, get_IsActive, (app::MicroProfiler_MarkerInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A320, bool, get_WasEnded, (app::MicroProfiler_MarkerInfo__Boxed * this_ptr))
} // namespace app::classes::MicroProfiler_MarkerInfo
