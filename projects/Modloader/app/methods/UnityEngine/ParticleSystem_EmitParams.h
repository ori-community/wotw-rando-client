#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParticleSystem_EmitParams__Boxed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::ParticleSystem_EmitParams {
    IL2CPP_REGISTER_METHOD(0x00247940, void, set_position, (app::ParticleSystem_EmitParams__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_velocity, (app::ParticleSystem_EmitParams__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247960, void, set_velocity, (app::ParticleSystem_EmitParams__Boxed * this_ptr, app::Vector3 value))
} // namespace app::classes::UnityEngine::ParticleSystem_EmitParams
