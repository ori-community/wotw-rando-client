#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuiltinRenderTextureType__Enum.h>
#include <Modloader/app/structs/CubemapFace__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>

namespace app::classes::UnityEngine::Rendering::RenderTargetIdentifier {
    IL2CPP_REGISTER_METHOD(0x00218440, void, ctor_1, app::RenderTargetIdentifier__Boxed* this_ptr, app::BuiltinRenderTextureType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00218450, void, ctor_2, app::RenderTargetIdentifier__Boxed* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(
        0x00218460,
        void,
        ctor_3,
        app::RenderTargetIdentifier__Boxed* this_ptr,
        app::RenderTargetIdentifier render_target_identifier,
        int32_t mip_level,
        app::CubemapFace__Enum cube_face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(0x002184A0, void, ctor_4, app::RenderTargetIdentifier__Boxed* this_ptr, app::Texture* tex)
    IL2CPP_REGISTER_METHOD(0x02978090, app::RenderTargetIdentifier, op_Implicit_1, app::BuiltinRenderTextureType__Enum type)
    IL2CPP_REGISTER_METHOD(0x02978170, app::RenderTargetIdentifier, op_Implicit_2, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x02978250, app::RenderTargetIdentifier, op_Implicit_3, app::Texture* tex)
    IL2CPP_REGISTER_METHOD(0x002184B0, app::String*, ToString, app::RenderTargetIdentifier__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002184C0, int32_t, GetHashCode, app::RenderTargetIdentifier__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002184D0, bool, Equals_1, app::RenderTargetIdentifier__Boxed* this_ptr, app::RenderTargetIdentifier rhs)
    IL2CPP_REGISTER_METHOD(0x00218550, bool, Equals_2, app::RenderTargetIdentifier__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02978630, bool, op_Inequality, app::RenderTargetIdentifier lhs, app::RenderTargetIdentifier rhs)
    inline bool operator!=(app::RenderTargetIdentifier lhs, app::RenderTargetIdentifier rhs) { return op_Inequality(lhs, rhs); }
} // namespace app::classes::UnityEngine::Rendering::RenderTargetIdentifier
