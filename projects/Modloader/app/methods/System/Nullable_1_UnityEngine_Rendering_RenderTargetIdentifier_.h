#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ {
    IL2CPP_REGISTER_METHOD(0x001F52B0, bool, get_HasValue, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002120A0, app::RenderTargetIdentifier, get_Value, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F55F0, app::RenderTargetIdentifier, GetValueOrDefault_1, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011E7F0, void, ctor, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr, app::RenderTargetIdentifier value))
    IL2CPP_REGISTER_METHOD(0x002121C0, bool, Equals_1, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00212240, bool, Equals_2, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr, app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ other))
    IL2CPP_REGISTER_METHOD(0x002122F0, int32_t, GetHashCode, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F5610, app::RenderTargetIdentifier, GetValueOrDefault_2, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr, app::RenderTargetIdentifier default_value))
    IL2CPP_REGISTER_METHOD(0x00212330, app::String*, ToString, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254EF70, app::Object*, Box, (app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ o))
    IL2CPP_REGISTER_METHOD(0x0254F010, app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_
