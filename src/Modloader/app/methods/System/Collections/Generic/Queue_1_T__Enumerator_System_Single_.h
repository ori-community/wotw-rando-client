#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_System_Single_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_Single___Boxed.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x001EE090, void, ctor, app::Queue_1_T_Enumerator_System_Single___Boxed* this_ptr, app::Queue_1_System_Single_* q)
    IL2CPP_REGISTER_METHOD(0x001EE0C0, void, Dispose, app::Queue_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE480, bool, MoveNext, app::Queue_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE490, float, get_Current, app::Queue_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE4D0, void, ThrowEnumerationNotStartedOrEnded, app::Queue_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE4E0, app::Object*, IEnumerator_get_Current, app::Queue_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE5A0, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_System_Single___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_Single_
