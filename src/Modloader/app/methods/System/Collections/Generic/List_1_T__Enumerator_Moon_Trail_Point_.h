#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Trail_Point___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Trail_Point.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x0014D9D0, void, ctor, app::List_1_T_Enumerator_Moon_Trail_Point___Boxed* this_ptr, app::List_1_Moon_Trail_Point_* list)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_Moon_Trail_Point___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DA20, bool, MoveNext, app::List_1_T_Enumerator_Moon_Trail_Point___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DB30, bool, MoveNextRare, app::List_1_T_Enumerator_Moon_Trail_Point___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DBA0, app::Trail_Point, get_Current, app::List_1_T_Enumerator_Moon_Trail_Point___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DBD0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_Moon_Trail_Point___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DCC0, void, IEnumerator_Reset, app::List_1_T_Enumerator_Moon_Trail_Point___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_Trail_Point_
