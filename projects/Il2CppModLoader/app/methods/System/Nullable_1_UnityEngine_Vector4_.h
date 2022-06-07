#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Nullable_1_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731A40, Nullable_1_UnityEngine_Vector4__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Vector4, GetValueOrDefault_1, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753658, Nullable_1_UnityEngine_Vector4__GetValueOrDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Vector4 value))
    IL2CPP_REGISTER_METHODINFO(0x0472A180, Nullable_1_UnityEngine_Vector4___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00212B90, app::Vector4, get_Value, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761E90, Nullable_1_UnityEngine_Vector4__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00212C80, bool, Equals_1, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x00212CD0, bool, Equals_2, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Nullable_1_UnityEngine_Vector4_ other))
    IL2CPP_REGISTER_METHOD(0x00212DC0, int32_t, GetHashCode, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::Vector4, GetValueOrDefault_2, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Vector4 default_value))
    IL2CPP_REGISTER_METHOD(0x00212E10, app::String *, ToString, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254F710, app::Object *, Box, (app::Nullable_1_UnityEngine_Vector4_ o))
    IL2CPP_REGISTER_METHOD(0x0254F790, app::Nullable_1_UnityEngine_Vector4_, Unbox, (app::Object * o))
}
