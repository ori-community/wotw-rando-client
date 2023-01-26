#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue.h>
#include <Modloader/app/structs/IThreadPoolWorkItem.h>

namespace app::classes::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue {
    IL2CPP_REGISTER_METHOD(0x02347FE0, void, LocalPush, (app::ThreadPoolWorkQueue_WorkStealingQueue * this_ptr, app::IThreadPoolWorkItem* obj))
    IL2CPP_REGISTER_METHOD(0x02348530, bool, LocalFindAndPop, (app::ThreadPoolWorkQueue_WorkStealingQueue * this_ptr, app::IThreadPoolWorkItem* obj))
    IL2CPP_REGISTER_METHOD(0x02348810, bool, LocalPop, (app::ThreadPoolWorkQueue_WorkStealingQueue * this_ptr, app::IThreadPoolWorkItem** obj))
    IL2CPP_REGISTER_METHOD(0x02348BF0, bool, TrySteal_1, (app::ThreadPoolWorkQueue_WorkStealingQueue * this_ptr, app::IThreadPoolWorkItem** obj, bool* missed_steal))
    IL2CPP_REGISTER_METHOD(0x02348C10, bool, TrySteal_2, (app::ThreadPoolWorkQueue_WorkStealingQueue * this_ptr, app::IThreadPoolWorkItem** obj, bool* missed_steal, int32_t milliseconds_timeout))
    IL2CPP_REGISTER_METHOD(0x02348F60, void, ctor, (app::ThreadPoolWorkQueue_WorkStealingQueue * this_ptr))
} // namespace app::classes::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue
