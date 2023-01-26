#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::SpikeSlugLocomotion {
    IL2CPP_REGISTER_METHOD(0x011D1110, float, get_ContinousRotationSpeed, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D1120, void, set_ContinousRotationSpeed, (app::SpikeSlugLocomotion * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011D1260, bool, get_IsSpinning, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D1110, float, get_ContinousRotation, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D1280, float, get_TimeOnGround, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D1290, void, OnEnable, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D1480, void, OnDisable, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D16B0, void, DamageReceived, (app::SpikeSlugLocomotion * this_ptr, app::DamageResult obj))
    IL2CPP_REGISTER_METHOD(0x011D16C0, void, RegisterContinousRotation, (app::SpikeSlugLocomotion * this_ptr, float rotation_speed))
    IL2CPP_REGISTER_METHOD(0x011D1AD0, void, OnFixedUpdate, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D2040, void, ResetRotation, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5960, void, SetStickToSurfaces, (app::SpikeSlugLocomotion * this_ptr, bool stick_to_surfaces))
    IL2CPP_REGISTER_METHOD(0x011D21D0, bool, ShouldStartFalling, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D2210, void, OnDrawGizmosSelected, (app::SpikeSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D2530, void, ctor, (app::SpikeSlugLocomotion * this_ptr))
} // namespace app::classes::SpikeSlugLocomotion
