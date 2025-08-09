#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaitOrTimerCallback.h>

namespace app::classes::System::Threading::WaitOrTimerCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::WaitOrTimerCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, app::WaitOrTimerCallback* this_ptr, app::Object* state, bool timed_out)
    IL2CPP_REGISTER_METHOD(
        0x027AB930,
        app::IAsyncResult*,
        BeginInvoke,
        app::WaitOrTimerCallback* this_ptr,
        app::Object* state,
        bool timed_out,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::WaitOrTimerCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Threading::WaitOrTimerCallback
