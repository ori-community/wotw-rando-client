#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_Int32___Boxed.h>
#include <Modloader/app/structs/Queue_1_System_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x001EE090, void, ctor, (app::Queue_1_T_Enumerator_System_Int32___Boxed * this_ptr, app::Queue_1_System_Int32_* q))
    IL2CPP_REGISTER_METHOD(0x001EE0C0, void, Dispose, (app::Queue_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE0D0, bool, MoveNext, (app::Queue_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E8A0, Queue_1_T_Enumerator_System_Int32__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001EE0E0, int32_t, get_Current, (app::Queue_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE120, void, ThrowEnumerationNotStartedOrEnded, (app::Queue_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047373E0, Queue_1_T_Enumerator_System_Int32__ThrowEnumerationNotStartedOrEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001EE130, app::Object*, IEnumerator_get_Current, (app::Queue_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE1E0, void, IEnumerator_Reset, (app::Queue_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710578, Queue_1_T_Enumerator_System_Int32__System_Collections_IEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_Int32_
