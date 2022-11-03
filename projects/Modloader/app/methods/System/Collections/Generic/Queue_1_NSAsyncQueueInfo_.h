#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Queue_1_NSAsyncQueueInfo_ {
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr, app::NSAsyncQueueInfo* item))
    IL2CPP_REGISTER_METHODINFO(0x0474AE38, Queue_1_NSAsyncQueueInfo__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742750, Queue_1_NSAsyncQueueInfo__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::NSAsyncQueueInfo*, Dequeue, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BCC0, Queue_1_NSAsyncQueueInfo__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor, (app::Queue_1_NSAsyncQueueInfo_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04714938, Queue_1_NSAsyncQueueInfo___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_NSAsyncQueueInfo_
