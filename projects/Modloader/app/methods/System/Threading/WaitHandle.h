#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SafeHandle.h>
#include <Modloader/app/structs/SafeWaitHandle.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/WaitHandle.h>
#include <Modloader/app/structs/WaitHandle__Array.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::System::Threading::WaitHandle {
    IL2CPP_REGISTER_METHOD(0x0234B740, void, ctor, app::WaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0234B740, void, Init, app::WaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0234B800, void*, get_Handle, app::WaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0234B8D0, void, set_Handle, app::WaitHandle* this_ptr, void* value)
    IL2CPP_REGISTER_METHOD(0x0234BAB0, app::SafeWaitHandle*, get_SafeWaitHandle, app::WaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0234BC60, void, set_SafeWaitHandle, app::WaitHandle* this_ptr, app::SafeWaitHandle* value)
    IL2CPP_REGISTER_METHOD(0x0234BD70, void, SetHandleInternal, app::WaitHandle* this_ptr, app::SafeWaitHandle* handle)
    IL2CPP_REGISTER_METHOD(0x0234BDA0, bool, WaitOne_1, app::WaitHandle* this_ptr, int32_t milliseconds_timeout, bool exit_context)
    IL2CPP_REGISTER_METHOD(0x0234BE90, bool, WaitOne_2, app::WaitHandle* this_ptr, app::TimeSpan timeout, bool exit_context)
    IL2CPP_REGISTER_METHOD(0x0234BFB0, bool, WaitOne_3, app::WaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F938C0, bool, WaitOne_4, app::WaitHandle* this_ptr, int32_t milliseconds_timeout)
    IL2CPP_REGISTER_METHOD(0x0234BFD0, bool, WaitOne_5, app::WaitHandle* this_ptr, app::TimeSpan timeout)
    IL2CPP_REGISTER_METHOD(0x0234BFF0, bool, WaitOne_6, app::WaitHandle* this_ptr, int64_t timeout, bool exit_context)
    IL2CPP_REGISTER_METHOD(
        0x0234C1E0,
        bool,
        InternalWaitOne,
        app::SafeHandle* waitable_safe_handle,
        int64_t milliseconds_timeout,
        bool has_thread_affinity,
        bool exit_context
    )
    IL2CPP_REGISTER_METHOD(0x0234C340, int32_t, WaitAny_1, app::WaitHandle__Array* wait_handles, int32_t milliseconds_timeout, bool exit_context)
    IL2CPP_REGISTER_METHOD(0x0234C6E0, int32_t, WaitAny_2, app::WaitHandle__Array* wait_handles, app::TimeSpan timeout, bool exit_context)
    IL2CPP_REGISTER_METHOD(0x0234C820, void, ThrowAbandonedMutexException_1, )
    IL2CPP_REGISTER_METHOD(0x0234C870, void, ThrowAbandonedMutexException_2, int32_t location, app::WaitHandle* handle)
    IL2CPP_REGISTER_METHOD(0x0234C8D0, void, Close, app::WaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0234C980, void, Dispose_1, app::WaitHandle* this_ptr, bool explicit_disposing)
    IL2CPP_REGISTER_METHOD(0x0234C9D0, void, Dispose_2, app::WaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0234CA80,
        int32_t,
        WaitMultiple,
        app::WaitHandle__Array* wait_handles,
        int32_t milliseconds_timeout,
        bool exit_context,
        bool wait_all
    )
    IL2CPP_REGISTER_METHOD(
        0x0234CDA0,
        int32_t,
        WaitOneNative,
        app::SafeHandle* waitable_safe_handle,
        uint32_t milliseconds_timeout,
        bool has_thread_affinity,
        bool exit_context
    )
    IL2CPP_REGISTER_METHOD(0x0234CF30, int32_t, Wait_internal, void** handles, int32_t num_handles, bool wait_all, int32_t ms)
    IL2CPP_REGISTER_METHOD(0x0234CF40, void, cctor, )
} // namespace app::classes::System::Threading::WaitHandle
