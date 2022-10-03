#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::StopWatchWrapper {
    IL2CPP_REGISTER_METHOD(0x0065CAB0, void, ctor, (app::StopWatchWrapper * this_ptr, bool should_start))
    IL2CPP_REGISTER_METHOD(0x0065CC10, double, GetElapasedMiliseconds, (app::StopWatchWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065CC60, double, GetElapasedSeconds, (app::StopWatchWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065CC90, void, Finalize, (app::StopWatchWrapper * this_ptr, app::String* message, app::StopWatchWrapper_LogType__Enum log_type, app::StopWatchWrapper_Unit__Enum unit))
    IL2CPP_REGISTER_METHOD(0x0065CE50, double, FinalizeStopWatch, (app::StopWatchWrapper * this_ptr))
} // namespace app::classes::StopWatchWrapper
