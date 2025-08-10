#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Double_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Double___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x00127520, double, get_Current, app::List_1_T_Enumerator_System_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CEB0, bool, MoveNext, app::List_1_T_Enumerator_System_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CC40, void, ctor, app::List_1_T_Enumerator_System_Double___Boxed* this_ptr, app::List_1_System_Double_* list)
    IL2CPP_REGISTER_METHOD(0x0014CD40, bool, MoveNextRare, app::List_1_T_Enumerator_System_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CDB0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_System_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CE70, void, IEnumerator_Reset, app::List_1_T_Enumerator_System_Double___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Double_
