#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::SceneManagement::SceneUtility {
    IL2CPP_REGISTER_METHOD(0x0297AB00, app::String*, GetScenePathByBuildIndex, (int32_t build_index))
}
