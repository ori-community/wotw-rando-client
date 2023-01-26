#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReaderWriterLockSlim.h>
#include <Modloader/app/structs/EventWaitHandle.h>
#include <Modloader/app/structs/LockRecursionPolicy__Enum.h>
#include <Modloader/app/structs/ReaderWriterCount.h>
#include <Modloader/app/structs/ReaderWriterLockSlim_TimeoutTracker.h>

namespace app::classes::System::Threading::ReaderWriterLockSlim {
    IL2CPP_REGISTER_METHOD(0x02FD2290, void, InitializeThreadCounts, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD22A0, void, ctor_1, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD2340, void, ctor_2, (app::ReaderWriterLockSlim * this_ptr, app::LockRecursionPolicy__Enum recursion_policy))
    IL2CPP_REGISTER_METHOD(0x02FD2400, bool, IsRWEntryEmpty, (app::ReaderWriterCount * rwc))
    IL2CPP_REGISTER_METHOD(0x02FD2440, bool, IsRwHashEntryChanged, (app::ReaderWriterLockSlim * this_ptr, app::ReaderWriterCount* lrwc))
    IL2CPP_REGISTER_METHOD(0x02FD2460, app::ReaderWriterCount*, GetThreadRWCount, (app::ReaderWriterLockSlim * this_ptr, bool dont_allocate))
    IL2CPP_REGISTER_METHOD(0x02FD26D0, void, EnterWriteLock, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD2710, bool, TryEnterWriteLock_1, (app::ReaderWriterLockSlim * this_ptr, int32_t milliseconds_timeout))
    IL2CPP_REGISTER_METHOD(0x02FD2750, bool, TryEnterWriteLock_2, (app::ReaderWriterLockSlim * this_ptr, app::ReaderWriterLockSlim_TimeoutTracker timeout))
    IL2CPP_REGISTER_METHOD(0x02FD2760, bool, TryEnterWriteLockCore, (app::ReaderWriterLockSlim * this_ptr, app::ReaderWriterLockSlim_TimeoutTracker timeout))
    IL2CPP_REGISTER_METHOD(0x02FD2CA0, void, EnterUpgradeableReadLock, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD2CE0, bool, TryEnterUpgradeableReadLock_1, (app::ReaderWriterLockSlim * this_ptr, int32_t milliseconds_timeout))
    IL2CPP_REGISTER_METHOD(0x02FD2D20, bool, TryEnterUpgradeableReadLock_2, (app::ReaderWriterLockSlim * this_ptr, app::ReaderWriterLockSlim_TimeoutTracker timeout))
    IL2CPP_REGISTER_METHOD(0x02FD2D30, bool, TryEnterUpgradeableReadLockCore, (app::ReaderWriterLockSlim * this_ptr, app::ReaderWriterLockSlim_TimeoutTracker timeout))
    IL2CPP_REGISTER_METHOD(0x02FD3180, void, ExitWriteLock, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3380, void, ExitUpgradeableReadLock, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3640, void, LazyCreateEvent, (app::ReaderWriterLockSlim * this_ptr, app::EventWaitHandle** wait_event, bool make_auto_reset_event))
    IL2CPP_REGISTER_METHOD(0x02FD38B0, bool, WaitOnEvent, (app::ReaderWriterLockSlim * this_ptr, app::EventWaitHandle* wait_event, uint32_t* num_waiters, app::ReaderWriterLockSlim_TimeoutTracker timeout, bool is_write_waiter))
    IL2CPP_REGISTER_METHOD(0x02FD3AA0, void, ExitAndWakeUpAppropriateWaiters, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3B60, void, ExitAndWakeUpAppropriateWaitersPreferringWriters, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3C00, void, ExitAndWakeUpAppropriateReadWaiters, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3C90, bool, IsWriterAcquired, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3CA0, void, SetWriterAcquired, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3CB0, void, ClearWriterAcquired, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3CC0, void, SetWritersWaiting, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3CD0, void, ClearWritersWaiting, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3CE0, void, SetUpgraderWaiting, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3CF0, void, ClearUpgraderWaiting, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3D00, uint32_t, GetNumReaders, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3D10, void, EnterMyLock, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3D80, void, EnterMyLockSpin, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3DF0, void, ExitMyLock, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3E00, void, SpinWait, (int32_t spin_count))
    IL2CPP_REGISTER_METHOD(0x02FD3E50, void, Dispose_1, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD3E60, void, Dispose_2, (app::ReaderWriterLockSlim * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02FD4300, bool, get_IsReadLockHeld, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD4400, bool, get_IsUpgradeableReadLockHeld, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD4570, bool, get_IsWriteLockHeld, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD46E0, int32_t, get_RecursiveReadCount, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD47D0, int32_t, get_RecursiveUpgradeCount, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FD4920, int32_t, get_RecursiveWriteCount, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_WaitingReadCount, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_WaitingUpgradeCount, (app::ReaderWriterLockSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_WaitingWriteCount, (app::ReaderWriterLockSlim * this_ptr))
} // namespace app::classes::System::Threading::ReaderWriterLockSlim
