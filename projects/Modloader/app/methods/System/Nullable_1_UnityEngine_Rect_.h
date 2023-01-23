#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Rect___Boxed.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BF60, Nullable_1_UnityEngine_Rect__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00211D50, app::Rect, get_Value, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745F00, Nullable_1_UnityEngine_Rect__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHODINFO(0x047794A0, Nullable_1_UnityEngine_Rect___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00211E40, bool, Equals_1, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00211E90, bool, Equals_2, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr, app::Nullable_1_UnityEngine_Rect_ other))
    IL2CPP_REGISTER_METHOD(0x00211F80, int32_t, GetHashCode, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Rect, GetValueOrDefault_1, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::Rect, GetValueOrDefault_2, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr, app::Rect default_value))
    IL2CPP_REGISTER_METHOD(0x00211FD0, app::String*, ToString, (app::Nullable_1_UnityEngine_Rect___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254F710, app::Object*, Box, (app::Nullable_1_UnityEngine_Rect_ o))
    IL2CPP_REGISTER_METHOD(0x0254F790, app::Nullable_1_UnityEngine_Rect_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_UnityEngine_Rect_
