#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_ByteEnum___Boxed.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, app::Array_InternalEnumerator_1_ByteEnum___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_ByteEnum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_ByteEnum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B2BA0, app::ByteEnum__Enum, get_Current, app::Array_InternalEnumerator_1_ByteEnum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_ByteEnum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B2D20, app::Object*, IEnumerator_get_Current, app::Array_InternalEnumerator_1_ByteEnum___Boxed* this_ptr)
} // namespace app::classes::System::Array_InternalEnumerator_1_ByteEnum_
