#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Boolean___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00113140, bool, get_Current, app::List_1_T_Enumerator_System_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E360, bool, MoveNext, app::List_1_T_Enumerator_System_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E330, void, ctor, app::List_1_T_Enumerator_System_Boolean___Boxed* this_ptr, app::List_1_System_Boolean_* list)
    IL2CPP_REGISTER_METHOD(0x0014E420, bool, MoveNextRare, app::List_1_T_Enumerator_System_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E470, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_System_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E530, void, IEnumerator_Reset, app::List_1_T_Enumerator_System_Boolean___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Boolean_
