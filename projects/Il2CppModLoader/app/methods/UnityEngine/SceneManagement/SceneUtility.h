#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::SceneManagement::SceneUtility {
    IL2CPP_REGISTER_METHOD(0x0297AB00, app::String *, GetScenePathByBuildIndex, (int32_t build_index))
}
