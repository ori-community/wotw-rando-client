#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Gradient.h>

namespace app::classes::GradientExtensions {
    IL2CPP_REGISTER_METHOD(0x02556EB0, app::Gradient*, MultiplyColor, app::Gradient* target, app::Color color)
    IL2CPP_REGISTER_METHOD(0x02557060, app::Gradient*, OverrideColor, app::Gradient* target, app::Color color)
} // namespace app::classes::GradientExtensions
