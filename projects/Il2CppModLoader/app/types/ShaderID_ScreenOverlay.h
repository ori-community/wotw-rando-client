#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ScreenOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ScreenOverlay__Class** type_info;
        inline app::ShaderID_ScreenOverlay__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ScreenOverlay__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ScreenOverlay");
        }
        inline app::ShaderID_ScreenOverlay* create() {
            return il2cpp::create_object<app::ShaderID_ScreenOverlay>(get_class());
        }
    } // namespace ShaderID_ScreenOverlay
} // namespace app::classes::types
