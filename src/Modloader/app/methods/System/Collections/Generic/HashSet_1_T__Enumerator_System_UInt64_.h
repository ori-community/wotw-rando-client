#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_UInt64_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_UInt64___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x00220540, void, ctor, app::HashSet_1_T_Enumerator_System_UInt64___Boxed* this_ptr, app::HashSet_1_System_UInt64_* set)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::HashSet_1_T_Enumerator_System_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220B80, bool, MoveNext, app::HashSet_1_T_Enumerator_System_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C20, uint64_t, get_Current, app::HashSet_1_T_Enumerator_System_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220B90, app::Object*, IEnumerator_get_Current, app::HashSet_1_T_Enumerator_System_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00220CD0, void, IEnumerator_Reset, app::HashSet_1_T_Enumerator_System_UInt64___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_UInt64_
