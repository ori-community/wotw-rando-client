#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Nullable_1_Moon_Rendering_Viewport___Boxed.h>
#include <Modloader/app/structs/Viewport.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Nullable_1_Moon_Rendering_Viewport_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Moon_Rendering_Viewport_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746E50, Nullable_1_Moon_Rendering_Viewport__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F5DB0, app::Viewport, get_Value, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729CC0, Nullable_1_Moon_Rendering_Viewport__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr, app::Viewport value))
    IL2CPP_REGISTER_METHODINFO(0x0474FF58, Nullable_1_Moon_Rendering_Viewport___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F5EA0, bool, Equals_1, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F5EF0, bool, Equals_2, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr, app::Nullable_1_Moon_Rendering_Viewport_ other))
    IL2CPP_REGISTER_METHOD(0x001F4900, int32_t, GetHashCode, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Viewport, GetValueOrDefault_1, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::Viewport, GetValueOrDefault_2, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr, app::Viewport default_value))
    IL2CPP_REGISTER_METHOD(0x001F5F50, app::String*, ToString, (app::Nullable_1_Moon_Rendering_Viewport___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254F710, app::Object*, Box, (app::Nullable_1_Moon_Rendering_Viewport_ o))
    IL2CPP_REGISTER_METHOD(0x0254F790, app::Nullable_1_Moon_Rendering_Viewport_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_Moon_Rendering_Viewport_
