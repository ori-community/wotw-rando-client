#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Object___Boxed.h>
#include <Modloader/app/structs/List_1_System_Object_.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C20, app::Object*, get_Current, (app::List_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EE58, List_1_T_Enumerator_System_Object__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014EA30, app::Object*, IEnumerator_get_Current, (app::List_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014CC40, void, ctor, (app::List_1_T_Enumerator_System_Object___Boxed * this_ptr, app::List_1_System_Object_* list))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717E18, List_1_T_Enumerator_System_Object__Dispose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014EA20, bool, MoveNext, (app::List_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C9B8, List_1_T_Enumerator_System_Object__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014CD40, bool, MoveNextRare, (app::List_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014CE70, void, IEnumerator_Reset, (app::List_1_T_Enumerator_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Object_
