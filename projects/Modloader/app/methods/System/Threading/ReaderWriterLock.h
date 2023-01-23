#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReaderWriterLock.h>

namespace app::classes::System::Threading::ReaderWriterLock {
    IL2CPP_REGISTER_METHOD(0x02329970, void, ctor, (app::ReaderWriterLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02329BB0, void, Finalize, (app::ReaderWriterLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02329BE0, void, AcquireWriterLock_1, (app::ReaderWriterLock * this_ptr, int32_t milliseconds_timeout))
    IL2CPP_REGISTER_METHOD(0x02329BF0, void, AcquireWriterLock_2, (app::ReaderWriterLock * this_ptr, int32_t milliseconds_timeout, int32_t initial_lock_count))
    IL2CPP_REGISTER_METHODINFO(0x047856A8, ReaderWriterLock_AcquireWriterLock_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02329E50, void, ReleaseWriterLock_1, (app::ReaderWriterLock * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A1C0, ReaderWriterLock_ReleaseWriterLock__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232A040, void, ReleaseWriterLock_2, (app::ReaderWriterLock * this_ptr, int32_t release_count))
    IL2CPP_REGISTER_METHOD(0x0232A0A0, bool, HasWriterLock, (app::ReaderWriterLock * this_ptr))
} // namespace app::classes::System::Threading::ReaderWriterLock
