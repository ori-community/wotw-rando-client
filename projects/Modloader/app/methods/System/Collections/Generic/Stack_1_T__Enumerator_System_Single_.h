#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_System_Single_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Single___Boxed.h>

namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x00233C30, void, ctor, app::Stack_1_T_Enumerator_System_Single___Boxed* this_ptr, app::Stack_1_System_Single_* stack)
    IL2CPP_REGISTER_METHOD(0x002337F0, void, Dispose, app::Stack_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002341E0, bool, MoveNext, app::Stack_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002341F0, float, get_Current, app::Stack_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00234230, void, ThrowEnumerationNotStartedOrEnded, app::Stack_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00234240, app::Object*, IEnumerator_get_Current, app::Stack_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00234300, void, IEnumerator_Reset, app::Stack_1_T_Enumerator_System_Single___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Single_
