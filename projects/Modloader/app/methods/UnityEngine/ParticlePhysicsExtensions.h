#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::ParticlePhysicsExtensions {
    IL2CPP_REGISTER_METHOD(0x031324A0, int32_t, GetCollisionEvents, (app::ParticleSystem * ps, app::GameObject* go, app::List_1_UnityEngine_ParticleCollisionEvent_* collision_events))
    IL2CPP_REGISTER_METHODINFO(0x0471C4A8, ParticlePhysicsExtensions_GetCollisionEvents__MethodInfo)
} // namespace app::classes::UnityEngine::ParticlePhysicsExtensions
