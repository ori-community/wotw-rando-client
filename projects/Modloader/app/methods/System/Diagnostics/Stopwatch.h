#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Diagnostics::Stopwatch {
    IL2CPP_REGISTER_METHOD(0x02004240, int64_t, GetTimestamp, ())
    IL2CPP_REGISTER_METHOD(0x02004250, app::Stopwatch*, StartNew, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020043A0, app::TimeSpan, get_Elapsed, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02004510, int64_t, get_ElapsedMilliseconds, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02004680, int64_t, get_ElapsedTicks, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsRunning, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02004740, void, Reset, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02004750, void, Start, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02004800, void, Stop, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020048D0, void, Restart, (app::Stopwatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02004980, void, cctor, ())
} // namespace app::classes::System::Diagnostics::Stopwatch
