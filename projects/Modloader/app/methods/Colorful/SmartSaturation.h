#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/SmartSaturation.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::SmartSaturation {
    IL2CPP_REGISTER_METHOD(0x03053130, app::Texture2D*, get_m_CurveTexture, (app::SmartSaturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03053200, void, Reset, (app::SmartSaturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03053430, void, OnEnable, (app::SmartSaturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03053450, void, OnDisable, (app::SmartSaturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030535F0, void, UpdateCurve, (app::SmartSaturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03053A70, void, OnRenderImage, (app::SmartSaturation * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03053D00, app::String*, GetShaderName, (app::SmartSaturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5D320, void, ctor, (app::SmartSaturation * this_ptr))
} // namespace app::classes::Colorful::SmartSaturation
