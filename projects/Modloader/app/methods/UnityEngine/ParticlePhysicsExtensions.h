#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleCollisionEvent_.h>
#include <Modloader/app/structs/ParticleSystem.h>

namespace app::classes::UnityEngine::ParticlePhysicsExtensions {
    IL2CPP_REGISTER_METHOD(
        0x031324A0,
        int32_t,
        GetCollisionEvents,
        app::ParticleSystem* ps,
        app::GameObject* go,
        app::List_1_UnityEngine_ParticleCollisionEvent_* collision_events
    )
}
