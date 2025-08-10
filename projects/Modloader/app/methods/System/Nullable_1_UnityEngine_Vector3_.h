#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Nullable_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x001EB610, void, ctor, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x001F6D10, bool, get_HasValue, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F6FC0, app::Vector3, GetValueOrDefault_1, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00212800, app::Vector3, get_Value, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00212900, bool, Equals_1, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x00212960, bool, Equals_2, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr, app::Nullable_1_UnityEngine_Vector3_ other)
    IL2CPP_REGISTER_METHOD(0x00212A40, int32_t, GetHashCode, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F6FE0, app::Vector3, GetValueOrDefault_2, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr, app::Vector3 default_value)
    IL2CPP_REGISTER_METHOD(0x00212AA0, app::String*, ToString, app::Nullable_1_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025502C0, app::Object*, Box, app::Nullable_1_UnityEngine_Vector3_ o)
    IL2CPP_REGISTER_METHOD(0x02550350, app::Nullable_1_UnityEngine_Vector3_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_UnityEngine_Vector3_
