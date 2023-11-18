#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier.h>

namespace app::classes::SpeedBasedEmissionRateMultiplier {
    IL2CPP_REGISTER_METHOD(0x00EF7FE0, void, OnPoolSpawned, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF80F0, void, Awake, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF8210, void, Start, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF82F0, void, FixedUpdate, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C1CB0, void, HaltEmission, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF86C0, void, HaltEmissionForAFrame, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF8760, void, UnhaltEmission, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF8800, void, BoostEmissionRateForAFrame, (app::SpeedBasedEmissionRateMultiplier * this_ptr, float factor))
    IL2CPP_REGISTER_METHOD(0x00EF88B0, void, UnbumpEmissionRate, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF88C0, void, ctor, (app::SpeedBasedEmissionRateMultiplier * this_ptr))
} // namespace app::classes::SpeedBasedEmissionRateMultiplier
