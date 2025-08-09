#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem_Burst__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>

namespace app::classes::UnityEngine::ParticleSystem_Burst {
    IL2CPP_REGISTER_METHOD(0x002470A0, app::ParticleSystem_MinMaxCurve, get_count, app::ParticleSystem_Burst__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002470C0, void, set_count, app::ParticleSystem_Burst__Boxed* this_ptr, app::ParticleSystem_MinMaxCurve value)
    IL2CPP_REGISTER_METHOD(0x002470D0, int16_t, get_minCount, app::ParticleSystem_Burst__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002470E0, void, set_minCount, app::ParticleSystem_Burst__Boxed* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x002470F0, int16_t, get_maxCount, app::ParticleSystem_Burst__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00247100, void, set_maxCount, app::ParticleSystem_Burst__Boxed* this_ptr, int16_t value)
} // namespace app::classes::UnityEngine::ParticleSystem_Burst
