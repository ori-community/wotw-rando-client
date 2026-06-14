#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_UnityEngine_Vector2___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(
        0x00151BF0,
        void,
        ctor,
        app::KeyValuePair_2_System_Object_UnityEngine_Vector2___Boxed* this_ptr,
        app::Object* key,
        app::Vector2 value
    )
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, app::KeyValuePair_2_System_Object_UnityEngine_Vector2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00151C10, app::Vector2, get_Value, app::KeyValuePair_2_System_Object_UnityEngine_Vector2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00151960, app::String*, ToString, app::KeyValuePair_2_System_Object_UnityEngine_Vector2___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_UnityEngine_Vector2_
