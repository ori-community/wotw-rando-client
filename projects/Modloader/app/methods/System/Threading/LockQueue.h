#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::LockQueue {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LockQueue * this_ptr, app::ReaderWriterLock* rwlock))
    IL2CPP_REGISTER_METHOD(0x027DE3E0, bool, Wait, (app::LockQueue * this_ptr, int32_t timeout))
    IL2CPP_REGISTER_METHOD(0x027DE570, bool, get_IsEmpty, (app::LockQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DE660, void, Pulse, (app::LockQueue * this_ptr))
} // namespace app::classes::System::Threading::LockQueue
