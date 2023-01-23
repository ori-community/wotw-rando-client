#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_UInt16Enum___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/UInt16Enum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_UInt16Enum_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_UInt16Enum___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_UInt16Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_UInt16Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019E2C0, app::UInt16Enum__Enum, get_Current, (app::Array_InternalEnumerator_1_UInt16Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797C80, Array_InternalEnumerator_1_UInt16Enum__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_UInt16Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019E440, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_UInt16Enum___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_UInt16Enum_
