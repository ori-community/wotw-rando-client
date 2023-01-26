#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_NSAsyncQueueInfo_.h>
#include <Modloader/app/structs/NSAsyncQueueInfo.h>

namespace app::classes::System::Collections::Generic::Queue_1_NSAsyncQueueInfo_ {
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr, app::NSAsyncQueueInfo* item))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::NSAsyncQueueInfo*, Dequeue, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::Queue_1_NSAsyncQueueInfo_
