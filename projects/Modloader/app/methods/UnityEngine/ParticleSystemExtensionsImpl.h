#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::ParticleSystemExtensionsImpl {
    IL2CPP_REGISTER_METHOD(0x03136050, int32_t, GetCollisionEvents, (app::ParticleSystem * ps, app::GameObject* go, app::Object* collision_events))
}
