#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_UnityEngine_Vector4___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x00151540, void, ctor, (app::KeyValuePair_2_System_Object_UnityEngine_Vector4___Boxed * this_ptr, app::Object* key, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, (app::KeyValuePair_2_System_Object_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00151550, app::Vector4, get_Value, (app::KeyValuePair_2_System_Object_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00151560, app::String*, ToString, (app::KeyValuePair_2_System_Object_UnityEngine_Vector4___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_UnityEngine_Vector4_
