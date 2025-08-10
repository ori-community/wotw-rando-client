#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_KeyValuePair_2_System_Object_System_Object___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_KeyValuePair_2_System_Object_System_Object__ {
    IL2CPP_REGISTER_METHOD(
        0x00151540,
        void,
        ctor,
        app::KeyValuePair_2_System_Object_KeyValuePair_2_System_Object_System_Object___Boxed* this_ptr,
        app::Object* key,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, app::KeyValuePair_2_System_Object_KeyValuePair_2_System_Object_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00151550,
        app::KeyValuePair_2_System_Object_System_Object_,
        get_Value,
        app::KeyValuePair_2_System_Object_KeyValuePair_2_System_Object_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00151560, app::String*, ToString, app::KeyValuePair_2_System_Object_KeyValuePair_2_System_Object_System_Object___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_KeyValuePair_2_System_Object_System_Object__
