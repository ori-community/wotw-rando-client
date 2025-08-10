#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyTransparencyAnimator_RendererData__Boxed.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>

namespace app::classes::LegacyTransparencyAnimator_RendererData {
    IL2CPP_REGISTER_METHOD(
        0x00124870,
        void,
        ctor,
        app::LegacyTransparencyAnimator_RendererData__Boxed* this_ptr,
        app::Renderer* renderer,
        app::UberShaderProperty_Color__Enum property
    )
    IL2CPP_REGISTER_METHOD(
        0x00124880,
        void,
        SetRendererAlpha,
        app::LegacyTransparencyAnimator_RendererData__Boxed* this_ptr,
        int32_t mode,
        app::UberShaderProperty_Color__Enum property,
        float value
    )
} // namespace app::classes::LegacyTransparencyAnimator_RendererData
