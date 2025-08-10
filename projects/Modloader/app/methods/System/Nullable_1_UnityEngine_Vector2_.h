#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::System::Nullable_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x002126E0, app::Vector2, GetValueOrDefault_1, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr, app::Vector2 default_value)
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014BA90, app::Vector2, GetValueOrDefault_2, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00212440, app::Vector2, get_Value, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011D290, void, ctor, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00212550, bool, Equals_1, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x002125C0, bool, Equals_2, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr, app::Nullable_1_UnityEngine_Vector2_ other)
    IL2CPP_REGISTER_METHOD(0x00212690, int32_t, GetHashCode, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00212710, app::String*, ToString, app::Nullable_1_UnityEngine_Vector2___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0288B880, app::Object*, Box, app::Nullable_1_UnityEngine_Vector2_ o)
    IL2CPP_REGISTER_METHOD(0x0288B8F0, app::Nullable_1_UnityEngine_Vector2_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_UnityEngine_Vector2_
