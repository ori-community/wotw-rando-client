#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_System_Int32Enum_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_System_Int32Enum___Boxed.h>

namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00233C30, void, ctor, app::Stack_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr, app::Stack_1_System_Int32Enum_* stack)
    IL2CPP_REGISTER_METHOD(0x002337F0, void, Dispose, app::Stack_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233E40, bool, MoveNext, app::Stack_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233E50, app::Int32Enum__Enum, get_Current, app::Stack_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233E90, void, ThrowEnumerationNotStartedOrEnded, app::Stack_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233EA0, app::Object*, IEnumerator_get_Current, app::Stack_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00233F50, void, IEnumerator_Reset, app::Stack_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_T__Enumerator_System_Int32Enum_
