#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>

namespace app::classes::MinMaxCurveExtensions {
    IL2CPP_REGISTER_METHOD(0x02557D20, app::ParticleSystem_MinMaxCurve, Scale, app::ParticleSystem_MinMaxCurve target, float factor)
}
