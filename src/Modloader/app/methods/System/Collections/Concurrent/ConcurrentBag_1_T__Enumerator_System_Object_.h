#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentBag_1_T_Enumerator_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentBag_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Current, app::ConcurrentBag_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ADA400, app::Object*, IEnumerator_get_Current, app::ConcurrentBag_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, app::ConcurrentBag_1_T_Enumerator_System_Object_* this_ptr, app::Object__Array* array)
    IL2CPP_REGISTER_METHOD(0x02ADA380, bool, MoveNext, app::ConcurrentBag_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ADA4F0, void, Reset, app::ConcurrentBag_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::ConcurrentBag_1_T_Enumerator_System_Object_* this_ptr)
} // namespace app::classes::System::Collections::Concurrent::ConcurrentBag_1_T__Enumerator_System_Object_
