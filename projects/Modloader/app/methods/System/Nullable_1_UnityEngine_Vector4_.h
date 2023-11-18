#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector4___Boxed.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::System::Nullable_1_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Vector4, GetValueOrDefault_1, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x00212B90, app::Vector4, get_Value, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00212C80, bool, Equals_1, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00212CD0, bool, Equals_2, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Nullable_1_UnityEngine_Vector4_ other))
    IL2CPP_REGISTER_METHOD(0x00212DC0, int32_t, GetHashCode, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::Vector4, GetValueOrDefault_2, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr, app::Vector4 default_value))
    IL2CPP_REGISTER_METHOD(0x00212E10, app::String*, ToString, (app::Nullable_1_UnityEngine_Vector4___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254F710, app::Object*, Box, (app::Nullable_1_UnityEngine_Vector4_ o))
    IL2CPP_REGISTER_METHOD(0x0254F790, app::Nullable_1_UnityEngine_Vector4_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_UnityEngine_Vector4_
