#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Queue_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_ValueTuple_2_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Queue_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/IEnumerator_1_System_ValueTuple_2__7.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object___Array.h>

namespace app::classes::System::Collections::Generic::Queue_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Queue_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047814B0, Queue_1_System_ValueTuple_2___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243D290, app::Queue_1_T_Enumerator_System_ValueTuple_2_, GetEnumerator_1, (app::Queue_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D6F0, Queue_1_System_ValueTuple_2__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear_1, (app::Queue_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047624F8, Queue_1_System_ValueTuple_2__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count_1, (app::Queue_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C7A0, Queue_1_System_ValueTuple_2__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243D360, app::ValueTuple_2_Int32_UnityEngine_GameObject_, Dequeue_1, (app::Queue_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758650, Queue_1_System_ValueTuple_2__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243D1B0, void, Enqueue_1, (app::Queue_1_System_ValueTuple_2_ * this_ptr, app::ValueTuple_2_Int32_UnityEngine_GameObject_ item))
    IL2CPP_REGISTER_METHODINFO(0x04785920, Queue_1_System_ValueTuple_2__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_2, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA82E0, void, ctor_3, (app::Queue_1_System_ValueTuple_2__1 * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04763140, Queue_1_System_ValueTuple_2__1__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count_2, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA8410, app::Object*, ICollection_get_SyncRoot, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear_2, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA8570, void, ICollection_CopyTo, (app::Queue_1_System_ValueTuple_2__1 * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04708320, Queue_1_System_ValueTuple_2__1_System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243D1B0, void, Enqueue_2, (app::Queue_1_System_ValueTuple_2__1 * this_ptr, app::ValueTuple_2_Int32_Object_ item))
    IL2CPP_REGISTER_METHOD(0x0243D290, app::Queue_1_T_Enumerator_System_ValueTuple_2__1, GetEnumerator_2, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D2D0, app::IEnumerator_1_System_ValueTuple_2__7*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D2D0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D360, app::ValueTuple_2_Int32_Object_, Dequeue_2, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D430, app::ValueTuple_2_Int32_Object_, Peek, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D4B0, bool, Contains, (app::Queue_1_System_ValueTuple_2__1 * this_ptr, app::ValueTuple_2_Int32_Object_ item))
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::ValueTuple_2_Int32_Object___Array*, ToArray, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_System_ValueTuple_2__1 * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_System_ValueTuple_2__1 * this_ptr, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x02CA8870, void, ThrowForEmptyQueue, (app::Queue_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BCE0, Queue_1_System_ValueTuple_2__1_ThrowForEmptyQueue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_System_ValueTuple_2_
