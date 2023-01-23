#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::MinMaxGradientExtensions {
    IL2CPP_REGISTER_METHOD(0x02557D70, app::ParticleSystem_MinMaxGradient, MultiplyColor, (app::ParticleSystem_MinMaxGradient target, app::Color color))
    IL2CPP_REGISTER_METHOD(0x02557F00, app::ParticleSystem_MinMaxGradient, OverrideColor, (app::ParticleSystem_MinMaxGradient target, app::Color color))
} // namespace app::classes::MinMaxGradientExtensions
