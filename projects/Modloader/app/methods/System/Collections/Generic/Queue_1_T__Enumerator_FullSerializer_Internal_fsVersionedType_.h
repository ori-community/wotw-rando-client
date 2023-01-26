#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/fsVersionedType.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_FullSerializer_Internal_fsVersionedType_ {
    IL2CPP_REGISTER_METHOD(0x001ECDC0, void, ctor, (app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed * this_ptr, app::Queue_1_FullSerializer_Internal_fsVersionedType_* q))
    IL2CPP_REGISTER_METHOD(0x001ECE00, void, Dispose, (app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECE20, bool, MoveNext, (app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECE30, app::fsVersionedType, get_Current, (app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECE80, void, ThrowEnumerationNotStartedOrEnded, (app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECE90, app::Object*, IEnumerator_get_Current, (app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECF50, void, IEnumerator_Reset, (app::Queue_1_T_Enumerator_FullSerializer_Internal_fsVersionedType___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_FullSerializer_Internal_fsVersionedType_
