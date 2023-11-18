#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::AI::NavMesh {
    IL2CPP_REGISTER_METHOD(0x031B1160, void, Internal_CallOnNavMeshPreUpdate, ())
}
