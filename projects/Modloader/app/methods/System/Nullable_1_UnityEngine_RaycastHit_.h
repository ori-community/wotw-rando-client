#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UnityEngine_RaycastHit___Boxed.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(0x00211790, void, ctor, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr, app::RaycastHit value))
    IL2CPP_REGISTER_METHOD(0x002117C0, app::RaycastHit, get_Value, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002117B0, bool, get_HasValue, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002118F0, bool, Equals_1, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00211980, bool, Equals_2, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr, app::Nullable_1_UnityEngine_RaycastHit_ other))
    IL2CPP_REGISTER_METHOD(0x00211A40, int32_t, GetHashCode, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00211B30, app::RaycastHit, GetValueOrDefault_1, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00211B60, app::RaycastHit, GetValueOrDefault_2, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr, app::RaycastHit default_value))
    IL2CPP_REGISTER_METHOD(0x00211BC0, app::String*, ToString, (app::Nullable_1_UnityEngine_RaycastHit___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0288B290, app::Object*, Box, (app::Nullable_1_UnityEngine_RaycastHit_ o))
    IL2CPP_REGISTER_METHOD(0x0288B330, app::Nullable_1_UnityEngine_RaycastHit_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_UnityEngine_RaycastHit_
