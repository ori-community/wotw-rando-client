#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Int32___Boxed.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Current, (app::List_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711730, List_1_T_Enumerator_System_Int32__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014E800, bool, MoveNext, (app::List_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047342F8, List_1_T_Enumerator_System_Int32__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E060, List_1_T_Enumerator_System_Int32__Dispose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014E7D0, void, ctor, (app::List_1_T_Enumerator_System_Int32___Boxed * this_ptr, app::List_1_System_Int32_* list))
    IL2CPP_REGISTER_METHOD(0x0014E8C0, bool, MoveNextRare, (app::List_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014E910, app::Object*, IEnumerator_get_Current, (app::List_1_T_Enumerator_System_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014E9D0, void, IEnumerator_Reset, (app::List_1_T_Enumerator_System_Int32___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Int32_
