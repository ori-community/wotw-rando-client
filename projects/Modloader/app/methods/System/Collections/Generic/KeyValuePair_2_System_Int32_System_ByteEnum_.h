#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_ByteEnum___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x001508B0, void, ctor, app::KeyValuePair_2_System_Int32_System_ByteEnum___Boxed* this_ptr, int32_t key, app::ByteEnum__Enum value)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Key, app::KeyValuePair_2_System_Int32_System_ByteEnum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011DC50, app::ByteEnum__Enum, get_Value, app::KeyValuePair_2_System_Int32_System_ByteEnum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001508C0, app::String*, ToString, app::KeyValuePair_2_System_Int32_System_ByteEnum___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_System_ByteEnum_
