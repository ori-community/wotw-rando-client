#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_ByteEnum_System_Boolean___Boxed.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_ByteEnum_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0014FF40, void, ctor, (app::KeyValuePair_2_System_ByteEnum_System_Boolean___Boxed * this_ptr, app::ByteEnum__Enum key, bool value))
    IL2CPP_REGISTER_METHOD(0x0010E100, app::ByteEnum__Enum, get_Key, (app::KeyValuePair_2_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E9A0, bool, get_Value, (app::KeyValuePair_2_System_ByteEnum_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014FF50, app::String*, ToString, (app::KeyValuePair_2_System_ByteEnum_System_Boolean___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_ByteEnum_System_Boolean_
