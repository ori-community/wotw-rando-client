#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::ParticleSystemExtensionsImpl {
    IL2CPP_REGISTER_METHOD(0x03136050, int32_t, GetCollisionEvents, (app::ParticleSystem * ps, app::GameObject * go, app::Object * collision_events))
}
