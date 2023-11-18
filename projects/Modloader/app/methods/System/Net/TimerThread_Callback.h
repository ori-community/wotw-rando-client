#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimerThread_Callback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimerThread_Timer.h>

namespace app::classes::System::Net::TimerThread_Callback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TimerThread_Callback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x020A87A0, void, Invoke, (app::TimerThread_Callback * this_ptr, app::TimerThread_Timer* timer, int32_t time_noticed, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x020A8CF0, app::IAsyncResult*, BeginInvoke, (app::TimerThread_Callback * this_ptr, app::TimerThread_Timer* timer, int32_t time_noticed, app::Object* context, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::TimerThread_Callback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::TimerThread_Callback
