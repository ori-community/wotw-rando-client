#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Queue_1_System_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_Single_.h>
#include <Modloader/app/structs/IEnumerator_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::System::Collections::Generic::Queue_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775FF0, Queue_1_System_Single__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7FB0, void, Enqueue, (app::Queue_1_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHODINFO(0x0470B700, Queue_1_System_Single__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA6970, void, Clear, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728AD8, Queue_1_System_Single__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA8080, float, Dequeue, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A848, Queue_1_System_Single__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04730860, Queue_1_System_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7A20, void, ctor_2, (app::Queue_1_System_Single_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04761340, Queue_1_System_Single___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7B50, app::Object*, ICollection_get_SyncRoot, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7CB0, void, ICollection_CopyTo, (app::Queue_1_System_Single_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477C870, Queue_1_System_Single__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA6D60, app::Queue_1_T_Enumerator_System_Single_, GetEnumerator, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6DA0, app::IEnumerator_1_System_Single_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA6DA0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA8120, float, Peek, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA8180, bool, Contains, (app::Queue_1_System_Single_ * this_ptr, float item))
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::Single__Array*, ToArray, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_System_Single_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_System_Single_ * this_ptr, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x02CA8280, void, ThrowForEmptyQueue, (app::Queue_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E9C8, Queue_1_System_Single__ThrowForEmptyQueue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_System_Single_
