#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_EdgeDetection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_EdgeDetection__Class** type_info;
        inline app::ShaderID_EdgeDetection__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_EdgeDetection__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_EdgeDetection");
        }
        inline app::ShaderID_EdgeDetection* create() {
            return il2cpp::create_object<app::ShaderID_EdgeDetection>(get_class());
        }
    } // namespace ShaderID_EdgeDetection
} // namespace app::classes::types
