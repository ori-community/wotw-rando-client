#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpinLock__Boxed.h>

namespace app::classes::System::Threading::SpinLock {
    IL2CPP_REGISTER_METHOD(0x001E6AC0, void, ctor, app::SpinLock__Boxed* this_ptr, bool enable_thread_owner_tracking)
    IL2CPP_REGISTER_METHOD(0x001E6AF0, void, Enter, app::SpinLock__Boxed* this_ptr, bool* lock_taken)
    IL2CPP_REGISTER_METHOD(0x001E6B00, void, TryEnter, app::SpinLock__Boxed* this_ptr, int32_t milliseconds_timeout, bool* lock_taken)
    IL2CPP_REGISTER_METHOD(0x001E6B10, void, ContinueTryEnter, app::SpinLock__Boxed* this_ptr, int32_t milliseconds_timeout, bool* lock_taken)
    IL2CPP_REGISTER_METHOD(0x001E6B20, void, DecrementWaiters, app::SpinLock__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001E6B30,
        void,
        ContinueTryEnterWithThreadTracking,
        app::SpinLock__Boxed* this_ptr,
        int32_t milliseconds_timeout,
        uint32_t start_time,
        bool* lock_taken
    )
    IL2CPP_REGISTER_METHOD(0x001E6B40, void, Exit, app::SpinLock__Boxed* this_ptr, bool use_memory_barrier)
    IL2CPP_REGISTER_METHOD(0x001E6B50, void, ExitSlowPath, app::SpinLock__Boxed* this_ptr, bool use_memory_barrier)
    IL2CPP_REGISTER_METHOD(0x001E6B60, bool, get_IsHeld, app::SpinLock__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E6B90, bool, get_IsHeldByCurrentThread, app::SpinLock__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E6BA0, bool, get_IsThreadOwnerTrackingEnabled, app::SpinLock__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0232DF20, void, cctor, )
} // namespace app::classes::System::Threading::SpinLock
