#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParticleSystem_EmissionModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>
#include <Modloader/app/structs/ParticleSystem_Burst__Array.h>
#include <Modloader/app/structs/ParticleSystem_Burst.h>

namespace app::classes::UnityEngine::ParticleSystem_EmissionModule {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, app::ParticleSystem* particle_system))
    IL2CPP_REGISTER_METHOD(0x002472A0, void, set_enabled, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002472B0, bool, get_enabled, (app::ParticleSystem_EmissionModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247310, void, set_rateOverTime, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, app::ParticleSystem_MinMaxCurve value))
    IL2CPP_REGISTER_METHOD(0x00247380, app::ParticleSystem_MinMaxCurve, get_rateOverTime, (app::ParticleSystem_EmissionModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247410, float, get_rateOverTimeMultiplier, (app::ParticleSystem_EmissionModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247470, void, set_rateOverTimeMultiplier, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00247480, void, set_rateOverDistance, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, app::ParticleSystem_MinMaxCurve value))
    IL2CPP_REGISTER_METHOD(0x002474F0, app::ParticleSystem_MinMaxCurve, get_rateOverDistance, (app::ParticleSystem_EmissionModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247580, void, SetBursts_1, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, app::ParticleSystem_Burst__Array* bursts))
    IL2CPP_REGISTER_METHOD(0x002475A0, void, SetBursts_2, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, app::ParticleSystem_Burst__Array* bursts, int32_t size))
    IL2CPP_REGISTER_METHOD(0x002475B0, int32_t, GetBursts, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, app::ParticleSystem_Burst__Array* bursts))
    IL2CPP_REGISTER_METHOD(0x002475C0, void, SetBurst_1, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, int32_t index, app::ParticleSystem_Burst burst))
    IL2CPP_REGISTER_METHOD(0x00247650, app::ParticleSystem_Burst, GetBurst_1, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002476A0, int32_t, get_burstCount, (app::ParticleSystem_EmissionModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247700, void, set_burstCount, (app::ParticleSystem_EmissionModule__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x03133ED0, void, SetEnabled, (app::ParticleSystem * system, bool value))
    IL2CPP_REGISTER_METHOD(0x03133F30, bool, GetEnabled, (app::ParticleSystem * system))
    IL2CPP_REGISTER_METHOD(0x03133F80, int32_t, GetBurstCount, (app::ParticleSystem * system))
    IL2CPP_REGISTER_METHOD(0x03133FD0, void, SetRateOverTime, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x03134030, void, GetRateOverTime, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x03134090, void, SetRateOverTimeMultiplier, (app::ParticleSystem * system, float value))
    IL2CPP_REGISTER_METHOD(0x031340F0, float, GetRateOverTimeMultiplier, (app::ParticleSystem * system))
    IL2CPP_REGISTER_METHOD(0x03134140, void, SetRateOverDistance, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x031341A0, void, GetRateOverDistance, (app::ParticleSystem * system, app::ParticleSystem_MinMaxCurve* curve))
    IL2CPP_REGISTER_METHOD(0x03134200, void, SetBurstCount, (app::ParticleSystem * system, int32_t value))
    IL2CPP_REGISTER_METHOD(0x03134260, void, SetBurst_2, (app::ParticleSystem * system, int32_t index, app::ParticleSystem_Burst burst))
    IL2CPP_REGISTER_METHOD(0x031342D0, void, INTERNAL_CALL_SetBurst, (app::ParticleSystem * system, int32_t index, app::ParticleSystem_Burst* burst))
    IL2CPP_REGISTER_METHOD(0x03134340, app::ParticleSystem_Burst, GetBurst_2, (app::ParticleSystem * system, int32_t index))
    IL2CPP_REGISTER_METHOD(0x03134400, void, INTERNAL_CALL_GetBurst, (app::ParticleSystem * system, int32_t index, app::ParticleSystem_Burst* value))
} // namespace app::classes::UnityEngine::ParticleSystem_EmissionModule
