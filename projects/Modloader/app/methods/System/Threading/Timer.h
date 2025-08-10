#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Timer.h>
#include <Modloader/app/structs/TimerCallback.h>

namespace app::classes::System::Threading::Timer {
    IL2CPP_REGISTER_METHOD(0x02349880, void, ctor_1, app::Timer* this_ptr, app::TimerCallback* callback, app::Object* state, int32_t due_time, int32_t period)
    IL2CPP_REGISTER_METHOD(
        0x023498A0,
        void,
        ctor_2,
        app::Timer* this_ptr,
        app::TimerCallback* callback,
        app::Object* state,
        app::TimeSpan due_time,
        app::TimeSpan period
    )
    IL2CPP_REGISTER_METHOD(0x02349920, void, Init, app::Timer* this_ptr, app::TimerCallback* callback, app::Object* state, int64_t due_time, int64_t period)
    IL2CPP_REGISTER_METHOD(0x02349A20, bool, Change_1, app::Timer* this_ptr, int32_t due_time, int32_t period)
    IL2CPP_REGISTER_METHOD(0x02349A40, bool, Change_2, app::Timer* this_ptr, app::TimeSpan due_time, app::TimeSpan period)
    IL2CPP_REGISTER_METHOD(0x02349AC0, void, Dispose, app::Timer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02349B90, bool, Change_3, app::Timer* this_ptr, int64_t due_time, int64_t period, bool first)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, KeepRootedWhileScheduled, app::Timer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02004240, int64_t, GetTimeMonotonic, )
    IL2CPP_REGISTER_METHOD(0x02349E20, void, cctor, )
} // namespace app::classes::System::Threading::Timer
