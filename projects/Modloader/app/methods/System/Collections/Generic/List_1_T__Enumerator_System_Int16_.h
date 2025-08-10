#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Int16_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Int16___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Int16_ {
    IL2CPP_REGISTER_METHOD(0x0014E580, void, ctor, app::List_1_T_Enumerator_System_Int16___Boxed* this_ptr, app::List_1_System_Int16_* list)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E5B0, bool, MoveNext, app::List_1_T_Enumerator_System_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E670, bool, MoveNextRare, app::List_1_T_Enumerator_System_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001358E0, int16_t, get_Current, app::List_1_T_Enumerator_System_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E6C0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_System_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E780, void, IEnumerator_Reset, app::List_1_T_Enumerator_System_Int16___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Int16_
