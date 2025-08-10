#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_StateValidator_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_StateValidator___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StateValidator.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_StateValidator_ {
    IL2CPP_REGISTER_METHOD(0x00133A80, app::StateValidator, get_Current, app::List_1_T_Enumerator_StateValidator___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D070, bool, MoveNext, app::List_1_T_Enumerator_StateValidator___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_StateValidator___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D030, void, ctor, app::List_1_T_Enumerator_StateValidator___Boxed* this_ptr, app::List_1_StateValidator_* list)
    IL2CPP_REGISTER_METHOD(0x0014D150, bool, MoveNextRare, app::List_1_T_Enumerator_StateValidator___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D1A0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_StateValidator___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D260, void, IEnumerator_Reset, app::List_1_T_Enumerator_StateValidator___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_StateValidator_
