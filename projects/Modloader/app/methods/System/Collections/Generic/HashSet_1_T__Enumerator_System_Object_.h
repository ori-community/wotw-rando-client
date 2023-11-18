#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/HashSet_1_System_Object_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Object___Boxed.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C20, app::Object*, get_Current, (app::HashSet_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002207A0, app::Object*, IEnumerator_get_Current, (app::HashSet_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220540, void, ctor, (app::HashSet_1_T_Enumerator_System_Object___Boxed * this_ptr, app::HashSet_1_System_Object_* set))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::HashSet_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220790, bool, MoveNext, (app::HashSet_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220890, void, IEnumerator_Reset, (app::HashSet_1_T_Enumerator_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Object_
