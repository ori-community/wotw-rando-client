#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Int64___Boxed.h>
#include <Modloader/app/structs/HashSet_1_System_Int64_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x00107C20, int64_t, get_Current, (app::HashSet_1_T_Enumerator_System_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220570, bool, MoveNext, (app::HashSet_1_T_Enumerator_System_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::HashSet_1_T_Enumerator_System_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00220540, void, ctor, (app::HashSet_1_T_Enumerator_System_Int64___Boxed * this_ptr, app::HashSet_1_System_Int64_* set))
    IL2CPP_REGISTER_METHOD(0x00220580, app::Object*, IEnumerator_get_Current, (app::HashSet_1_T_Enumerator_System_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002206C0, void, IEnumerator_Reset, (app::HashSet_1_T_Enumerator_System_Int64___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_T__Enumerator_System_Int64_
