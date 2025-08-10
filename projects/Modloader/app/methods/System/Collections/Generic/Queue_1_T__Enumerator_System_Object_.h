#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_System_Object_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_Object___Boxed.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x001EE300, app::Object*, get_Current, app::Queue_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE350, app::Object*, IEnumerator_get_Current, app::Queue_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE2B0, void, ctor, app::Queue_1_T_Enumerator_System_Object___Boxed* this_ptr, app::Queue_1_System_Object_* q)
    IL2CPP_REGISTER_METHOD(0x001EE2E0, void, Dispose, app::Queue_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE2F0, bool, MoveNext, app::Queue_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE340, void, ThrowEnumerationNotStartedOrEnded, app::Queue_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE3B0, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_System_Object___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_Object_
