#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_InternalEnumerator_1_ArraySegment_1_Byte___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ArraySegment_1_Byte_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_ArraySegment_1_Byte__ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_ArraySegment_1_Byte___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_ArraySegment_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_ArraySegment_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B27B0, app::ArraySegment_1_Byte_, get_Current, (app::Array_InternalEnumerator_1_ArraySegment_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_ArraySegment_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B27E0, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_ArraySegment_1_Byte___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_ArraySegment_1_Byte__
