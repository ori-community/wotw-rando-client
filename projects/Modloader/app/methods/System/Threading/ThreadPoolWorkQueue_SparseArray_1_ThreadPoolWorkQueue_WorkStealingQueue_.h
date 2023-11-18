#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue.h>

namespace app::classes::System::Threading::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ {
    IL2CPP_REGISTER_METHOD(0x02775660, app::ThreadPoolWorkQueue_WorkStealingQueue__Array*, get_Current, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A61DB0, void, ctor, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr, int32_t initial_size))
    IL2CPP_REGISTER_METHOD(0x02A61E20, int32_t, Add, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr, app::ThreadPoolWorkQueue_WorkStealingQueue* e))
    IL2CPP_REGISTER_METHOD(0x02A620A0, void, Remove, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr, app::ThreadPoolWorkQueue_WorkStealingQueue* e))
} // namespace app::classes::System::Threading::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_
