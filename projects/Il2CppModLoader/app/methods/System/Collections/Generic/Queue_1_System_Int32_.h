#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Queue_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B580, Queue_1_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A518, Queue_1_System_Int32__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA6E30, int32_t, Dequeue, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709068, Queue_1_System_Int32__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA66E0, void, ctor_2, (app::Queue_1_System_Int32_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04785F08, Queue_1_System_Int32___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6810, app::Object*, ICollection_get_SyncRoot, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6970, void, Clear, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6990, void, ICollection_CopyTo, (app::Queue_1_System_Int32_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04768868, Queue_1_System_Int32__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA6C90, void, Enqueue, (app::Queue_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02CA6D60, app::Queue_1_T_Enumerator_System_Int32_, GetEnumerator, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6DA0, app::IEnumerator_1_System_Int32_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6DA0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6EC0, int32_t, Peek, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6F20, bool, Contains, (app::Queue_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::Int32__Array*, ToArray, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_System_Int32_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_System_Int32_ * this_ptr, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x02CA7020, void, ThrowForEmptyQueue, (app::Queue_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776850, Queue_1_System_Int32__ThrowForEmptyQueue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_System_Int32_
