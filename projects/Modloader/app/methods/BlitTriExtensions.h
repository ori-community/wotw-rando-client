#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/Viewport.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Array.h>

namespace app::classes::BlitTriExtensions {
    IL2CPP_REGISTER_METHOD(0x00D2B910, app::Material*, get_defaultMaterial, ())
    IL2CPP_REGISTER_METHOD(0x00D2BBE0, int32_t, UpdateSmartBlitProps, (app::CommandBuffer * cmd, app::Viewport* vp, int32_t quad_size))
    IL2CPP_REGISTER_METHOD(0x00D2BDB0, void, BlitTri_1, (app::CommandBuffer * cmd, app::RenderTargetIdentifier source, app::Material* material, int32_t pass, app::Nullable_1_UnityEngine_Vector4_ source_s_t, app::Nullable_1_UnityEngine_Rect_ destination_viewport, int32_t smart_cnt, bool source_is_m_s))
    IL2CPP_REGISTER_METHOD(0x00D2C300, void, BlitTri_2, (app::CommandBuffer * cmd, app::RenderTargetIdentifier source, app::RenderTargetIdentifier destination, app::Material* material, int32_t pass, app::Nullable_1_UnityEngine_Vector4_ source_s_t, app::Nullable_1_UnityEngine_Rect_ destination_viewport, app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth, int32_t smart_cnt, bool source_is_m_s))
    IL2CPP_REGISTER_METHOD(0x00D2C580, void, BlitTri_3, (app::CommandBuffer * cmd, app::RenderTargetIdentifier source, app::RenderTargetIdentifier destination, app::Material* material, int32_t pass, app::Nullable_1_UnityEngine_Vector2_ source_scale, app::Vector2 source_offset, app::Nullable_1_UnityEngine_Rect_ destination_viewport, app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth, int32_t smart_cnt, bool source_is_m_s))
    IL2CPP_REGISTER_METHOD(0x00D2C7C0, void, BlitTri_4, (app::CommandBuffer * cmd, app::RenderTargetIdentifier source, app::RenderTargetIdentifier__Array* destination, app::Material* material, int32_t pass, app::Nullable_1_UnityEngine_Vector2_ source_scale, app::Vector2 source_offset, app::Nullable_1_UnityEngine_Rect_ destination_viewport, app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth, int32_t smart_cnt, bool source_is_m_s))
    IL2CPP_REGISTER_METHOD(0x00D2CA50, void, cctor, ())
} // namespace app::classes::BlitTriExtensions
