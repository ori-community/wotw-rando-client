#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_UInt64___Boxed.h>
#include <Modloader/app/structs/List_1_System_UInt64_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x00107C20, uint64_t, get_Current, (app::List_1_T_Enumerator_System_UInt64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751C28, List_1_T_Enumerator_System_UInt64__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014CEB0, bool, MoveNext, (app::List_1_T_Enumerator_System_UInt64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04721F68, List_1_T_Enumerator_System_UInt64__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_System_UInt64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732820, List_1_T_Enumerator_System_UInt64__Dispose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014CC40, void, ctor, (app::List_1_T_Enumerator_System_UInt64___Boxed * this_ptr, app::List_1_System_UInt64_* list))
    IL2CPP_REGISTER_METHOD(0x0014CD40, bool, MoveNextRare, (app::List_1_T_Enumerator_System_UInt64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014CF70, app::Object*, IEnumerator_get_Current, (app::List_1_T_Enumerator_System_UInt64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014CE70, void, IEnumerator_Reset, (app::List_1_T_Enumerator_System_UInt64___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_UInt64_
