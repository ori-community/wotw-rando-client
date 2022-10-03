#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Nullable_1_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00210BE0, app::Color, get_Value, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C8B8, Nullable_1_UnityEngine_Color__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00210CD0, bool, Equals_1, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00210D20, bool, Equals_2, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr, app::Nullable_1_UnityEngine_Color_ other))
    IL2CPP_REGISTER_METHOD(0x00210E10, int32_t, GetHashCode, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Color, GetValueOrDefault_1, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::Color, GetValueOrDefault_2, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr, app::Color default_value))
    IL2CPP_REGISTER_METHOD(0x00210E60, app::String*, ToString, (app::Nullable_1_UnityEngine_Color___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254F710, app::Object*, Box, (app::Nullable_1_UnityEngine_Color_ o))
    IL2CPP_REGISTER_METHOD(0x0254F790, app::Nullable_1_UnityEngine_Color_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_UnityEngine_Color_
