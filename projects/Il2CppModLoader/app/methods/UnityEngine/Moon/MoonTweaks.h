#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Moon::MoonTweaks {
    IL2CPP_REGISTER_METHOD(0x0253D6D0, void, set_bypassParticleEmitterCollisionChecks, (bool value))
    IL2CPP_REGISTER_METHOD(0x0253D720, float, get_millisecondsSpentOnTimeslicedIntegration, ())
} // namespace app::classes::UnityEngine::Moon::MoonTweaks
