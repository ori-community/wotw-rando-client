#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Int32___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0021FC60, void, ctor, app::HashSet_1_T_Enumerator_System_Int32___Boxed* this_ptr, app::HashSet_1_System_Int32_* set)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::HashSet_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220100, bool, MoveNext, app::HashSet_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Current, app::HashSet_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220110, app::Object*, IEnumerator_get_Current, app::HashSet_1_T_Enumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220250, void, IEnumerator_Reset, app::HashSet_1_T_Enumerator_System_Int32___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Int32_
