#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_System_Int32_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Int32___Boxed.h>

namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00233C30, void, ctor, app::Stack_1_T_Enumerator_System_Int32___Boxed* this_ptr, app::Stack_1_System_Int32_* stack)
    IL2CPP_REGISTER_METHOD(0x002337F0, void, Dispose, app::Stack_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233C60, bool, MoveNext, app::Stack_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233C70, int32_t, get_Current, app::Stack_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233CB0, void, ThrowEnumerationNotStartedOrEnded, app::Stack_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233CC0, app::Object*, IEnumerator_get_Current, app::Stack_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233D70, void, IEnumerator_Reset, app::Stack_1_T_Enumerator_System_Int32___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Int32_
