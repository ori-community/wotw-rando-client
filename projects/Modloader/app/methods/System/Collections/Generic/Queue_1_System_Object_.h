#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Queue_1_System_Object_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_Object_.h>

namespace app::classes::System::Collections::Generic::Queue_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA71B0, app::Object*, ICollection_get_SyncRoot, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor_2, app::Queue_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA7310, void, ICollection_CopyTo, app::Queue_1_System_Object_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, app::Queue_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02CA76E0, app::Queue_1_T_Enumerator_System_Object_, GetEnumerator, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CA7720,
        app::IEnumerator_1_System_Object_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::Queue_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CA7720, app::IEnumerator*, IEnumerable_GetEnumerator, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::Object*, Dequeue, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA7860, app::Object*, Peek, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA78C0, bool, Contains, app::Queue_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::Object__Array*, ToArray, app::Queue_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, app::Queue_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, app::Queue_1_System_Object_* this_ptr, int32_t* index)
    IL2CPP_REGISTER_METHOD(0x02CA79C0, void, ThrowForEmptyQueue, app::Queue_1_System_Object_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_System_Object_
