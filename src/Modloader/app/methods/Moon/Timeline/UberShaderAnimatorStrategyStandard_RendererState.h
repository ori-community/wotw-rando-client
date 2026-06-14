#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_RendererState.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Float__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Vector__Enum.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::Moon::Timeline::UberShaderAnimatorStrategyStandard_RendererState {
    IL2CPP_REGISTER_METHOD(0x00D18960, bool, get_IsValid, app::UberShaderAnimatorStrategyStandard_RendererState* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D18A60,
        void,
        AddColorRequest,
        app::UberShaderAnimatorStrategyStandard_RendererState* this_ptr,
        app::Renderer* renderer,
        app::UberShaderProperty_Color__Enum property,
        app::Color value,
        float weight,
        bool persist
    )
    IL2CPP_REGISTER_METHOD(
        0x00D18DD0,
        app::Color,
        GetBaseColor,
        app::UberShaderAnimatorStrategyStandard_RendererState* this_ptr,
        app::Renderer* renderer,
        app::UberShaderProperty_Color__Enum property
    )
    IL2CPP_REGISTER_METHOD(
        0x00D19040,
        void,
        AddVector4Request,
        app::UberShaderAnimatorStrategyStandard_RendererState* this_ptr,
        app::Renderer* renderer,
        app::UberShaderProperty_Vector__Enum property,
        app::Vector4 value,
        float weight,
        bool persist
    )
    IL2CPP_REGISTER_METHOD(
        0x00D193B0,
        void,
        AddFloatRequest,
        app::UberShaderAnimatorStrategyStandard_RendererState* this_ptr,
        app::Renderer* renderer,
        app::UberShaderProperty_Float__Enum property,
        float value,
        float weight,
        bool persist
    )
    IL2CPP_REGISTER_METHOD(0x00D19700, void, ctor, app::UberShaderAnimatorStrategyStandard_RendererState* this_ptr)
} // namespace app::classes::Moon::Timeline::UberShaderAnimatorStrategyStandard_RendererState
