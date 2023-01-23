#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ThreadLocal_1_T_LinkedSlotVolatile_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019DE10, app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object_, get_Current, (app::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047262F0, Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019DF90, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_System_Threading_ThreadLocal_1_LinkedSlotVolatile_
