#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Boxed.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(0x00150D00, void, ctor, (app::KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Boxed * this_ptr, int32_t key, app::RaycastHit value))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Key, (app::KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00150D30, app::RaycastHit, get_Value, (app::KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00150D60, app::String*, ToString, (app::KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_
