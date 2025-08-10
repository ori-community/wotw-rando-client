#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_Int32Enum_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Int32Enum___Boxed.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x0021FC60, void, ctor, app::HashSet_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr, app::HashSet_1_System_Int32Enum_* set)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::HashSet_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220320, bool, MoveNext, app::HashSet_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114150, app::Int32Enum__Enum, get_Current, app::HashSet_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220330, app::Object*, IEnumerator_get_Current, app::HashSet_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220470, void, IEnumerator_Reset, app::HashSet_1_T_Enumerator_System_Int32Enum___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Int32Enum_
