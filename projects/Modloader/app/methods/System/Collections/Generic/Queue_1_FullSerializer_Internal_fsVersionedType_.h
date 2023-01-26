#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/fsVersionedType.h>
#include <Modloader/app/structs/fsVersionedType__Array.h>

namespace app::classes::System::Collections::Generic::Queue_1_FullSerializer_Internal_fsVersionedType_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA2260, void, Enqueue, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType item))
    IL2CPP_REGISTER_METHOD(0x02CA2440, app::fsVersionedType, Dequeue, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA1CD0, void, ctor_2, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA1E00, app::Object*, ICollection_get_SyncRoot, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA1F60, void, ICollection_CopyTo, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CA2340, app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType_, GetEnumerator, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA2390, app::IEnumerator_1_FullSerializer_Internal_fsVersionedType_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA2390, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA2530, app::fsVersionedType, Peek, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA25B0, bool, Contains, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType item))
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::fsVersionedType__Array*, ToArray, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x02CA26F0, void, ThrowForEmptyQueue, (app::Queue_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_FullSerializer_Internal_fsVersionedType_
