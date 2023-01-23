#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParticleSystem_ShapeModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::ParticleSystem_ShapeModule {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ParticleSystem_ShapeModule__Boxed * this_ptr, app::ParticleSystem* particle_system))
    IL2CPP_REGISTER_METHOD(0x00248950, app::Vector3, get_scale, (app::ParticleSystem_ShapeModule__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002489E0, void, set_scale, (app::ParticleSystem_ShapeModule__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x03135670, void, SetScale, (app::ParticleSystem * system, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x031356D0, void, INTERNAL_CALL_SetScale, (app::ParticleSystem * system, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x03135730, app::Vector3, GetScale, (app::ParticleSystem * system))
    IL2CPP_REGISTER_METHOD(0x031357B0, void, INTERNAL_CALL_GetScale, (app::ParticleSystem * system, app::Vector3* value))
} // namespace app::classes::UnityEngine::ParticleSystem_ShapeModule
