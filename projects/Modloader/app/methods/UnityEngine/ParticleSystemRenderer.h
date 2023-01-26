#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystemRenderer.h>

namespace app::classes::UnityEngine::ParticleSystemRenderer {
    IL2CPP_REGISTER_METHOD(0x031360C0, int32_t, Internal_GetMeshCount, (app::ParticleSystemRenderer * this_ptr))
}
