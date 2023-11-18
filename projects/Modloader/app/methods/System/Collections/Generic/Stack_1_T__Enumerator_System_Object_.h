#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_System_Object_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Object___Boxed.h>

namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00234060, app::Object*, get_Current, (app::Stack_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002340B0, app::Object*, IEnumerator_get_Current, (app::Stack_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00234020, void, ctor, (app::Stack_1_T_Enumerator_System_Object___Boxed * this_ptr, app::Stack_1_System_Object_* stack))
    IL2CPP_REGISTER_METHOD(0x002337F0, void, Dispose, (app::Stack_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00234050, bool, MoveNext, (app::Stack_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002340A0, void, ThrowEnumerationNotStartedOrEnded, (app::Stack_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00234110, void, IEnumerator_Reset, (app::Stack_1_T_Enumerator_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Object_
