#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/UberShaderCurve.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderBlock.h>

namespace app::classes::UberShaderCurve {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AnimationCurve*, get_Curve, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190E180, float, get_MaxValue, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190E1A0, float, get_MeanValue, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190E1C0, bool, get_IsSimple, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190E390, float, GetMeanCurveValue, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190E560, float, GetMaxCurveValue, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190E7A0, void, ctor_1, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190E7E0, void, ctor_2, (app::UberShaderCurve * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0190E820, void, ctor_3, (app::UberShaderCurve * this_ptr, app::AnimationCurve* curve))
    IL2CPP_REGISTER_METHOD(0x0190EB50, void, BindProperties, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190ED50, void, CreateTexture, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190EE60, app::Vector4, GetSettings, (app::UberShaderCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190EE90, void, Set, (app::UberShaderCurve * this_ptr, app::String* bind_name, app::UberShaderBlock* attached_block))
} // namespace app::classes::UberShaderCurve
