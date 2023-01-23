#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Boolean___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00151890, void, ctor, (app::KeyValuePair_2_System_Object_System_Boolean___Boxed * this_ptr, app::Object* key, bool value))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, (app::KeyValuePair_2_System_Object_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114120, bool, get_Value, (app::KeyValuePair_2_System_Object_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001518A0, app::String*, ToString, (app::KeyValuePair_2_System_Object_System_Boolean___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_System_Boolean_
