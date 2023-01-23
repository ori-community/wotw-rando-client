#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentQueue_1_T__Segment_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::ConcurrentQueue_1_T_Segment_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F26D20, int32_t, get_FreezeOffset, (app::ConcurrentQueue_1_T_Segment_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F26C60, void, ctor, (app::ConcurrentQueue_1_T_Segment_System_Object_ * this_ptr, int32_t bounded_length))
    IL2CPP_REGISTER_METHOD(0x02F26D40, void, EnsureFrozenForEnqueues, (app::ConcurrentQueue_1_T_Segment_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F26E70, bool, TryDequeue, (app::ConcurrentQueue_1_T_Segment_System_Object_ * this_ptr, app::Object** item))
    IL2CPP_REGISTER_METHOD(0x02F270E0, bool, TryEnqueue, (app::ConcurrentQueue_1_T_Segment_System_Object_ * this_ptr, app::Object* item))
} // namespace app::classes::System::Collections::Concurrent::ConcurrentQueue_1_T__Segment_System_Object_
