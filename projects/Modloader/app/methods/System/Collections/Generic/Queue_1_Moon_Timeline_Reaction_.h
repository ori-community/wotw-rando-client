#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Reaction.h>
#include <Modloader/app/structs/Reaction__Array.h>

namespace app::classes::System::Collections::Generic::Queue_1_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x02CA44B0, void, Enqueue, app::Queue_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction item)
    IL2CPP_REGISTER_METHOD(0x02CA4590, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction_, GetEnumerator, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA4690, app::Reaction, Dequeue, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA3F20, void, ctor_2, app::Queue_1_Moon_Timeline_Reaction_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA4050, app::Object*, ICollection_get_SyncRoot, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA41B0, void, ICollection_CopyTo, app::Queue_1_Moon_Timeline_Reaction_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02CA45E0,
        app::IEnumerator_1_Moon_Timeline_Reaction_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::Queue_1_Moon_Timeline_Reaction_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CA45E0, app::IEnumerator*, IEnumerable_GetEnumerator, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA4790, app::Reaction, Peek, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA4810, bool, Contains, app::Queue_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction item)
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::Reaction__Array*, ToArray, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, app::Queue_1_Moon_Timeline_Reaction_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, app::Queue_1_Moon_Timeline_Reaction_* this_ptr, int32_t* index)
    IL2CPP_REGISTER_METHOD(0x02CA4950, void, ThrowForEmptyQueue, app::Queue_1_Moon_Timeline_Reaction_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_Moon_Timeline_Reaction_
