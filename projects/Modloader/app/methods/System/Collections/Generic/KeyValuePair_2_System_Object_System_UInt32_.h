#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_UInt32___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::KeyValuePair_2_System_Object_System_UInt32___Boxed * this_ptr, app::Object* key, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, (app::KeyValuePair_2_System_Object_System_UInt32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A860, uint32_t, get_Value, (app::KeyValuePair_2_System_Object_System_UInt32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00151A20, app::String*, ToString, (app::KeyValuePair_2_System_Object_System_UInt32___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_System_UInt32_
