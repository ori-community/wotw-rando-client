#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_UnityEngine_Bounds_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x001520E0, void, ctor, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Boxed* this_ptr, app::Bounds key, bool value)
    IL2CPP_REGISTER_METHOD(0x00152100, app::Bounds, get_Key, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010FB00, bool, get_Value, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00152120, app::String*, ToString, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_UnityEngine_Bounds_System_Boolean_
