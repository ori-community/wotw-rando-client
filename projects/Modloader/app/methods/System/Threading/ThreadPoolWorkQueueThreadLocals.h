#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue.h>

namespace app::classes::System::Threading::ThreadPoolWorkQueueThreadLocals {
    IL2CPP_REGISTER_METHOD(0x02349010, void, ctor, (app::ThreadPoolWorkQueueThreadLocals * this_ptr, app::ThreadPoolWorkQueue* tpq))
    IL2CPP_REGISTER_METHOD(0x02349360, void, CleanUp, (app::ThreadPoolWorkQueueThreadLocals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023494F0, void, Finalize, (app::ThreadPoolWorkQueueThreadLocals * this_ptr))
} // namespace app::classes::System::Threading::ThreadPoolWorkQueueThreadLocals
