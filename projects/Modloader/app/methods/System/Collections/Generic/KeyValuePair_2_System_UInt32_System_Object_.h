#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_UInt32_System_Object___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_UInt32_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0013C010, void, ctor, app::KeyValuePair_2_System_UInt32_System_Object___Boxed* this_ptr, uint32_t key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0010E170, uint32_t, get_Key, app::KeyValuePair_2_System_UInt32_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C10, app::Object*, get_Value, app::KeyValuePair_2_System_UInt32_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001511B0, app::String*, ToString, app::KeyValuePair_2_System_UInt32_System_Object___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_UInt32_System_Object_
