#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_ValueTuple_4__1.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_4__1__Boxed.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_4___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single_.h>
#include <Modloader/app/structs/ValueTuple_4_String_Int32_Int32_Single_.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_ValueTuple_4_ {
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::ValueTuple_4_String_Int32_Int32_Single_,
        get_Current_1,
        app::List_1_T_Enumerator_System_ValueTuple_4___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014EB40, bool, MoveNext_1, app::List_1_T_Enumerator_System_ValueTuple_4___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose_1, app::List_1_T_Enumerator_System_ValueTuple_4___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D030, void, ctor, app::List_1_T_Enumerator_System_ValueTuple_4__1__Boxed* this_ptr, app::List_1_System_ValueTuple_4__1* list)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose_2, app::List_1_T_Enumerator_System_ValueTuple_4__1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014EB40, bool, MoveNext_2, app::List_1_T_Enumerator_System_ValueTuple_4__1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D150, bool, MoveNextRare, app::List_1_T_Enumerator_System_ValueTuple_4__1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::ValueTuple_4_Object_Int32_Int32_Single_,
        get_Current_2,
        app::List_1_T_Enumerator_System_ValueTuple_4__1__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014D1A0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_System_ValueTuple_4__1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D260, void, IEnumerator_Reset, app::List_1_T_Enumerator_System_ValueTuple_4__1__Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_ValueTuple_4_
