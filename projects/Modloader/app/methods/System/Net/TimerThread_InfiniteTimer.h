#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimerThread_InfiniteTimer.h>

namespace app::classes::System::Net::TimerThread_InfiniteTimer {
    IL2CPP_REGISTER_METHOD(0x020A8DD0, void, ctor, (app::TimerThread_InfiniteTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasExpired, (app::TimerThread_InfiniteTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A8E20, bool, Cancel, (app::TimerThread_InfiniteTimer * this_ptr))
} // namespace app::classes::System::Net::TimerThread_InfiniteTimer
