#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(0x02CA60D0, void, Enqueue, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item))
    IL2CPP_REGISTER_METHODINFO(0x04701EE8, Queue_1_SimpleGenericPool_1_PoolItem__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA5B40, void, ctor_1, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0471FC18, Queue_1_SimpleGenericPool_1_PoolItem___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA6320, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_, Dequeue, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717430, Queue_1_SimpleGenericPool_1_PoolItem__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739E70, Queue_1_SimpleGenericPool_1_PoolItem__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_2, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA5C70, app::Object *, ICollection_get_SyncRoot, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA5DD0, void, ICollection_CopyTo, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477E380, Queue_1_SimpleGenericPool_1_PoolItem__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA61D0, app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem_, GetEnumerator, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6240, app::IEnumerator_1_SimpleGenericPool_1_PoolItem_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6240, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6470, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_, Peek, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6500, bool, Contains, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item))
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array *, ToArray, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr, int32_t * index))
    IL2CPP_REGISTER_METHOD(0x02CA6680, void, ThrowForEmptyQueue, (app::Queue_1_SimpleGenericPool_1_PoolItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DB88, Queue_1_SimpleGenericPool_1_PoolItem__ThrowForEmptyQueue__MethodInfo)
}
