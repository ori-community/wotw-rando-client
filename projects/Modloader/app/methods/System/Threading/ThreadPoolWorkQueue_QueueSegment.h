#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#include <Modloader/app/structs/IThreadPoolWorkItem.h>

namespace app::classes::System::Threading::ThreadPoolWorkQueue_QueueSegment {
    IL2CPP_REGISTER_METHOD(0x02347C40, void, GetIndexes, (app::ThreadPoolWorkQueue_QueueSegment * this_ptr, int32_t* upper, int32_t* lower))
    IL2CPP_REGISTER_METHOD(0x02347C60, bool, CompareExchangeIndexes, (app::ThreadPoolWorkQueue_QueueSegment * this_ptr, int32_t* prev_upper, int32_t new_upper, int32_t* prev_lower, int32_t new_lower))
    IL2CPP_REGISTER_METHOD(0x02347CA0, void, ctor, (app::ThreadPoolWorkQueue_QueueSegment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02347D30, bool, IsUsedUp, (app::ThreadPoolWorkQueue_QueueSegment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02347D80, bool, TryEnqueue, (app::ThreadPoolWorkQueue_QueueSegment * this_ptr, app::IThreadPoolWorkItem* node))
    IL2CPP_REGISTER_METHOD(0x02347E30, bool, TryDequeue, (app::ThreadPoolWorkQueue_QueueSegment * this_ptr, app::IThreadPoolWorkItem** node))
} // namespace app::classes::System::Threading::ThreadPoolWorkQueue_QueueSegment
