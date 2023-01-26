#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GradientAlphaKey__Array.h>
#include <Modloader/app/structs/GradientColorKey__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#include <Modloader/app/structs/UberShaderCurveBake_GradientData.h>

namespace app::classes::UberShaderCurveBake {
    IL2CPP_REGISTER_METHOD(0x0190EFA0, bool, GradientsAreEqual, (app::Gradient * a, app::UberShaderCurveBake_GradientData data))
    IL2CPP_REGISTER_METHOD(0x0190F1E0, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x0190F480, app::String*, GetCurveString, (app::AnimationCurve * curve))
    IL2CPP_REGISTER_METHOD(0x0190F9D0, app::String*, GetGradientString, (app::Gradient * g))
    IL2CPP_REGISTER_METHOD(0x0190FD00, app::Texture2D*, BakeAnimationCurve, (app::AnimationCurve * curve, app::TextureWrapMode__Enum wrap_mode, int32_t resolution, float* scale, float* duration))
    IL2CPP_REGISTER_METHOD(0x01910200, app::GradientColorKey__Array*, GetColorKeys, (app::Gradient * gradient))
    IL2CPP_REGISTER_METHOD(0x01910300, app::GradientAlphaKey__Array*, GetAlphakeys, (app::Gradient * gradient))
    IL2CPP_REGISTER_METHOD(0x01910400, app::Texture2D*, BakeAnimationGradient, (app::Gradient * gradient, int32_t resolution))
} // namespace app::classes::UberShaderCurveBake
