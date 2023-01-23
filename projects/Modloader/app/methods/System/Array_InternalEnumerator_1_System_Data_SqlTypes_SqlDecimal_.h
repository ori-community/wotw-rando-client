#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/SqlDecimal.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019A670, app::SqlDecimal, get_Current, (app::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FC58, Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019A6A0, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_System_Data_SqlTypes_SqlDecimal_
