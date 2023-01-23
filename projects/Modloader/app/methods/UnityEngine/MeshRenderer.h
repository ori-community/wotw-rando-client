#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MeshRenderer.h>

namespace app::classes::UnityEngine::MeshRenderer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DontStripMeshRenderer, (app::MeshRenderer * this_ptr))
}
