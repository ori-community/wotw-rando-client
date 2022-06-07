#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Concurrent::ConcurrentQueue_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::ConcurrentQueue_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F27690, app::Object *, ICollection_get_SyncRoot, (app::ConcurrentQueue_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731980, ConcurrentQueue_1_System_Object__System_Collections_ICollection_get_SyncRoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F27A80, int32_t, get_Count, (app::ConcurrentQueue_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F272B0, void, ctor, (app::ConcurrentQueue_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F27510, void, ICollection_CopyTo, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047295D8, ConcurrentQueue_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F276F0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::ConcurrentQueue_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F27740, bool, System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02AD65B0, bool, System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Object * * item))
    IL2CPP_REGISTER_METHOD(0x02F27770, app::Object__Array *, ToArray, (app::ConcurrentQueue_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047408E0, ConcurrentQueue_1_System_Object__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F27E30, int32_t, GetCount_1, (app::ConcurrentQueue_1_T_Segment_System_Object_ * s, int32_t head, int32_t tail))
    IL2CPP_REGISTER_METHOD(0x02F27F20, int64_t, GetCount_2, (app::ConcurrentQueue_1_T_Segment_System_Object_ * head, int32_t head_head, app::ConcurrentQueue_1_T_Segment_System_Object_ * tail, int32_t tail_tail))
    IL2CPP_REGISTER_METHOD(0x02F28110, void, CopyTo, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Object__Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04758F88, ConcurrentQueue_1_System_Object__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F28420, app::IEnumerator_1_System_Object_ *, GetEnumerator, (app::ConcurrentQueue_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F284C0, void, SnapForObservation, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::ConcurrentQueue_1_T_Segment_System_Object_ * * head, int32_t * head_head, app::ConcurrentQueue_1_T_Segment_System_Object_ * * tail, int32_t * tail_tail))
    IL2CPP_REGISTER_METHOD(0x02F28660, app::Object *, GetItemWhenAvailable, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::ConcurrentQueue_1_T_Segment_System_Object_ * segment, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02F28800, app::IEnumerator_1_System_Object_ *, Enumerate, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::ConcurrentQueue_1_T_Segment_System_Object_ * head, int32_t head_head, app::ConcurrentQueue_1_T_Segment_System_Object_ * tail, int32_t tail_tail))
    IL2CPP_REGISTER_METHOD(0x02F28970, void, Enqueue, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02F289F0, void, EnqueueSlow, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02F28D50, bool, TryDequeue, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Object * * result))
    IL2CPP_REGISTER_METHOD(0x02F28DE0, bool, TryDequeueSlow, (app::ConcurrentQueue_1_System_Object_ * this_ptr, app::Object * * item))
}
