#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Single___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0011DC60, float, get_Current, app::List_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E800, bool, MoveNext, app::List_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E7D0, void, ctor, app::List_1_T_Enumerator_System_Single___Boxed* this_ptr, app::List_1_System_Single_* list)
    IL2CPP_REGISTER_METHOD(0x0014E8C0, bool, MoveNextRare, app::List_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014EA80, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E9D0, void, IEnumerator_Reset, app::List_1_T_Enumerator_System_Single___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Single_
